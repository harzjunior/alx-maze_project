#include "maze.h"


/**
 * create_game_struct - dynamically allocate memory to user defined structures
 * @game_window: pointer to the a GAME_WINDOW struct to be assign to
 *		 a field in RAYCAST_DATA
 *
 * Return: pointer to a RAYCAST_DATA struct
 */
RAYCAST_DATA *create_game_struct(GAME_WINDOW *game_window)
{
	RAYCAST_DATA *rc_data;

	/* Dynamically allocate memory to key structures [raycast_struct.h] */
	(rc_data) = malloc(sizeof(RAYCAST_DATA));
	if ((rc_data) == NULL)
		return (NULL);
	(rc_data)->player_data = malloc(sizeof(PLAYER_DATA));
	if ((rc_data)->player_data == NULL)
		return (NULL);
	(rc_data)->ray_data = malloc(sizeof(RAY_DATA));
	if ((rc_data)->ray_data == NULL)
		return (NULL);
	(rc_data)->timing_data = malloc(sizeof(TIMING_DATA));
	if ((rc_data)->timing_data == NULL)
		return (NULL);
	(rc_data)->world_map = load_map();
	if ((rc_data)->world_map == NULL)
		return (NULL);
	(rc_data)->game_w = game_window;
	if ((rc_data)->game_w == NULL)
		return (NULL);

	return (rc_data);
}


/**
 * init_PT_data - initializes the player_data and TIMING_DATA struct
 * @p_data: pointer to a PLAYER_DATA struct
 * @t_data: pointer to a TIMING_DATA struct
 *
 * Return: 0 on success
 */
int init_PT_data(PLAYER_DATA *p_data, TIMING_DATA *t_data)
{
	/* Player structure data, 30, 24 */
	(p_data)->posX = 30;
	(p_data)->posY = 13;
	(p_data)->dirX = -1;
	(p_data)->dirY = 0;
	(p_data)->planeX = 0;
	(p_data)->planeY = 0.66;

	/* Time structure data */
	(t_data)->time = 0;
	(t_data)->oldTime = 0;
	(t_data)->frameTime = 0;
	(t_data)->moveSpeed = 0;
	(t_data)->rotSpeed = 0;

	return (0);
}

/**
 * init_Ray_data - initializes and assigns values to player_data and ray_data
 * @p_data: PLAYER_DATA structure
 * @r_data: RAY_DATA structure
 * @x: current screen vertical component in iteration
 *
 * Return: 0 on success, otherwise 1
 */
int init_Ray_data(PLAYER_DATA *p_data, RAY_DATA *r_data, int x)
{
	/* Calculate ray position and direction */
	(r_data)->cameraX = ((2 * x) / (double)SCREEN_WIDTH) - 1;
	r_data->rayDirX = (p_data)->dirX + (p_data)->planeX * (r_data)->cameraX;
	r_data->rayDirY = (p_data)->dirY + (p_data)->planeY * (r_data)->cameraX;

	/* Which box of the map player is in */
	(r_data)->mapX = (int)(p_data)->posX;
	(r_data)->mapY = (int)(p_data)->posY;

	r_data->deltaDistX = r_data->rayDirX == 0 ? 1e30 : fabs(1 / r_data->rayDirX);
	r_data->deltaDistY = r_data->rayDirY == 0 ? 1e30 : fabs(1 / r_data->rayDirY);

	/* Calculate step and initial sideDist */
	if ((r_data)->rayDirX < 0)
	{
		(r_data)->stepX = -1;
		(r_data)->sideDistX = (p_data)->posX - (r_data)->mapX;
		(r_data)->sideDistX *= (r_data)->deltaDistX;
	}
	else
	{
		(r_data)->stepX = 1;
		(r_data)->sideDistX = (r_data)->mapX + 1.0 - (p_data)->posX;
		(r_data)->sideDistX *= (r_data)->deltaDistX;
	}
	if ((r_data)->rayDirY < 0)
	{
		(r_data)->stepY = -1;
		(r_data)->sideDistY = ((p_data)->posY - (r_data)->mapY);
		(r_data)->sideDistY *= (r_data)->deltaDistY;
	}
	else
	{
		(r_data)->stepY = 1;
		(r_data)->sideDistY = ((r_data)->mapY + 1.0 - (p_data)->posY);
		(r_data)->sideDistY *= (r_data)->deltaDistY;
	}

	return (0);
}


/**
 * load_map - creates the game map
 *
 * Description: loads the game map from a file and
 *		converts it into a 2D array
 * Return: pointer to a 2D array of the game map on success, otherwise NULL
 */
int **load_map(void)
{
	char line[MAP_HEIGHT + 1], *path;
	int fd, i, j, readcount, **map;

	map = malloc(sizeof(int *) * MAP_WIDTH);
	for (i = 0; i < MAP_WIDTH; i++)
	{
		map[i] = malloc(sizeof(int) * MAP_HEIGHT);
		if (map[i] == NULL)
			return (NULL);
	}

	/* path = "./maps/map1.txt"; */
	path = "./maps/map2.txt";
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		printf("File not found\n");
		return (NULL);
	}

	/* Assigns data from opened file 'fd' to 2D array, 'map */
	for (i = 0; i < MAP_WIDTH; i++)
	{
		readcount = read(fd, line, MAP_HEIGHT + 1);
		/* Skip if number of bytes read is not equal to MAP_HEIGHT */
		if (readcount != (MAP_HEIGHT + 1))
			continue;
		for (j = 0; j < MAP_HEIGHT; j++)
		{
			map[i][j] = line[j] - '0';
		}
	}
	close(fd);

	return (map);
}

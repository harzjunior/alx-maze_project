# ELECTRIFIER MAZE

![Game GIF](/pics/readme_gif.gif)

## Table of Contents
- [ELECTRIFIER MAZE](#electrifier-maze)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Game Controls](#game-controls)
  - [Tools Used](#tools-used)
  - [Progress](#progress)
  - [Challenges and Adaptations](#challenges-and-adaptations)
  - [Project Updates](#project-updates)
  - [Assessment of Project Completion](#assessment-of-project-completion)
  - [Contributors](#contributors)

## Introduction
Electrifier Maze is a game developed using the Raycasting technique, serving as my portfolio project. This project was undertaken independently due to the unavailability of a partner at the initial stage. The goal is to navigate through a maze from the starting point with black walls to the endpoint with white walls.

## Prerequisites
- Debian/Ubuntu or Fedora OS
- A Bash terminal
- A user with superuser privileges
- git - Follow the instructions [here](https://github.com/git-guides/install-git#install-git-on-linux) to install git on your machine.

This game is designed to be compiled and run exclusively on a Linux machine.

## Installation
In a Bash terminal, execute the commands following the `$` sign below.

- **Clone the repository:**
  ```bash
  user@user-pc:~/$ git clone https://github.com/0xElectrifier/alx-maze_project
  Cloning into 'alx-maze_project'...
  ...
  ```

- **Install the SDL2 library on your machine:**
  ```bash
  user@user-pc:~/$ ./install_sdl2.sh
  Reading package lists... Done
  Building dependency tree... Done
  Reading state information... Done
  ...
  ```

- **Compile the game files:**
  ```bash
  user@user-pc:~/$ cd alx-maze_project/
  user@user-pc:~/alx-maze_project/$ ./build.sh
  ```

## Game Controls
Use these keys to navigate your way around the game.

| Keys                  | Function       |
|  :-------             | :---------     |
| `w` or `up arrow`     | Move forward   |
| `s` or `down arrow`   | Move backward  |
| `a` or `left arrow`   | Turn left       |
| `d` or `right arrow`  | Turn right      |

## Tools Used
As part of the project requirements, the game was built using the SDL2 library and Raycasting Technique. Noteworthy tools include:

- **ChatGPT:** ChatGPT served as a valuable resource for researching and gaining a better understanding of the Raycasting technique and SDL2 library. It provided insights into implementation strategies and design considerations.

- **Raycasting:** A rendering technique that creates 3D perspective from a 2D map. The 2D map used in this game is stored in a [file](/map/map1.txt), with a function reading the file line by line and storing each character in a 2D array representing the length and breadth of the map. Further information about Raycasting can be found [here](https://permadi.com/1996/05/ray-casting-tutorial-table-of-contents/).

- **SDL2:** SDL (The Simple DirectMedia Layer) is a cross-platform development library designed for low-level access to audio, video, mouse, keyboard, and graphics hardware via OpenGL and Direct3D. SDL2, the second version of the SDL library, was used in this project. Learn more about SDL2 [here](https://lazyfoo.net/tutorials/SDL/index.php).

## Progress
I'd rate the progress this week at around 8 out of 10. The measurement is based on the completion of key milestones and the successful resolution of challenges encountered during the development of the Electrifier Maze project.

**Reasoning for the Rating:**

1. **Achievement of Milestones:** I've successfully achieved significant milestones outlined in the project plan. The completion of the core functionalities, including SDL2 integration, Raycasting technique implementation, and basic gameplay mechanics, contributes to the high rating.

2. **Addressing Challenges:** Despite facing unexpected technical challenges, the ability to effectively resolve them and adapt the project plan demonstrates resilience and a proactive approach. The refined user documentation and improved compatibility address issues reported by users, enhancing the overall project quality.

3. **Engagement with the Community:** Actively engaging with the community has yielded valuable insights and feedback. The incorporation of suggestions from contributors and users reflects an iterative development process, contributing to the project's ongoing improvement.

4. **Remaining Tasks:** While substantial progress has been made, there are still tasks to be completed, such as visual and gameplay refinements, accessibility features, and further testing. The rating considers the existing achievements while acknowledging the ongoing work required for a comprehensive and polished project.

## Challenges and Adaptations
The challenges encountered during the project were not initially evident in the research phase. Several unforeseen technical and non-technical challenges arose, prompting adjustments to the initial plan.

**Technical Challenges:**
1. **SDL2 Library Integration:** Integrating the SDL2 library presented unexpected hurdles. Despite thorough research, nuances in the implementation process emerged, necessitating modifications to the integration strategy outlined in the initial plan.

2. **Raycasting Implementation:** The complexity of implementing the Raycasting technique proved more challenging than anticipated. Fine-tuning the rendering process and ensuring accurate 3D perspective from a 2D map demanded iterative adjustments to adhere to the project's standards.

3. **Compatibility Issues:** Unforeseen compatibility issues with different Linux distributions surfaced during user testing. This led to revisiting the installation process and making adjustments to enhance compatibility across various environments.

**Non-Technical Challenges:**
1. **Time Management:** Balancing the project alongside other commitments posed a non-technical challenge. Adapting the plan involved optimizing time and prioritizing tasks to meet project deadlines while maintaining quality.

2. **Learning Curve:** The learning curve associated with game development, especially for someone exploring the field, presented an unexpected challenge. The need for additional research and skill acquisition influenced the timeline and required flexibility in the project schedule.

3. **Communication with Contributors:** Coordinating efforts with contributors, particularly in understanding and implementing suggestions from external sources like ChatGPT, introduced communication challenges. Adjustments were made to streamline collaboration and ensure efficient integration of external input.

Adaptations to Address Challenges:
To overcome these challenges, the following adaptations were made:

1. **Iterative Development:** Adopting an iterative development approach allowed for continuous refinement of code and implementation. Regular testing and feedback loops facilitated the identification and resolution of technical challenges in real-time.

2. **Enhanced Documentation:** Recognizing the complexity of certain components, documentation was expanded to provide clearer instructions for users and contributors. This adaptation aimed to mitigate potential issues arising from the SDL2 integration and Raycasting technique.

3. **Flexible Milestones:** The project plan was revised to include more flexible milestones, accommodating unexpected technical complexities and allowing for additional time for learning and skill development.

4. **Collaborative Tools:** Leveraging collaborative tools and

 communication channels facilitated smoother interactions with contributors. This adaptation aimed to streamline the integration of suggestions and enhance the overall collaborative experience.

In summary, the challenges encountered prompted a dynamic approach to project management, involving iterative development, enhanced documentation, flexible milestones, and improved collaboration to ensure the successful completion of the Electrifier Maze project.

## Project Updates
As the Electrifier Maze project progresses, I've identified certain updates to the deliverables, each driven by considerations to enhance the project's quality, usability, and overall impact. Here are the key changes:

1. **User Documentation Enhancement:**
   - *Reasoning:* Recognizing the importance of user guidance, I am expanding and refining the user documentation. This includes more detailed instructions for installation, gameplay controls, and troubleshooting tips. The aim is to improve the overall user experience and provide comprehensive support.

2. **Compatibility Improvements:**
   - *Reasoning:* Addressing compatibility challenges reported by users on different Linux distributions, I am refining the installation process to ensure broader compatibility. This involves revisiting dependencies and providing clearer instructions to accommodate a wider range of environments.

3. **Visual and Gameplay Refinements:**
   - *Reasoning:* Iterative testing has revealed opportunities for visual and gameplay enhancements. These include refining the rendering process, optimizing graphics, and fine-tuning controls to provide a more immersive and enjoyable gaming experience.

4. **Incorporating Community Feedback:**
   - *Reasoning:* Actively engaging with the community has generated valuable feedback. I am incorporating suggestions from users and contributors to address specific pain points, improve functionality, and refine certain design elements based on collective input.

5. **Expanded Tools Section:**
   - *Reasoning:* Recognizing the importance of transparency in the development process, I am expanding the "Tools Used" section. This includes more detailed information about the role of ChatGPT, SDL2, and Raycasting in the project, providing users with a deeper understanding of the underlying technologies.

6. **Accessibility Features:**
   - *Reasoning:* To enhance inclusivity, I am exploring the integration of accessibility features. This may involve options for customizable controls, color schemes, or other elements that cater to a diverse user base and ensure a more inclusive gaming experience.

These updates aim to address identified areas for improvement, respond to user feedback, and elevate the overall quality of the Electrifier Maze project. The iterative nature of these adjustments reflects a commitment to ongoing refinement and a desire to deliver a polished and user-friendly portfolio piece.

## Assessment of Project Completion
Considering the current rate of progress and the remaining tasks, the project is well on track to be completed within the specified timeline outlined in the Project Proposal and MVP definition. The proactive approach to challenges, engagement with the community, and adherence to iterative development principles contribute to the confidence in meeting the project goals within the set timeframe.

## Contributors
- [Haruna Bah Jibril](https://www.linkedin.com/in/harzjunior/)

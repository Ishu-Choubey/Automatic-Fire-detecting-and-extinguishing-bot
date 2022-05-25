<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->

 <h2 align="center">Automatic-Fire-detecting-and-extinguishing-bot</h2>
 <br/>
Fire is one of five major elements on earth, during this period of advancement fires and accidents are common, detecting fire and extinguishing is a hazardous job for a fire extinguisher, it often risks the life of that person. Our motive is to build a LOW-COST robot which can detect fire automatically and then put it out on its own. This is a self-acting robot able to move on its own using motors if it detects any kind of fire using flame sensor and then it automatically put out fires using a water storage tank and pump onboard, everything is controlled by a microcontroller that is ARDUINO UNO R3, using data from three different flame sensors it moves in the direction of fire spot and follows the trail of fire detected afterwards.
<br/>

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary><h2 style="display: inline-block">TABLE OF CONTENTS</h2></summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li><a href="#working">Working</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

Robot is a machine that looks like a human being and performs various complex tasks. There are many types of robots such as fixed base robot, mobile robot, underwater robot, humanoid robot, space robot and medicine robot etc. Our project looks like a three wheeled car and it is focused on a firefighting robot. The firefighting robot is programmed to search and extinguish fires in affected areas. The consequences of fire cannot be prevented, and they can occur anywhere. This robot is equipped with three flame sensors used to sense environmental fire and feed the signals to the microcontroller in order to trigger the pump which sprinkles water in order to extinguish the fire. The robot chases the flame till it becomes stationary and extinguishes it. This robot implements the concepts of environmental fire sensing, proportional motor control. The motor driver is used for the bidirectional control of the motors equipped in the robot. In short, the act of sprinkling water on a fire is known as firefighting. The robotic vehicle is equipped with water tanks and a pump that is operated by wireless communication.
As a result of a fire outbreak (or) fire explosion, we use human resources that are not secure to put out the fire. It is very much possible to replace human work in putting out a fire in a dangerous environment by using higher technology, specifically with help of robotics. This strategy would free firefighters from dangerous tasks, increase their efficiency, and reduce the number of fires. The programming of the robot is done using the Arduino C which is derived from C and C++ languages.


### Built With

The main controlling unit used in this project is ARDUINO UNO R3, apart from this, major components are flame sensors, stepper and servo motors and water pump are used. The list of components used are as follows:
<ul>ARDUINO UNO R3- 1 </ul>
<ul>L293d motor driver IC board- 1</ul>
<ul>Servo motor- 1</ul>
<ul>Stepper motor- 2</ul>
<ul>Wheels- 3</ul>
<ul>Flame sensor- 3</ul>
<ul>Car chassis- 1(plastic/wood)</ul>
<ul>Single channel relay module- 1</ul>
<ul>Mini breadboard</ul>
<ul>Jumper wires and battery connectors</ul>
<ul>9V batteries- 3</ul>
<ul>5V water pump</ul>
<ul>Small pipe piece</ul>
<ul>Water container</ul>
<ul>Double sided tape and cello tape</ul>
<ul>Screwdriver and screws</ul>

<!-- WORKING -->
## Working
Following figure shows the Block Diagram of this robot used in project. The main focus of this project is to sense or search the surrounding for any possible fire and extinguish it with the help of a water pump. The Arduino UNO Microcontroller board based on the ATmega328P. The ATmega328P is good platform for robotics application. Thus, the real time fire extinguishing can be performed.
*image*
The main aim of this project is to develop a fully automated fire extinguishing robot which detects the fire location and extinguish fire by using sprinklers on triggering the pump. The direction of movement of the robot are described by the motor driver board. It is used to give high voltage and high current is given as an output to run the motors which are used in the project for the movement of the robot. In this project a simple DC motor is used for the rotation of the wheel which are responsible for the movement of the robot. DC motors usually convert electrical energy into mechanical energy. To extinguish the fire a pump is used to pump the water on to the flame. A simple single channel relay module is used to pump the water and a servo motor is mounted on pipe’s head so that it can sprinkle water over more area. The pumping motor in extinguishing system controls the flow of water coming out of pumping.

<!-- USAGE EXAMPLES -->
## Usage

The robot is best suited for operating in an environment where humans cannot go, for example forest fire. Also, with the help of this idea we can save many human lives, using this robot properly we can put out fire in very short time, the robot efficiently detects fire then align itself in direction of fire then moves towards it, and after stopping at a very safe distance from fire the robot stops and then sprinkle water on fire source till it extinguishes.

<!-- ROADMAP -->
## Roadmap

The robot works exactly as expected in both software as well as in hardware, in case of software, due to heavy load on local machine’s processor (laptop in this case), the simulation is not real time, but the circuit responds to signals accordingly.
This local lag in software can be overcome by using a machine with better specifications.
In case of hardware simulation, the robot detects a flame around 1meter from it and move accordingly, for example is left sensor detects a flame then right side motor gets activated and robot just shifts itself in direction of fire, similarly if right sensor detects a flame then left side motor gets activated and robot just shifts itself in direction of fire. Once the robot is automatically aligned with the fire source it checks for fire again and this time when front flame senor detects fire, the robot moves forward in the direction of fire, then it stops automatically at a safe distance from fire and after stopping the water pump and servo motor gets activated and fire gets extinguished.
The responsiveness of this whole system depends on the amount of input voltage supply we are providing, in this case we are using three 9V batteries, but they drain very fast, so alternatively we can use any DC source to power this system.


<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.

<!-- CONTACT -->
## Contact

Your Name - [@yuichebusho]([https://twitter.com/Kaustub22315199](https://twitter.com/yuichebusho)) - choubeyishu.2503@gmail.com

Project Link: [https://github.com/Ishu-Choubey/Automatic-Fire-detecting-and-extinguishing-bot](https://github.com/Ishu-Choubey/Automatic-Fire-detecting-and-extinguishing-bot)



# SEA PORT
COMPUTER GRAPHICS – PROJECT DOCUMENTATION

<br>

**Group Members Information**
Arpita Saha (19-41363-3)
Asif Kamal Tias (19-41346-3)
Tilottama Meem (19-41381-3)
Md. Siyamul Bari Abir (19-41401-3)

<br>

**Table of Content**

| **Content List** | **Page No** |
| --- | --- |
| Introduction | 03  |
| Proposal | 03  |
| Schematic Diagram | 04  |
| List of Objects | 05  |
| Functions to Represent the Objects | 06 - 07 |
| Interactive Functions | 08  |
| Task Assignment and Codes of Functions | 09 - 11 |
| Output | 12 - 14 |
| Conclusion | 15  |

<br>

**Introduction**

OpenGL (Open Graphics Library) is an application programming interface (API) for rendering 2D and 3D vector graphics that is cross-language and cross-platform. These may be utilized to create architectural settings ranging from simple to elaborate. GLUT (OpenGL Utility Toolkit) is a library of OpenGL application utilities that primarily conduct window creation, window control, and keyboard and mouse input monitoring. Basic transformations (translation, rotation, and scaling) are critical for manipulating things on the screen. There is keyboard interaction that allows you to switch between different displays.

**Proposal**

In our project, we will use OpenGL to show the day, night, and rainy scenarios of a seaport. Here, containers and buildings are placed in a different area. Ship and vehicles are moving in sea and road respectively. Cranes are used to carry and move containers. Sky, ground, and sea are visible in this project.

Here,

Press D “Day view”

Press N “Night view”

Press R “Rain view”

<br>

**Schematic Diagram**

![Schematic Diagram](https://github.com/AsifKamalTias/Sea-Port---Glut-Project/blob/main/images/SchematicDiagram.png?raw=true)

**List of Objects**

1. Road
2. Road2
3. Truck
4. Truck2
5. Building1
6. Building2
7. Land Area
8. Costal Area
9. Crane1
10. Crane1 Hand
11. Crane2
12. Ship1
13. Ship2
14. Sky Night
15. Sky Day
16. Sky Rain
17. Sun
18. Moon
19. Stars
20. Rain
21. Container1
22. Container2
23. Container3
24. Container4
25. Container5
26. Tree1
27. Tree2
28. Cloud

**Functions to Represent The Objects**

| **Object** | **Function** | **ID** |
| --- | --- | --- |
| Road | void road() | 1010 |
| Road2 | void road2() | 1011 |
| Truck | void truck(double a,double b) | 1012 |
| Truck2 | void truck2(double a,double b) | 1013 |
| Building1 | void Building1() | 1014 |
| Building2 | void Building2() | 1015 |
| Land Area | void landArea() | 1016 |
| Costal Area | void costalArea() | 1017 |
| Crane1 | void crane1() | 1018 |
| Carne1 Hand | void crane1Movable() | 1019 |
| Crane2 | void crane2() | 1020 |
| Ship1 | void Ship1() | 1021 |
| Ship2 | void ship2() | 1022 |
| Sky Night | void skyNight() | 1023 |
| Sky Day | void skyDay() | 1024 |
| Sky Rain | void skyRainy() | 1025 |
| Sun | void sun() | 1026 |
| Moon | void moon() | 1027 |
| Stars | void stars() | 1028 |
| Rain | void rains() | 1029 |
| Container1 | void Container1() | 1030 |
| Container2 | void Container2() | 1031 |
| Container3 | void Container3() | 1032 |
| Container4 | void Container4() | 1033 |
| Container5 | void Container5() | 1034 |
| Tree1 | void tree1() | 1035 |
| Tree2 | void tree2() | 1036 |
| Cloud | void Cloud() | 1037 |
| Day | void day() | 1038 |
| Rainy | void rainy() | 1039 |
| Night | void night() | 1040 |

**Interactive Functions**

| **Interactive Functions** | **Interaction** | **ID** |
| --- | --- | --- |
| update | void update (int value) | 2001 |
| update2 | void update2(int value) | 2002 |
| update3 | void update3(int value) | 2003 |
| update4 | void update4(int value) | 2004 |
| updateCrane1 | void updateCrane1(int value) | 2005 |
| handleKeypress | void handleKeypress(unsigned char key, int x, int y) | 2006 |
| updateRain | void updateRain(int value) | 2007 |


**Task Assignment and Codes of Functions**


| **Name**<br><br>**ID** | **Contribution in Project** |
| --- | --- |
| **Member-1**<br><br>**Arpita Saha**<br><br>**19-41363-3** | road();<br><br>road2();<br><br>truck(double a,double b);<br><br>truck2(double a,double b);<br><br>tree1();<br><br>tree2();<br><br>update(int value);<br><br>update2(int value); |
| **Member-2**<br><br>**Asif Kamal Tias**<br><br>**19-41346-3** | landArea();<br><br>costalArea();<br><br>crane1();<br><br>crane1Movable();<br><br>crane2();<br><br>skyNight();<br><br>skyRainy();<br><br>rains();<br><br>day();<br><br>rainy();<br><br>night();<br><br>updateCrane1(int value);<br><br>updateRain(int value); |
| **Member-3**<br><br>**Tilottama Meem**<br><br>**19-41381-3** | Ship1();<br><br>ship2();<br><br>skyDay();<br><br>sun();<br><br>stars();<br><br>moon();<br><br>update3(int value); |
| **Member-4**<br><br>**Md. Siyamul Bari Abir**<br><br>**19-41401-3** | Building1();<br><br>Building2();<br><br>Container1();<br><br>Container2();<br><br>Container3();<br><br>Container4();<br><br>Container5();<br><br>Cloud();<br><br>update4(); |

**OUTPUT**

| **Day View** | ![Day View](https://github.com/AsifKamalTias/Sea-Port---Glut-Project/blob/main/images/DayView.png?raw=true) |
| --- | --- |
| **Night**<br><br>**View** | ![Night View](https://github.com/AsifKamalTias/Sea-Port---Glut-Project/blob/main/images/NightView.png?raw=true) |
| **Rain**<br><br>**View** | ![Rain View](https://github.com/AsifKamalTias/Sea-Port---Glut-Project/blob/main/images/RainView.png?raw=true) |

**Conclusion**

We have implemented a view of sea port. We've shown that using Code blocks (version 17.12) and different functionalities where day, night, rainy view appears through keyboard interaction. We have used keyboard interactions to change the view. We implemented the color of the objects by following RGB color code. The program runs everything perfectly as we planned. In future we will try to add more components to enrich this project.
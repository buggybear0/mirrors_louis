# Solution


Like a labyrinth, the solution chosen to determine the position of the mirror to be inserted to unlock the box will be obtained in the following way:

- The beam is traced forward and the various segments formed by the mirrors are noted
- If the beam arrives at the finish line, 0 is returned.
- If not, the backward beam is traced and the segments are read in the same way.
- The various intersections are determined: If no intersection exists, then it is impossible to place a mirror to unlock the trunk.
- The number of intersections is recorded and the smallest intersection is determined lexicographically speaking is determined.

# Areas for improvement

By taking a step back on my work, I could see that the following points could have been worked on to improve the quality of my code:

- The proposed solution is not completely modular. The proposed solution is not completely modular. Indeed, my algorithm allows to find all the existing intersection points and thus answers the first part of the problem, but I did not manage to integrate a method allowing to determine the smallest point when the number of points is higher than 2.

- Taking a .json file as input would have been clearer and more practical. Although the topic only offers three cases to solve, we could have made the architecture easily adaptable to any case.

- I work mainly with dictionaries (this is due to my lack of experience in c++ and my habits in Python). I could have created a "point" structure and a mirror structure in which I could have overloaded operators to perform my operations.

# How to run the code on your computer

In a linux bash :

- ```cd build```
- ```cmake ..```
-```make```
- ```./mirrorlaunch```

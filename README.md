# Solution


Like a labyrinth, the solution chosen to determine the position of the mirror to be inserted to unlock the box will be obtained in the following way:

- The beam is traced forward and the various segments formed by the mirrors are noted
- If the beam arrives at the finish line, 0 is returned.
- If not, the backward beam is traced and the segments are read in the same way.
- The various intersections are determined: If no intersection exists, then it is impossible to place a mirror to unlock the trunk.
- The number of intersections is recorded and the smallest intersection is determined lexicographically speaking is determined.

# Global architecture


# How to run the code on your computer


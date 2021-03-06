Towers Of Hanoi
================

The Tower of Hanoi (also called the Tower of Brahma or Lucas' Tower and sometimes pluralised) is a mathematical game or puzzle. 
It consists of three rods, and a number of disks of different sizes which can slide onto any rod. 
The puzzle starts with the disks in a neat stack in ascending order of size on one rod, the smallest at the top, 
thus making a conical shape.

The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:

Only one disk can be moved at a time.
Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack 
i.e. a disk can only be moved if it is the uppermost disk on a stack.
No disk may be placed on top of a smaller disk.
With three disks, the puzzle can be solved in seven moves. 
The minimum number of moves required to solve a Tower of Hanoi puzzle is 2^n - 1, where n is the number of disks.

A key to solving this puzzle is to recognize that it can be solved by breaking the problem down into a collection of smaller problems and further breaking those problems down into even smaller problems until a solution is reached. For example:

label the pegs A, B, C — these labels may move at different steps
let n be the total number of discs
number the discs from 1 (smallest, topmost) to n (largest, bottommost)
To move n discs from peg A to peg C:

move n−1 discs from A to B. This leaves disc n alone on peg A
move disc n from A to C
move n−1 discs from B to C so they sit on disc n

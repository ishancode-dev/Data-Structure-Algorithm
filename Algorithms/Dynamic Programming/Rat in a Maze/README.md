## Rat in a Maze

A Maze is given as N*N binary matrix of blocks where source block is the upper left most block i.e., maze[0][0] and destination block is lower rightmost block i.e., maze[N-1][N-1]. A rat starts from source and has to reach the destination. The rat can move only in two directions: forward and down. 

In the maze matrix, 0 means the block is a dead end and 1 means the block can be used in the path from source to destination. Note that this is a simple version of the typical Maze problem. For example, a more complex version can be that the rat can move in 4 directions and a more complex version can be with a limited number of moves.


**Following is an example maze**

![ratinmaze_filled11](https://user-images.githubusercontent.com/76674591/197400461-98c8c9af-7ddb-462a-afc1-4c15f28b061a.png)

 Gray blocks are dead ends (value = 0).
 
 ***
 
 Following is a maze with highlighted solution path.
 
 ![ratinmaze_filled_path1](https://user-images.githubusercontent.com/76674591/197400521-971e9391-e2ab-43b3-93c8-0bb317a85fe4.png)


Following is the solution matrix (output of program) for the above input matrix.

```
{1, 0, 0, 0}
{1, 1, 0, 0}
{0, 1, 0, 0}
{0, 1, 1, 1}
All entries in solution path are marked as 1

```
Approach: Form a recursive function, which will follow a path and check if the path reaches the destination or not. If the path does not reach the destination then backtrack and try other paths. 

Algorithm:  

Create a solution matrix, initially filled with 0’s.
Create a recursive function, which takes initial matrix, output matrix and position of rat (i, j).
if the position is out of the matrix or the position is not valid then return.
Mark the position output[i][j] as 1 and check if the current position is destination or not. If destination is reached print the output matrix and return.
Recursively call for position (i+1, j) and (i, j+1).
Unmark position (i, j), i.e output[i][j] = 0.

## Implementation

- [C++](/Rat%20in%20a%20Maze.cpp)
- [C#]()
- [Java]()
 

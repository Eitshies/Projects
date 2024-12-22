/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:01:00 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/17 13:37:04 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void printMaze(int rows, int columns, int maze[][columns]);
int isValidMove(int rows, int columns, int maze[][columns], int sr, int sc);
int solveMaze(int rows, int columns, int maze[][columns], int sr, int sc, int er, int ec);

int main(void)
{
    int columns = 5, rows = 3, sr = 2, sc = 0, er = 2, ec = 4;
    int maze[3][5] = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {5, 0, 0, 1, 3}
    };

    if(solveMaze(rows, columns, maze, sr, sc, er, ec)) {
        printf("Maze Solved!\n");
    } else {
        printf("No solution found.\n");
    }
    printMaze(rows, columns, maze);
    return(0);
}

void printMaze(int rows, int columns, int maze[][columns])
{
    printf("\nHere is the maze:\n\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (maze[i][j] == 5)
            {
                printf("S ");
                continue;
            }
            else if (maze[i][j] == 3)
            {
                printf("E ");
                continue;
            }
            else if (maze[i][j] == 8)
            {
                printf("* ");
                continue;
            }
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int isValidMove(int rows, int columns, int maze[][columns], int sr, int sc)
{
    return (sr >= 0 && sr < rows && sc >= 0 && sc < columns && maze[sr][sc] != 1 && maze[sr][sc] != 8);
}

int solveMaze(int rows, int columns, int maze[][columns], int sr, int sc, int er, int ec)
{
    if (sr == er && sc == ec)
    {
        maze[sr][sc] = 8; // Mark the end point
        return 1;
    }

    if (isValidMove(rows, columns, maze, sr, sc))
    {
        maze[sr][sc] = 8; // Mark the current cell as part of the path

        // Try all possible moves
        if (solveMaze(rows, columns, maze, sr - 1, sc, er, ec)) return 1; // Up
        if (solveMaze(rows, columns, maze, sr + 1, sc, er, ec)) return 1; // Down
        if (solveMaze(rows, columns, maze, sr, sc - 1, er, ec)) return 1; // Left
        if (solveMaze(rows, columns, maze, sr, sc + 1, er, ec)) return 1; // Right

        // Backtrack: Unmark the current cell
        maze[sr][sc] = 0;
    }
    return 0;
}


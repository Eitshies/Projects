/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 08:34:34 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/16 13:27:28 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void maze_printer(int columns, int maze[][columns]);

int main(void)
{
	int columns = 5, rows = 3, sr = 2, sc = 0, er = 0, ec = 4;
	char move;
	
	/**/
	int maze[3][5] = {
		{0,1,0,0,0},
		{0,1,0,1,0},
		{5,0,0,1,3}
	};
	/**/

//	Print with values:
	maze_printer(columns, maze);
/* All shit */
	while(maze[sr][sc] != 3 )
	{
		printf("The valid moves are: ");
		if(( sr-1 >= 0 && sr-1 < rows ) && (sc >= 0 && sc < columns) && (maze[sr-1][sc] != 1))
		{
			printf("Up, ");
		}
		if(( sr+1 >= 0 && sr+1 < rows ) && (sc >= 0 && sc < columns) && (maze[sr+1][sc] != 1))
		{
			printf("Down, ");
		}
		if(( sr >= 0 && sr < rows ) && ( sc-1 >= 0 && sc-1 < columns) && (maze[sr][sc-1] != 1))
		{
			printf("Left, ");
		}
		if(( sr >= 0 && sr < rows ) && ( sc+1 >= 0 && sc+1 < columns) && (maze[sr][sc+1] != 1))
		{
			printf("Right, ");
		}
		if(( sr-1 >= 0 && sr-1 < rows ) && (sc >= 0 && sc < columns) && (maze[sr-1][sc] != 1))
		{
			sr--;
		}
		if(( sr+1 >= 0 && sr+1 < rows ) && (sc >= 0 && sc < columns) && (maze[sr+1][sc] != 1))
		{
			sr++;
		}
		if(( sr >= 0 && sr < rows ) && ( sc-1 >= 0 && sc-1 < columns) && (maze[sr][sc-1] != 1))
		{
			sc--;
		}
		if(( sr >= 0 && sr < rows ) && ( sc+1 >= 0 && sc+1 < columns) && (maze[sr][sc+1] != 1))
		{
			sc++;
		}

		printf("\b\b.\n\n");

		printf("W to move up.\nS to move down.\nA to move left.\nD to move right.\nEnter where to move: ");
		scanf(" %c", &move);
		do{
			if (move == 'W' || move == 'w')
			{
				maze[sr][sc] = 8;
				maze[sr-1][sc] = 6;
				maze_printer(columns, maze);
			}
			else if (move == 'S' || move == 's')
			{
				maze[sr][sc] = 8;
				maze[sr+1][sc] = 6;
				maze_printer(columns, maze);
			}
			else if (move == 'A' || move == 'a')
			{
				maze[sr][sc] = 8;
				maze[sr][sc-1] = 6;
				maze_printer(columns, maze);
			}
			else if (move == 'D' || move == 'd')
				{
				maze[sr][sc] = 8;
				maze[sr][sc+1] = 6;
				maze_printer(columns, maze);
			}
			else
			{
				printf("Invalid move, enter where to move: ");
				scanf(" %c", &move);
			}
		} while(move != 'W' && move != 'w' && move != 'S' && move != 's' && move != 'A' && move != 'a' && move != 'D' && move != 'd' );
	}
	return(0);
}

void maze_printer(int columns, int maze[][columns])
{
	printf("\n\nHere is the maze: \n\n");	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(maze[i][j] == 5)
			{
				printf("S ");
				continue;
			}
			else if(maze[i][j] == 3)
			{
				printf("E ");
				continue;
			}
			else if(maze[i][j] == 8)
			{
				printf("* ");
				continue;
			}
			else if(maze[i][j] == 6)
			{
				printf("C ");
				continue;
			}
			printf("%i ", maze[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}


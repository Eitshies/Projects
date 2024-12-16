/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:01:00 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/16 11:11:19 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void maze_printer(int columns, int maze[][columns]);
void Xmaze_printer(int rows, int columns);

int main(void)
{
	int columns = 5, rows = 3, sr, sc, er, ec;
//	int maze[rows][columns];
	sr = 2;
	sc = 0;
	er = 0;
	ec = 4;

	/**/
	int maze[3][5] = {
		{0,1,0,0,0},
		{0,1,0,1,0},
		{5,0,0,1,3}
	};
	/**/

//	Enter R & C
//	printf("Enter the number of rows: ");
//	scanf("%i", &rows);
//	printf("Enter the number of columns: ");
//	scanf("%i", &columns);

//	Print without values:
//	printf("Here is the Maze before entering data: \n\n");
//	Xmaze_printer(rows, columns);
//	printf("\n\n");

//	Print with values:
	printf("Here is the Maze after: \n");
	maze_printer(columns, maze);
	printf("\n\n");

/*	Valid moves: */
	printf("The valid moves are: ");
	if(( sr-1 >= 0 && sr-1 < rows ) && (sc >= 0 && sc < columns)) 
		printf("Up ");
	if(( sr+1 >= 0 && sr+1 < rows ) && (sc >= 0 && sc < columns))
		printf("Down ");
	if(( sr >= 0 && sr < rows ) && ( sc-1 >= 0 && sc-1 < columns))
		printf("Left ");
	if(( sr >= 0 && sr < rows ) && ( sc+1 >= 0 && sc+1 < columns))
		printf("Right ");
	printf("\b.\n");
	/**/
	return(0);
}

void maze_printer(int columns, int maze[][columns])
{	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(maze[i][j] == 5)
			{
				printf("S ");
				continue;
			}
			if(maze[i][j] == 3)
			{
				printf("E ");
				continue;
			}
			printf("%i ", maze[i][j]);
		}
		printf("\n");
	}
}

void Xmaze_printer(int rows, int columns)
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			printf("X ");
		}
		printf("\n");
	}
}


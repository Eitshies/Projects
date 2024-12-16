/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:48:35 by eerraoui          #+#    #+#             */
/*   Updated: 2024/12/12 16:21:54 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head -> data = 10;
	head -> next = NULL;
	printf("%i.\n", head -> data);
	struct node *current = malloc(sizeof(struct node));
	head -> data = 100;
	head -> next = NULL;
	printf("%i.\n", head -> data);
	return(0);
}


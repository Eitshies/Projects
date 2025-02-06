/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roman_to_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:33:01 by eerraoui          #+#    #+#             */
/*   Updated: 2025/01/19 19:02:10 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int conversion(char l);
int romanToInt(char *s);

int main(void) {
	char *s = "MCMXCIV";
	printf("%i\n", romanToInt(s));
	return(0);
}

int romanToInt(char *s) {
	int size = strlen(s);
	int count = 0;

	for( int i = 0; i < size; i++) {
		count += conversion(s[i]);
	}
	return count;
}

int conversion(char l) {
	switch (l) {
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
	}
}

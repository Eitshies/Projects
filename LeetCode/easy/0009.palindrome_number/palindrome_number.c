/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:05:00 by eerraoui          #+#    #+#             */
/*   Updated: 2025/01/19 18:29:37 by eerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int power(int exponent);
bool isPalindrome(int x);

int main(void) {
	int x = 1000021;
	isPalindrome(x) ? printf("true\n"): printf("false\n");
	return(0);
}

bool isPalindrome(int x) {
	int y = x;
	int count = 1;
	int temp;
	int exponent;
	int *digits = NULL;
	int start;
	int end;

	while( y >= 10 ) {
		y /= 10;
	count++;
	}

	temp = count;
	digits = (int *)calloc(count, sizeof(int));

	for( int i = 0; i < count; i++ ) {
		y = x;
		exponent = temp - 1;
		digits[i] = (y / power(exponent)) % 10;
		temp--;
	}

	if( x < 0 )
		return 0;
	if( x >= 0 && x <= 9 )
		return 1;

	start = 0;
	end = count - 1;
	while( start < end ) {
		if( digits[start] != digits[end] )
			return(0);
		start++;
		end--;
    }
	return(1);
}

int power(int exponent) {
	int result = 1;
	if( exponent == 0 )
		return 1;
	for (int i = 0; i < exponent; i++) {
		result *= 10;
	}
	return result;
}

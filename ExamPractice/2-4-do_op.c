/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-4-do_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 22:08:25 by gachan            #+#    #+#             */
/*   Updated: 2019/01/23 09:30:35 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// functions allowed: atoi, printf, write
// expected files: *.c, *.h
// do-op
//
// Write a program that takes 3 strings:
// 1st and 3rd are base-10 signed integers
// 2nd is arithmetic operator: + - * / %
//
// Program must display result of arithmetic operation,
// followed by newline.
//
// if number of parameters is not 3, program displays newline.
//
// Examples:
//
// ./do_op "123" "*" 456
// output:56088
//
// ./do_op "9828" "/" 234
// 42
//
// ./do_op "1" "+" "-43"
// -42
//
// ./do_op
// output: 

#include <unistd.h> //write
#include <stdio.h> // printf
#include <stdlib.h> // malloc, atoi

int		main(int argc, char **argv)
{
	//declarations
	// NONE
	//assignments
	// NONE
	//if argc == 4
	if (argc == 4)
	{
	//if argc[2] == '+'
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
	//if argc[2] == '-'
		if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
	//if argc[2] == '*'
		if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
	//if argc[2] == '/'
		if(argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
	//if argc[2] == '%'
		if(argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	//newline
	printf("\n");
	
	return (0);
}

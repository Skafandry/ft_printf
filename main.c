/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zaou <aez-zaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 22:28:24 by aez-zaou          #+#    #+#             */
/*   Updated: 2019/11/20 17:37:42 by aez-zaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	// char *s = "lisldfsd";
	// int num = 7777;
	// char c = 'A';
	// char a = 48;
	// int b;
	// char *ptr;
	// ptr = ft_put_hexa(53241, 0);

	// ft_printf("-Print 'c' conversion : %c\n-Print 's' conversion : %s\n", 'A', "SDFASD");
	// ft_printf("-Print 'p' conversion : %p\n-Print 'd' conversion : %d\n", &c, 1999);
	// ft_printf("-Print 'i' conversion : %i\n-Print 'u' conversion : %u\n", 07, 4294967295);
	// ft_printf("-Print 'x' conversion : %%%x\n-Print 'X' conversion : %X\n", 123456, 123456);
	// printf("-Print 'x' conversion :|%0*d|", 10,1234);

	// a = ft_printf("%-10.0x|", 0);
	
	// ft_printf("%s|", "asdasdasd");
	// ft_printf("\n");
	// printf("%s|", ptr);
	// free(ptr);
	// printf("== 0.7d == -100 == %0.7d\n", -100);
	// ft_printf("== 0.7d == -100 == %0.7d\n\n", -100);
	// printf("== 0.7d == 100  == %0.7d\n", 100);
	// ft_printf("== 0.7d == 100  == %0.7d\n\n", 100);
	// printf("== 07d == -100  == %07d\n", -100);
	// ft_printf("== 07d == -100  == %07d\n\n", -100);
	// printf("== 07d == 100   == %07d\n", 100);
	// ft_printf("== 07d == 100   == %07d\n\n", 100);

	// printf("1 = %d\n", printf("%c\n", 0));
	// printf("2 = %d\n", ft_printf("%c\n", 0));

	ft_printf("Bla bla %-*.5d\n", -10,  123);
	printf("Bla bla %-*.5d|\n", -10, 123);

	// ft_printf("%40p|123456", 123);
	/*
	printf("\n");
	ft_printf("%2.7d", -100);
	printf("\n");
	printf("%2.7d", -100);
	printf("\n");
	ft_printf("%05d", -100);
	printf("\n");
	printf("%05d", -100);
	*/
	// printf("\n%d", i);

	return (0);
}

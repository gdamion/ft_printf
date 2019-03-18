/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:51:10 by gdamion-          #+#    #+#             */
/*   Updated: 2019/03/18 17:04:34 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "includes/header.h"

int main()
{
	// printf("\n%f\n%f\n", 5/0, 0/0);
	// ft_printf("\n%f\n%f\n", 5/0, 0/0);

	// printf("\n%f\n%f\n%f\n%f\n", INFINITY, -INFINITY, NAN, -NAN);
	// ft_printf("\n%f\n%f\n%f\n%f\n", INFINITY, -INFINITY, NAN, -NAN);

	//c ----------------------------------------------------------------
	// printf("c -------------------------\n"); //символ

// //di
// 	char		*num;
// 	int			pre;
// 	int			numlen;
// 	int			zeronum;
// 	int			i;

// //f
// 	int		i;
// 	int		j;
// 	int		min;
// 	char	*big;
// 	int		dot;
// 	int		*calc_num;
// 	int		op;

// //o
// 	unsigned long long	o;
// 	char				*num;
// 	int					numlen;
// 	int					zeronum;
// 	int					i;
// 	int					n;
// 	int a, b;

// //p
// 	void	*p;
// 	int		i;
// 	char	*addr;

// //u
// 	unsigned long long u;
// 	char *num;
// 	int numlen;
// 	int zeronum;
// 	int i;
// 	int n;

// 	a = printf("%c\n", 'A');
// 	ft_putnbr(a);
// 	ft_putendl("\n");

// 	b = ft_printf("%c\n", 'A');
// 	ft_putnbr(b);
// 	ft_putendl("\n\n");

// 	a = printf("%-6c\n", 'A');
// 	ft_putnbr(a);
// 	ft_putendl("\n");

// 	b = ft_printf("%-6c\n", 'A');
// 	ft_putnbr(b);
// 	ft_putendl("\n\n");

// 	a = printf("%6c\n", 'A');
// 	ft_putnbr(a);
// 	ft_putendl("\n");

// 	b = ft_printf("%6c\n", 'A');
// 	ft_putnbr(b);
// 	ft_putendl("\n\n");

	// printf("|%c|\n", NULL);
	// ft_printf("|%c|\n\n", NULL);

	// printf("|%-6c|\n", NULL);
	// ft_printf("|%-6c|\n\n", NULL);

	// printf("|%6c|\n", NULL);
	// ft_printf("|%6c|\n\n", NULL);

	// printf("\n");

	// s ----------------------------------------------------------------
	//printf("s -------------------------\n"); //строка 
	// printf("%s\n", "AAA");
	// ft_printf("%s\n\n", "AAA");

	// printf("%6s\n", "AAA");
	// ft_printf("%6s\n\n", "AAA");

	// printf("%-6s\n", "AAA");
	// ft_printf("%-6s\n\n", "AAA");

	// printf("|%s|\n", NULL);
	// ft_printf("|%s|\n\n", NULL);

	// printf("|%6s|\n", NULL);
	// ft_printf("|%6s|\n\n", NULL);

	// printf("|%-6s|\n", NULL);
	// ft_printf("|%-6s|\n\n", NULL);

	// printf("\n");

	// // //p ----------------------------------------------------------------
	// void *p;
	// int a = 2;
	// p = &a;

	// printf("p -------------------------\n"); //указатель

	// printf("|%p|\n", p);
	// ft_printf("|%p|\n\n", p);

	// printf("|%20p|\n", p);
	// ft_printf("|%20p|\n\n", p);

	// printf("|%-20p|\n", p);
	// ft_printf("|%-20p|\n\n", p);

	// printf("|%p|\n", NULL);
	// ft_printf("|%p|\n\n", NULL);

	// printf("|%20p|\n", NULL);
	// ft_printf("|%20p|\n\n", NULL);

	// printf("|%-20p|\n", NULL);
	// ft_printf("|%-20p|\n\n", NULL);

	// printf("|%-10.0p|\n", p);
	// ft_printf("|%-10.0p|\n\n", p);

	// printf("|%-5p|\n", p);
	// ft_printf("|%-5p|\n\n", p);

	// printf("\n");

	//d, i ----------------------------------------------------------------
	// printf("d, i-----------------------\n"); //десятичное
	
	// printf("\n--------dec\n");
	// ft_printf("|%d|\n", 11);
	// printf("|%d|\n\n", 11);
	
	// ft_printf("|%+ d|\n", 11);
	// printf("|%+ d|\n\n", 11);
	
	// ft_printf("|%-06d|\n", 11);
	// printf("|%-06d|\n\n", 11);
	
	// ft_printf("|%+-1d|\n", 11);
	// printf("|%+-1d|\n\n", 11);

	// ft_printf("|% 01d|\n", 11);
	// printf("|% 01d|\n\n", 11);
	
	//  printf("\n--------hex\n");
	// ft_printf("|%d|\n", 0xB);
	// printf("|%d|\n\n", 0xB);
	
	// ft_printf("|%+ d|\n", 0xB);
	// printf("|%+ d|\n\n", 0xB);
	
	// ft_printf("|%-06d|\n", 0xB);
	// printf("|%-06d|\n\n", 0xB);
	
	// ft_printf("|%+-1d|\n", 0xB);
	// printf("|%+-1d|\n\n", 0xB);

	// ft_printf("|% 01d|\n", 0xB);
	// printf("|% 01d|\n\n", 0xB);

	// printf("\n--------oct\n");
	// ft_printf("|%d|\n", 013);
	// printf("|%d|\n\n", 013);
	
	// ft_printf("|%+ d|\n", 013);
	// printf("|%+ d|\n\n", 013);
	
	// ft_printf("|%-06d|\n", 013);
	// printf("|%-06d|\n\n", 013);
	
	// ft_printf("|%+-1d|\n", 013);
	// printf("|%+-1d|\n\n", 013);

	// ft_printf("|% 01d|\n", 013);
	// printf("|% 01d|\n\n", 013);

	// printf("\n--------dec\n");
	// ft_printf("|%d|\n", -11);
	// printf("|%d|\n\n", -11);
	
	// ft_printf("|%+ d|\n", -11);
	// printf("|%+ d|\n\n", -11);
	
	// ft_printf("|%-06d|\n", -11);
	// printf("|%-06d|\n\n", -11);
	
	// ft_printf("|%+-1d|\n", -11);
	// printf("|%+-1d|\n\n", -11);

	// ft_printf("|% 01d|\n", -11);
	// printf("|% 01d|\n\n", -11);
	
	//  printf("\n--------hex\n");
	// ft_printf("|%d|\n", -0xB);
	// printf("|%d|\n\n", -0xB);
	
	// ft_printf("|%+ d|\n", -0xB);
	// printf("|%+ d|\n\n", -0xB);
	
	// ft_printf("|%-06d|\n", -0xB);
	// printf("|%-06d|\n\n", -0xB);
	
	// ft_printf("|%+-1d|\n", -0xB);
	// printf("|%+-1d|\n\n", -0xB);

	// ft_printf("|% 01d|\n", -0xB);
	// printf("|% 01d|\n\n", -0xB);

	// printf("\n--------oct\n");
	// ft_printf("|%d|\n", -013);
	// printf("|%d|\n\n", -013);
	
	// ft_printf("|%+ d|\n", -013);
	// printf("|%+ d|\n\n", -013);
	
	// ft_printf("|%-06d|\n", -013);
	// printf("|%-06d|\n\n", -013);
	
	// ft_printf("|%+-1d|\n", -013);
	// printf("|%+-1d|\n\n", -013);

	// ft_printf("|% 01d|\n", -013);
	// printf("|% 01d|\n\n", -013);

	// printf("\n--------dec\n");
	// ft_printf("|%d|\n", NULL);
	// printf("|%d|\n\n", NULL);
	
	// ft_printf("|%+ d|\n", NULL);
	// printf("|%+ d|\n\n", NULL);
	
	// ft_printf("|%-06d|\n", NULL);
	// printf("|%-06d|\n\n", NULL);
	
	// ft_printf("|%+-1d|\n", NULL);
	// printf("|%+-1d|\n\n", NULL);

	// ft_printf("|% 01d|\n", NULL);
	// printf("|% 01d|\n\n", NULL);
	
	//  printf("\n--------hex\n");
	// ft_printf("|%d|\n", NULL);
	// printf("|%d|\n\n", NULL);
	
	// ft_printf("|%+ d|\n", NULL);
	// printf("|%+ d|\n\n", NULL);
	
	// ft_printf("|%-06d|\n", NULL);
	// printf("|%-06d|\n\n", NULL);
	
	// ft_printf("|%+-1d|\n", NULL);
	// printf("|%+-1d|\n\n", NULL);

	// ft_printf("|% 01d|\n", NULL);
	// printf("|% 01d|\n\n", NULL);

	// printf("\n--------oct\n");
	// ft_printf("|%d|\n", NULL);
	// printf("|%d|\n\n", NULL);
	
	// ft_printf("|%+ d|\n", NULL);
	// printf("|%+ d|\n\n", NULL);
	
	// ft_printf("|%-06d|\n", NULL);
	// printf("|%-06d|\n\n", NULL);
	
	// ft_printf("|%+-1d|\n", NULL);
	// printf("|%+-1d|\n\n", NULL);

	// ft_printf("|% 01d|\n", NULL);
	// printf("|% 01d|\n\n", NULL);


	// printf("\n--------MIN_MAX\n");
	
	// 			printf("\n--------int %lu\n", sizeof(int));
	// ft_printf("MIN_M |%d|\n", -2147483648);
	// printf("MIN_O |%d|\n\n", -2147483648);

	// ft_printf("MAX_M |%d|\n",  2147483647);
	// printf("MAX_O |%d|\n\n",  2147483647);

	// 		printf("\n--------long %lu\n", sizeof(long));
	// 	long a = -9223372036854775808;
	// ft_printf("MIN_M |%ld|\n", a);
	// printf("MIN_O |%ld|\n\n", a);

	// 	a = 9223372036854775807;
	// ft_printf("MAX_M |%ld|\n", a);
	// printf("MAX_O |%ld|\n\n", a);
	
	// 		printf("\n--------long long %lu\n", sizeof(long long));
	// 		long long b = -9223372036854775808;
	// ft_printf("MIN_M |%lld|\n", b);
	// printf("MIN_O |%lld|\n\n", b);
	// 		b = 9223372036854775807;
	// ft_printf("MAX_M |%lld|\n", b);
	// printf("MAX_O |%lld|\n\n", b);

	// 		printf("\n--------short %lu\n", sizeof(short));
	// ft_printf("MIN_M |%hd|\n", (short)-32768);
	// printf("MIN_O |%hd|\n\n", (short)-32768);

	// ft_printf("MAX_M |%hd|\n", (short)32767);
	// printf("MAX_O |%hd|\n\n", (short)32767);

	// 		printf("\n--------char %lu\n", sizeof(char));
	// ft_printf("MIN_M |%hhd|\n", (char)-128);
	// printf("MIN_O |%hhd|\n\n", (char)-128);

	// ft_printf("MAX_M |%hhd|\n", (char)127);
	// printf("MAX_O |%hhd|\n\n", (char)127);

	// 			printf("\n--------int %lu\n", sizeof(int));
	// ft_printf("MIN_M |%d|\n", -2147483649);
	// printf("MIN_O |%d|\n\n", -2147483649);

	// ft_printf("MAX_M |%d|\n",  2147483648);
	// printf("MAX_O |%d|\n\n",  2147483648);

	// 		printf("\n--------long %lu\n", sizeof(long));
	// 	long a = -9223372036854775809;
	// ft_printf("MIN_M |%ld|\n", a);
	// printf("MIN_O |%ld|\n\n", a);

	// 	a = 9223372036854775808;
	// ft_printf("MAX_M |%ld|\n", a);
	// printf("MAX_O |%ld|\n\n", a);
	
	// 		printf("\n--------long long %lu\n", sizeof(long long));
	// 		long long b = -9223372036854775809;
	// ft_printf("MIN_M |%lld|\n", b);
	// printf("MIN_O |%lld|\n\n", b);
	// 		b = 9223372036854775808;
	// ft_printf("MAX_M |%lld|\n", b);
	// printf("MAX_O |%lld|\n\n", b);

	// 		printf("\n--------short %lu\n", sizeof(short));
	// ft_printf("MIN_M |%hd|\n", (short)-32769);
	// printf("MIN_O |%hd|\n\n", (short)-32769);

	// ft_printf("MAX_M |%hd|\n", (short)32768);
	// printf("MAX_O |%hd|\n\n", (short)32768);

	// 		printf("\n--------char %lu\n", sizeof(char));
	// ft_printf("MIN_M |%hhd|\n", (char)-129);
	// printf("MIN_O |%hhd|\n\n", (char)-129);

	// ft_printf("MAX_M |%hhd|\n", (char)128);
	// printf("MAX_O |%hhd|\n\n", (char)128);

	//printf("\n\n");

	//o ----------------------------------------------------------------
	// unsigned int oct = 07; 
	// printf("o -------------------------\n"); //восьмеричное без знака

	// 			printf("\n--------int %lu\n", sizeof(unsigned int));
	// ft_printf("MIN_M |%o|\n", 0);
	// printf("MIN_O |%o|\n\n", 0);

	// ft_printf("MAX_M |%o|\n",  4294967295);
	// printf("MAX_O |%o|\n\n",  4294967295);

	// 		printf("\n--------long %lu\n", sizeof(unsigned long));
	// 	unsigned long a = 0;
	// ft_printf("MIN_M |%lo|\n", a);
	// printf("MIN_O |%lo|\n\n", a);

	// 	a = 18446744073709551615;
	// ft_printf("MAX_M |%lo|\n", a);
	// printf("MAX_O |%lo|\n\n", a);
	
	// 		printf("\n--------long long %lu\n", sizeof(unsigned long long));
	// 		long long b = 0;
	// ft_printf("MIN_M |%llo|\n", b);
	// printf("MIN_O |%llo|\n\n", b);
	// 		b = 18446744073709551615;
	// ft_printf("MAX_M |%llo|\n", b);
	// printf("MAX_O |%llo|\n\n", b);

	// 		printf("\n--------short %lu\n", sizeof(unsigned short));
	// ft_printf("MIN_M |%ho|\n", (unsigned short)0);
	// printf("MIN_O |%ho|\n\n", (unsigned short)0);

	// ft_printf("MAX_M |%ho|\n", (unsigned short)65535);
	// printf("MAX_O |%ho|\n\n", (unsigned short)65535);

	// 		printf("\n--------char %lu\n", sizeof(unsigned char));
	// ft_printf("MIN_M |%hho|\n", (unsigned char)0);
	// printf("MIN_O |%hho|\n\n", (unsigned char)0);

	// ft_printf("MAX_M |%hho|\n", (unsigned char)255);
	// printf("MAX_O |%hho|\n\n", (unsigned char)255);

	// 			printf("\n--------int %lu\n", sizeof(unsigned int));
	// ft_printf("MIN_M |%o|\n", -1);
	// printf("MIN_O |%o|\n\n", -1);

	// ft_printf("MAX_M |%o|\n",  (unsigned int)4294967296);
	// printf("MAX_O |%o|\n\n",  (unsigned int)4294967296);

	// 		printf("\n--------long %lu\n", sizeof(unsigned long));
	// 	unsigned long a = -1;
	// ft_printf("MIN_M |%lo|\n", a);
	// printf("MIN_O |%lo|\n\n", a);

	// 	a = 18446744073709551615;
	// ft_printf("MAX_M |%lo|\n", a);
	// printf("MAX_O |%lo|\n\n", a);
	
	// 		printf("\n--------long long %lu\n", sizeof(unsigned long long));
	// 		unsigned long long b = -1;
	// ft_printf("MIN_M |%llo|\n", b);
	// printf("MIN_O |%llo|\n\n", b);
	// 		b = 18446744073709551615;
	// ft_printf("MAX_M |%llo|\n", b);
	// printf("MAX_O |%llo|\n\n", b);

	// 		printf("\n--------short %lu\n", sizeof(unsigned short));
	// ft_printf("MIN_M |%ho|\n", (unsigned short)-1);
	// printf("MIN_O |%ho|\n\n", (unsigned short)-1);

	// ft_printf("MAX_M |%ho|\n", (unsigned short)65536);
	// printf("MAX_O |%ho|\n\n", (unsigned short)65536);

	// 		printf("\n--------char %lu\n", sizeof(unsigned char));
	// ft_printf("MIN_M |%hho|\n", (unsigned char)-1);
	// printf("MIN_O |%hho|\n\n", (unsigned char)-1);

	// ft_printf("MAX_M |%hho|\n", (unsigned char)256);
	// printf("MAX_O |%hho|\n\n", (unsigned char)256);
// int a, b;
// 	a = ft_printf("|%o|\n", 0);
// 	b = printf("|%o|\n", 0);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%#o|\n", 0);
// 	b = printf("|%#o|\n", 0);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%-#o|\n", 0);
// 	b = printf("|%-#o|\n", 0);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%0#o|\n", 0);
// 	b = printf("|%0#o|\n", 0);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%o|\n", 0);
// 	b = printf("|%o|\n", 0);
// 	printf("%d %d\n\n", a, b);	

// 	a = ft_printf("|%.6o|\n", 4);
// 	b = printf("|%.6o|\n", 4);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%.0o|\n", 4);
// 	b = printf("|%.0o|\n", 4);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%6o|\n", 0);
// 	b = printf("|%6o|\n", 0);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%06o|\n", 0);
// 	b = printf("|%06o|\n", 0);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%06o|\n", 6362);
// 	b = printf("|%06o|\n", 6362);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%#o|\n", 11);
// 	b = printf("|%#o|\n", 11);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%0-#10o|\n", 11);
// 	b = printf("|%0-#10o|\n", 11);
// 	printf("%d %d\n\n", a, b);

// 	a = ft_printf("|%0-#10o|\n", 11);
// 	b = printf("|%0-#10o|\n", 11);
// 	printf("%d %d\n\n", a, b);

// 	printf("\n\n");

	// u ----------------------------------------------------------------
	// printf("u -------------------------\n"); //десятичное без знака

	// ft_printf("%.u, %.0u\n", 0, 0);
	//    printf("%.u, %.0u\n\n", 0, 0);

	// ft_printf("MIN_M |%u|\n", 0);
	// printf("MIN_O |%u|\n\n", 0);

	// ft_printf("MAX_M |%u|\n",  4294967295);
	// printf("MAX_O |%u|\n\n",  4294967295);

	// 		printf("\n--------long %lu\n", sizeof(unsigned long));
	// 	unsigned long a = 0;
	// ft_printf("MIN_M |%lu|\n", a);
	// printf("MIN_O |%lu|\n\n", a);

	// 	a = 18446744073709551615;
	// ft_printf("MAX_M |%lu|\n", a);
	// printf("MAX_O |%lu|\n\n", a);
	
	// 		printf("\n--------long long %lu\n", sizeof(unsigned long long));
	// 		long long b = 0;
	// ft_printf("MIN_M |%llu|\n", b);
	// printf("MIN_O |%llu|\n\n", b);
	// 		b = 18446744073709551615;
	// ft_printf("MAX_M |%llu|\n", b);
	// printf("MAX_O |%llu|\n\n", b);

	// 		printf("\n--------short %lu\n", sizeof(unsigned short));
	// ft_printf("MIN_M |%hu|\n", (unsigned short)0);
	// printf("MIN_O |%hu|\n\n", (unsigned short)0);

	// ft_printf("MAX_M |%hu|\n", (unsigned short)65535);
	// printf("MAX_O |%hu|\n\n", (unsigned short)65535);

	// 		printf("\n--------char %lu\n", sizeof(unsigned char));
	// ft_printf("MIN_M |%hhu|\n", (unsigned char)0);
	// printf("MIN_O |%hhu|\n\n", (unsigned char)0);

	// ft_printf("MAX_M |%hhu|\n", (unsigned char)255);
	// printf("MAX_O |%hhu|\n\n", (unsigned char)255);

	// ft_printf("%u\n", 0);
	// printf("%u\n\n", 0);
	
	// ft_printf("%-010u\n", 0);
	// printf("%-010u\n\n", 0);

	// ft_printf("%-0u\n", 0);
	// printf("%-0u\n\n", 0);

	// ft_printf("%010u\n", 0);
	// printf("%010u\n\n", 0);

	//x ----------------------------------------------------------------
	// printf("x -------------------------\n"); //16-ричное без знака, используя строчные буквы
	
	// printf("%#x\n", 0xa);
	// ft_printf("%#x\n", 0xa);

	// printf("%#x\n", 0);
	// ft_printf("%#x\n", 0);

	// printf("%#.x\n", 0);
	// ft_printf("%#.x\n", 0);

	// printf("%#.20x\n", 20);
	// ft_printf("%#.20x\n", 20);

	// printf("%x\n", 0xa);
	// ft_printf("%x\n", 0xa);

	// printf("\n\n");

	// //X ----------------------------------------------------------------
	// printf("X -------------------------\n"); //16-ричное без знака, используя заглавные буквы
	// printf("%X", 0xA);
	// printf("\n\n");

	//f ----------------------------------------------------------------
	//printf("f -------------------------\n"); //число с плавающей запятой, текст выводится строчными
	//[-]inf/[-]infinity, [-]nan/[-]nan (not a number)
	printf("%f, %f\n", log(0), sqrt(-1));
	ft_printf("%f, %f\n\n", log(0), sqrt(-1));
	printf("%f\n", INFINITY);
	printf("%f\n", -INFINITY);
	printf("%f\n", NAN);
	printf("%f\n\n", -NAN);

	ft_printf("%f\n", INFINITY);
	ft_printf("%f\n", -INFINITY);
	ft_printf("%f\n", NAN);
	ft_printf("%f\n\n", -NAN);
	// int i, j;
	// float a = -4.2424424;
	// double b = -2.234325;
	// long double c = -6.23432423;
	
	// i = printf("%-+50.f\n", a);
	// j = ft_printf("%-+50.f\n", a);
	// printf("%d %d\n\n", i, j);

	// i = printf("%- 50.f\n", b);
	// j = ft_printf("%- 50.f\n", b);
	// printf("%d %d\n\n", i, j);
	
	// i = printf("%- 50.Lf\n", c);
	// j = ft_printf("%- 50.Lf\n", c);
	// printf("%d %d\n\n", i, j);

	// i = printf("%#.100f\n", a);
	// j = ft_printf("%#.100f\n", a);
	// printf("%d %d\n\n", i, j);

	// i = printf("%#.100f\n", b);
	// j = ft_printf("%#.100f\n", b);
	// printf("%d %d\n\n", i, j);

	// i = printf("%#.100Lf\n", c);
	// j = ft_printf("%#.100Lf\n", c);
	// printf("%d %d\n\n", i, j);

	//printf("\n\n");

	//% ----------------------------------------------------------------
	// printf("%% -------------------------\n\n"); //вывод знака %
	// printf("%5%\n");
	// ft_printf("%5%\n\n");

	// printf("%-5%\n");
	// ft_printf("%-5%\n\n");

	// printf("%.5%\n");
	// ft_printf("%.5%\n\n");

	// printf("%05%\n");
	// ft_printf("%05%\n\n");
		
	// printf("%#5%\n");
	// ft_printf("%#5%\n\n");
// printf("%\n");
// ft_printf("%\n");
	// printf("\n\n");

	// int i = 5;
	// int a, b;
	// a = printf("s: %s, p: %p, d:%d\n", "a string", &i, 42);
	// b = printf("s: %s, p: %p, d:%d\n", "a string", &i, 42);
	// printf("\nwroteHE %d\n", a);
	// printf("\nwroteME %d\n", b);


}
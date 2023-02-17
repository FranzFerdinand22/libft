/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:15:42 by fptacek           #+#    #+#             */
/*   Updated: 2023/01/25 22:10:22 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	int	c;
	char	*s;
	char	m[] = "Ahoj kote";
	char	mc1[] = "";
	char	mc2[] = "Vase";
	char	mm1[] = "Kolobezka";
	char	slc1[] = "Dukovany";
	char	slc2[] = "";
	char	sca1[] = "Kralove dlouha zmena";
	char	sca2[] = "";
	char	srch[] = "test/tyhle/fce";
	char	*psrch;
	char	*psrrch;
	char	satoi[] = "  -123";
	char	s1[] = " abcdefghijklmnop";
	char	*s2;

	c = 126;
	s = "Ahoj svete";

	printf("Is char c alpha? %d\n 1 = yes, 0 = no\n", ft_isalpha(c));
	printf("\n");

	printf("Is char c digit? %d\n 1 = yes, 0 = no\n", ft_isdigit(c));
	printf("\n");
	
	printf("Is char c alphanumeric? %d\n 1 = yes, 0 = no\n", ft_isalnum(c));
	printf("\n");
	
	printf("Is char c in ASCII? %d\n 1 = yes, 0 = no\n", ft_isascii(c));
	printf("\n");
	
	printf("Is char c printable? %d\n 1 = yes, 0 = no\n", ft_isprint(c));
	printf("\n");
	
	printf("Lenght of this sring is: %zu\n", ft_strlen(s)); 
	printf("\n");
	
	ft_putchar_fd(c, 1);
	printf("\n");
	
	
	printf("Size of char in bytes: %lu\n", sizeof(unsigned char));
	printf("\n");
	
	printf("%s\n", m);
	ft_memset(m + 3, 'a', 3);
	printf("%s\n", m);
	printf("\n");
	
	ft_bzero(m + 5, 1);
	printf("%s\n", m);
	printf("\n");

	printf("Str before memcpy: %s\n", mc1);
	ft_memcpy(mc1, mc2, sizeof(mc2));
	printf("Str after memcpy: %s\n", mc1);
	printf("\n");

	printf("Str before memmove: %s\n", mm1);
	ft_memmove(mm1 + 3, mm1, 5);
	printf("Str after memmove: %s\n", mm1);
	printf("\n");

	printf("Src string: %s\nDest before strlcpy: %s\n", slc1, slc2);
	ft_strlcpy(slc2, slc1, 3);
	printf("Dest after strlcpy: %s\n", slc2);
	printf("\n");
	
	/*printf("Src: %s\nDest before strlcpy: %s\n", slc1, slc2);
        strlcpy(slc2, slc1, 3);
        printf("Dest after strlcpy: %s\n", slc2);
	printf("\n");*/

	printf("Src befor strlcat: %s\n", sca1);
	ft_strlcat(sca2, sca1, 12);
	printf("Src: %s\nDest after strlcat: %s\n", sca1, sca2);
	printf("\n");

	psrch = ft_strchr(srch, '/');
	psrrch = ft_strrchr(srch, '/');
	printf("print full string: %s\n", srch);
	printf("print only part after first '/' : %s\n", psrch);
	printf("print only part after last '/' : %s\n", psrrch);
	printf("\n");

	printf("Original string: %s\n", satoi);
	ft_atoi(satoi);
	printf("String after atoi: %s\n", satoi);
	printf("\n");
	

	printf("Original string before substirng: %s\n", s1);
	s2 = ft_substr(s1, 0, 6);
	printf("Original sring after substring: %s\n", s1);
	printf("Substring: %s\n", s2);
	printf("\n");

	char  s3[] = "ahoj";
	char  s4[] = "kote";
	char  *join;

	printf("1. Original string before substirng: %s\n", s3);
        printf("2. Original string before substirng: %s\n", s4);
        join = ft_strjoin(s3, s4);
        printf("1. Original sring after substring: %s\n", s3);
        printf("2. Original string after substirng: %s\n", s4);
        printf("New string: %s\n", join);
	printf("\n");
	
	char  s5[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char  s6[] = " ";
	char  *trim;
  
    	printf("1. Original string before substirng: %s\n", s5);
        printf("2. Original string before substirng: %s\n", s6);
        trim = ft_strtrim(s5, s6);
        printf("1. Original sring after substring: %s\n", s5);
        printf("2. Original string after substirng: %s\n", s6);
        printf("New string: %s\n", trim);
	printf("\n");

	char  **tabstr;
	int itab;

	tabstr = ft_split("this-is-split", '-');
	itab = 0;
	while (tabstr[itab] != NULL)
	{
		printf("%s\n", tabstr[itab]);
		itab++;
	}
	printf("\n");

	int	itoa = 5656LL;

	printf("This is number before itoa: %d\n", itoa);
	printf("This is number in sring after itoa: %s\n", ft_itoa(itoa));

	return(0);
}

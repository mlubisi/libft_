/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_testfile.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 17:22:47 by mlubisi           #+#    #+#             */
/*   Updated: 2016/08/11 17:23:01 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>
#include <libc.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"     
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"     
#define CYAN    "\033[36m"     
#define WHITE   "\033[37m"     
#define BOLDBLACK   "\033[1m\033[30m"      
#define BOLDRED     "\033[1m\033[31m"      
#define BOLDGREEN   "\033[1m\033[32m"      
#define BOLDYELLOW  "\033[1m\033[33m"      
#define BOLDBLUE    "\033[1m\033[34m"      
#define BOLDMAGENTA "\033[1m\033[35m"     
#define BOLDCYAN    "\033[1m\033[36m"      
#define BOLDWHITE   "\033[1m\033[37m"      


char src1[100];
char dest1[100];
char src2[100];
char dest2[100];
char str1[100];
char str2[100];
char *ret;

void	ft_puppercase(char *ptr)
{
    char c;
    
    c = (char)toupper(*ptr);
    write(1, &c, 1);
}

void	ft_plowercase_mod(unsigned int i, char *ptr)
{
    char c;
    
    if (i % 2 == 0)
    {
        c = (char)toupper(*ptr);
    }
    else
        c = (char)tolower(*ptr);
    write(1, &c, 1);
}

char	ft_test_upper(char c)
{
    c = (char)toupper(c);
    return (c);
}

char	ft_test_upper_mod(unsigned int i, char c)
{
    if (i % 2 == 0)
    {
        c = (char)toupper(c);
    }
    else
        c = (char)tolower(c);
    return (c);
}


int main ()
{
	system("clear");	
	ft_putstr(BOLDWHITE "LIBFT FUNCTIONS TESTS:\n" RESET);
	ft_putchar('\n');
	ft_putstr("First tests are the standard library functions\n");
	ft_putstr("Second tests are the custom library functions\n");
	ft_putstr(BOLDGREEN "\nIf outputs for standard and custom functions match, function has passed\n" RESET);
	ft_putchar('\n');

	printf("Press Enter to Continue");
	while( getchar() != '\n' );
	system("clear");

	ft_putstr(BOLDWHITE "1. Memset Test:\n" RESET);
	strcpy(str1,"This is a test of the memset function");
	ft_putstr(str1);
	ft_putchar('\n');

	memset(str1,'$',7);
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "1. ft_memset Test:\n" RESET);
	strcpy(str2,"This is a test of the memset function");
	ft_putstr(str2);
	ft_putchar('\n');

	ft_memset(str2,'$',7);
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putchar('\n');

	printf("Press Enter to Continue");
	while( getchar() != '\n' );
	system("clear");
	ft_putstr(BOLDWHITE "2. memcpy Test:\n" RESET);	
	char src1 [100] = "Copy this string to dest1";
	char src2 [100] = "Copy this string to ft_dest2";
	char *p1;
	char *p2;

	p1 = memcpy (dest1, src1, sizeof (dest1));
	printf ("dest1 = \"%s\"\n", p1);
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "2. ft_memcpy Test:\n" RESET);
	p2 = ft_memcpy (dest2, src2, sizeof (dest2));
	printf ("dest2 = \"%s\"\n", p2);
	ft_putchar('\n');

	printf("Press Enter to Continue");
	while( getchar() != '\n' );
	ft_putchar('\n');

	system("clear");
	ft_putstr(BOLDWHITE "3. bzero Test:\n" RESET);
	char bzerotest[] = "hello";
	char bzerot[] = "hello";
	bzero(bzerotest, 5);
	ft_bzero(bzerot, 5);
	if (strcmp(bzerotest, bzerot) == 0) ft_putstr(BOLDGREEN "Test Passed\n" RESET);
	else ft_putstr(BOLDRED "Test Failed\n" RESET);

	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "4. memccpy Test:\n" RESET);
	const char srcmem1[50] = "memccpy test has passed";
	char destmem1[50];

	printf("Before memcpy dest = %s\n", destmem1);
	memcpy(destmem1, srcmem1, strlen(srcmem1)+1);
	printf("After memcpy dest = %s\n", destmem1);
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "4. ft_memccpy Test:\n" RESET);
	const char srcmem2[50] = "ft_memccpy test has passed";
	char destmem2[50];

	printf("Before memcpy dest = %s\n", destmem2);
	memcpy(destmem2, srcmem2, strlen(srcmem2)+1);
	printf("After memcpy dest = %s\n", destmem2);
	ft_putchar('\n');

	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "5. memmove Test:\n" RESET);
	char destmove1[] = "oldstring";
	const char srcmove1[]  = "newstring";

	printf("Before memmove dest = %s, src = %s\n", destmove1, srcmove1);
	memmove(destmove1, srcmove1, 9);
	printf("After memmove dest = %s, src = %s\n", destmove1, srcmove1);
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "5. ft_memmove Test:\n" RESET);
	char destmove2[] = "oldstring";
	const char srcmove2[]  = "newstring";

	printf("Before ft_memmove dest = %s, src = %s\n", destmove2, srcmove2);
	memmove(destmove2, srcmove2, 9);
	printf("After ft_memmove dest = %s, src = %s\n", destmove2, srcmove2);
	ft_putchar('\n');

	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "6. memcmp Test:\n" RESET);

	char str_mcmp1[15];
	char str_mcmp2[15];
	int mcmp1;

	memcpy(str_mcmp1, "abcdef", 6);
	memcpy(str_mcmp2, "ABCDEF", 6);

	mcmp1 = memcmp(str_mcmp1, str_mcmp2, 5);

	if(mcmp1 > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if(mcmp1 < 0) 
	{
		printf("str1 is less than str2\n");
	}
	else 
	{
		printf("str1 is equal to str2\n");
	}

	ft_putchar('\n');

	ft_putstr(BOLDWHITE "6. ft_memcmp Test:\n" RESET);

	char ftstr_mcmp1[15];
	char ftstr_mcmp2[15];
	int ftmcmp1;

	memcpy(ftstr_mcmp1, "abcdef", 6);
	memcpy(ftstr_mcmp2, "ABCDEF", 6);

	ftmcmp1 = ft_memcmp(ftstr_mcmp1, ftstr_mcmp2, 5);

	if(ftmcmp1 > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if(ftmcmp1 < 0)
	{
		printf("str1 is less than str2\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}

	ft_putchar('\n');
	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "7. strlen Test:\n" RESET);
	char strl1[50];
	int len1;

	strcpy(strl1, "This is a test of the strlen function");

	len1 = strlen(strl1);
	printf("Length of |%s| is |%d|\n", strl1, len1);

	ft_putchar('\n');
	ft_putstr(BOLDWHITE "7. ft_strlen Test:\n" RESET);
	char ftstrl1[50];
	int ftlen1;

	strcpy(ftstrl1, "This is a test of the strlen function");

	ftlen1 = strlen(ftstrl1);
	printf("Length of |%s| is |%d|\n", ftstrl1, ftlen1);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );
	ft_putchar('\n');

	system("clear");
	ft_putstr(BOLDWHITE "8. strdup Test:\n" RESET);

	char d1[] = "Hello";
	char *new;
	new	= strdup(d1);
	if (strcmp(new, d1) == 0) ft_putstr(BOLDGREEN "Test Passed\n" RESET);
	else ft_putstr("Test Failed\n");

	ft_putstr(BOLDWHITE "\n8. ft_strdup Test:\n" RESET);

	char e1[] = "Hello";
	char *new1;
	new1     = ft_strdup(e1);
	if (strcmp(new1, e1) == 0) ft_putstr(BOLDGREEN "Test Passed\n" RESET);
	else ft_putstr(BOLDRED "Test Failed\n" RESET);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "9. strcpy Test:\n" RESET);

	char src_cpy1[40];
	char dest_cpy1[100];

	memset(dest_cpy1, '\0', sizeof(dest_cpy1));
	strcpy(src_cpy1, "This is a test of the strcpy function");
	strcpy(dest_cpy1, src_cpy1);

	printf("Final copied string : %s\n", dest_cpy1);
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "9. ft_strcpy Test:\n" RESET);

	char ftsrc_cpy1[40];
	char ftdest_cpy1[100];

	memset(ftdest_cpy1, '\0', sizeof(ftdest_cpy1));
	ft_strcpy(ftsrc_cpy1, "This is a test of the strcpy function");
	ft_strcpy(ftdest_cpy1, ftsrc_cpy1);

	printf("Final copied string : %s\n", ftdest_cpy1);
	ft_putchar('\n');
	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "10. strncpy Test:\n" RESET);

	char src_ncpy1[40];
	char dest_ncpy1[12];

	memset(dest_ncpy1, '\0', sizeof(dest_ncpy1));
	strcpy(src_ncpy1, "This is a test of the strncpy function");
	strncpy(dest_ncpy1, src_ncpy1, 10);

	printf("Final copied string : %s\n", dest_ncpy1);
	ft_putstr(BOLDWHITE "\n10. ft_strncpy Test:\n" RESET);

	char ftsrc_ncpy1[40];
	char ftdest_ncpy1[12];

	memset(ftdest_ncpy1, '\0', sizeof(ftdest_ncpy1));
	strcpy(ftsrc_ncpy1, "This is a test of the strncpy function");
	ft_strncpy(ftdest_ncpy1, ftsrc_ncpy1, 10);

	printf("Final copied string : %s\n", ftdest_ncpy1);
	ft_putchar('\n');


	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "11. strcat Test:\n" RESET);

	strcpy(src1,  "This is source");
	strcpy(dest1, "This is destination");

	strcat(dest1, src1);

	printf("Final destination string : |%s|\n", dest1);
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "11. ft_strcat Test:\n" RESET);

	strcpy(src2,  "This is source");
	strcpy(dest2, "This is destination");

	ft_strcat(dest2, src2);

	printf("Final destination string : |%s|\n", dest2);


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "12. strncat Test:\n" RESET);

	strcpy(src1,  "This is source");
	strcpy(dest1, "This is destination");

	strncat(dest1, src1, 15);

	printf("Final destination string : |%s|\n", dest1);
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "12. ft_strncat Test:\n" RESET);

	strcpy(src2,  "This is source");
	strcpy(dest2, "This is destination");

	strncat(dest2, src2, 15);

	printf("Final destination string : |%s|\n", dest2);
	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "13. strlcat Test:\n" RESET);

	char strlcatt[] = "testlol";
	char strlcatf[10];
	strlcat(strlcatf, "kjkjkjkjkjkl", sizeof(strlcatf));
	if (ft_strcmp(strlcatf, "kjkjkjkjk") == 0) ft_putstr(BOLDGREEN "Test Passed\n" RESET);
	else ft_putstr("Test Failed\n");

	ft_putstr(BOLDWHITE "\n13. ft_strlcat Test:\n" RESET);

	char strlcatt1[] = "testlol";
	char strlcatf1[10];
	ft_strlcat(strlcatf1, "kjkjkjkjkjkl", sizeof(strlcatf1));
	if (ft_strcmp(strlcatf1, "kjkjkjkjk") == 0) ft_putstr(BOLDGREEN "Test Passed\n" RESET);
	else ft_putstr(BOLDRED "Test Failed\n" RESET);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "14. strrchr Test:\n" RESET);
	const char str_1[] = "This is a test of the strrchr test";
	const char ch_1 = 'a';

	ret = strrchr(str_1, ch_1);

	printf("String after |%c| is - |%s|\n", ch_1, ret);

	ft_putstr(BOLDWHITE "\n14. ft_strrchr Test:\n" RESET);
	const char str_2[] = "This is a test of the strrchr test";
	const char ch_2 = 'a';
	char *ret3;

	ret3 = ft_strrchr(str_2, ch_2);

	printf("String after |%c| is - |%s|\n", ch_2, ret3);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "15. strstr Test:\n" RESET);

	const char haystack1[20] = "STRSTR test passed";
	const char needle1[20] = "test passed";

	ret = strstr(haystack1, needle1);

	printf("The substring is: %s\n", ret);

	ft_putstr(BOLDWHITE "\n15. ft_strstr Test:\n" RESET);

    const char haystack2[20] = "STRSTR test passed";
    const char needle2[20] = "test passed";
    char *test0;
    
    test0 = ft_strstr(haystack2, needle2);
    
    printf("The substring is: %s\n", test0);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "16. strnstr Test:\n" RESET);
    
    char *strtest1;
    char *strtest2;
    char *strtest3;
    char *strtest4;
    
    strtest1 = "Foo Bar Baz";
    strtest2 = "Bar ";
    strtest3 = "Foo Bar Baz";
    strtest4 = "Bar ";
    printf("\n\n%s\n", "Looking for the string 'Bar ' in 'Foo Bar Baz' for a size of 60");
    ft_putstr(BOLDWHITE "strnstr Test1:" RESET);
    printf("%s\n", strnstr(strtest1, strtest2, 60));
    ft_putstr(BOLDWHITE "ft_strnstr Test1:" RESET);
    printf("%s\n", ft_strnstr(strtest3, strtest4, 60));
    printf("\n\n%s\n", "Looking for the string 'bar' in 'Foo Bar Baz' for a size of 60");
    ft_putstr(BOLDWHITE "strnstr Test2:" RESET);
    printf("%s\n", strnstr(strtest1, "bar", 60));
    ft_putstr(BOLDWHITE "ft_strnstr Test2:" RESET);
    printf("%s\n", ft_strnstr(strtest3, "bar", 60));
    printf("\n\n%s\n", "Looking for the string 'Bar ' in 'Foo Bar Baz' for a size of 2");
    ft_putstr(BOLDWHITE "strnstr Test3:" RESET);
    printf("%s\n", strnstr(strtest1, strtest2, 2));
    ft_putstr(BOLDWHITE "ft_strnstr Test3:" RESET);
    printf("%s\n", ft_strnstr(strtest3, strtest4, 2));
    printf("\n\n%s\n", "Looking for the string 'Bar ' in 'Foo Bar Baz' for a size of 70");
    ft_putstr(BOLDWHITE "strnstr Test4:" RESET);
    printf("%s\n", strnstr(strtest1, strtest2, 70));
    ft_putstr(BOLDWHITE "ft_strnstr Test4:" RESET);
    printf("%s\n", ft_strnstr(strtest3, strtest4, 70));

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "17. strcmp Test:\n" RESET);
	int ret;


	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = strcmp(str1, str2);

	if(ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if(ret > 0) 
	{
		printf("str2 is less than str1\n");
	}
	else 
	{
		printf("str1 is equal to str2\n");
	}
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "17. ft_strcmp Test:\n" RESET);

	int ret6;


	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret6 = strcmp(str1, str2);

	if(ret6 < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if(ret6 > 0)
	{
		printf("str2 is less than str1\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
	ft_putchar('\n'); 

	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "18. strncmp Test:\n" RESET);
	int ret7;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret7 = strncmp(str1, str2, 4);

	if(ret7 < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if(ret7 > 0) 
	{
		printf("str2 is less than str1\n");
	}
	else 
	{
		printf("str1 is equal to str2\n");
	}

	ft_putstr(BOLDWHITE "\n18. ft_strncmp Test:\n" RESET);
	int ret8;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret8 = ft_strncmp(str1, str2, 4);

	if(ret8 < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if(ret8 > 0)
	{
		printf("str2 is less than str1\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "19. atoi Test:\n" RESET);

	int val1;

	strcpy(str1, "98993489");
	val1 = atoi(str1);
	printf("String value = %s, Int value = %d\n", str1, val1);

	strcpy(str1, "atoi function test");
	val1 = atoi(str1);
	printf("String value = %s, Int value = %d\n", str1, val1);

	ft_putstr(BOLDWHITE "\n19. ft_atoi Test:\n" RESET);

	int val2;

	strcpy(str2, "98993489");
	val2 = ft_atoi(str2);
	printf("String value = %s, Int value = %d\n", str2, val2);

	strcpy(str2, "atoi function test");
	val2 = ft_atoi(str2);
	printf("String value = %s, Int value = %d\n", str2, val2);


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "20. isalpha Test:\n" RESET);

	int tst1 = 'd';
	int tst2 = '2';
	int tst3 = '\t';
	int tst4 = ' ';

	if (isalpha(tst1))
	{
		printf("tst1 = |%c| is an alphabet\n", tst1 );
	}
	else
	{
		printf("tst1 = |%c| is not an alphabet\n", tst1 );
	}

	if( isalpha(tst2) )
	{
		printf("tst2 = |%c| is an alphabet\n", tst2 );
	}
	else
	{
		printf("tst2 = |%c| is not an alphabet\n", tst2 );
	}

	if( isalpha(tst3) )
	{
		printf("tst3 = |%c| is an alphabet\n", tst3 );
	}
	else
	{
		printf("tst3 = |%c| is not an alphabet\n", tst3 );
	}

	if( isalpha(tst4) )
	{
		printf("tst4 = |%c| is an alphabet\n", tst4 );
	}
	else
	{
		printf("tst4 = |%c| is not an alphabet\n", tst4 );
	}

	ft_putstr(BOLDWHITE "\n20. ft_isalpha Test:\n" RESET);

	int fttst1 = 'd';
	int fttst2 = '2';
	int fttst3 = '\t';
	int fttst4 = ' ';

	if (ft_isalpha(fttst1))
	{
		printf("tst1 = |%c| is an alphabet\n", fttst1 );
	}
	else
	{
		printf("tst1 = |%c| is not an alphabet\n", fttst1 );
	}

	if( ft_isalpha(fttst2) )
	{
		printf("tst2 = |%c| is an alphabet\n", fttst2 );
	}
	else
	{
		printf("tst2 = |%c| is not an alphabet\n", fttst2 );
	}

	if( ft_isalpha(fttst3) )
	{
		printf("tst3 = |%c| is an alphabet\n", fttst3 );
	}
	else
	{
		printf("tst3 = |%c| is not an alphabet\n", fttst3 );
	}

	if( ft_isalpha(fttst4) )
	{
		printf("tst4 = |%c| is an alphabet\n", fttst4 );
	}
	else
	{
		printf("tst4 = |%c| is not an alphabet\n", fttst4 );
	}

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "21. isdigit Test:\n" RESET);

	int dig1 = 'h';
	int dig2 = '2';

	if( isdigit(dig1) == 1 )
	{
		printf("var1 = |%c| is a digit\n", dig1 );
	}
	else
	{
		printf("var1 = |%c| is not a digit\n", dig1 );
	}

	if( isdigit(dig2) == 1)
	{
		printf("var2 = |%c| is a digit\n", dig2 );
	}
	else
	{
		printf("var2 = |%c| is not a digit\n", dig2 );
	}

	ft_putstr(BOLDWHITE "\n21. ft_isdigit Test:\n" RESET);

	int ftdig1 = 'h';
	int ftdig2 = '2';

	if( ft_isdigit(ftdig1) == 1 )
	{
		printf("var1 = |%c| is a digit\n", ftdig1 );
	}
	else
	{
		printf("var1 = |%c| is not a digit\n", ftdig1 );
	}

	if( ft_isdigit(ftdig2) == 1 )
	{
		printf("var2 = |%c| is a digit\n", ftdig2 );
	}
	else
	{
		printf("var2 = |%c| is not a digit\n", ftdig2 );
	}


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "22. isalnum Test:\n" RESET);
	int al1 = 'd';
	int al2 = '2';
	int al3 = '\t';
	int al4 = ' ';

	if( isalnum(al1) )
	{
		printf("var1 = |%c| is alphanumeric\n", al1 );
	}
	else
	{
		printf("var1 = |%c| is not alphanumeric\n", al1 );
	}

	if( isalnum(al2) )
	{
		printf("var2 = |%c| is alphanumeric\n", al2 );
	}
	else
	{
		printf("var2 = |%c| is not alphanumeric\n", al2 );
	}

	if( isalnum(al3) )
	{
		printf("var3 = |%c| is alphanumeric\n", al3 );
	}
	else
	{
		printf("var3 = |%c| is not alphanumeric\n", al3 );
	}

	if( isalnum(al4) )
	{
		printf("var4 = |%c| is alphanumeric\n", al4 );
	}
	else
	{
		printf("var4 = |%c| is not alphanumeric\n", al4 );
	}

	ft_putstr(BOLDWHITE "\n22. isalnum Test:\n" RESET);

	if( ft_isalnum(al1) )
	{
		printf("var1 = |%c| is alphanumeric\n", al1 );
	}
	else
	{
		printf("var1 = |%c| is not alphanumeric\n", al1 );
	}

	if( ft_isalnum(al2) )
	{
		printf("var2 = |%c| is alphanumeric\n", al2 );
	}
	else
	{
		printf("var2 = |%c| is not alphanumeric\n", al2 );
	}

	if( ft_isalnum(al3) )
	{
		printf("var3 = |%c| is alphanumeric\n", al3 );
	}
	else
	{
		printf("var3 = |%c| is not alphanumeric\n", al3 );
	}

	if( ft_isalnum(al4) )
	{
		printf("var4 = |%c| is alphanumeric\n", al4 );
	}
	else
	{
		printf("var4 = |%c| is not alphanumeric\n", al4 );
	}

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "23. isascii Test:\n" RESET);

	char letter = 'H';
	if (isascii(letter) == 1)
	{
		ft_putstr(BOLDGREEN "Test 1 Passed\n" RESET);
	}
	else
	{
		ft_putstr(BOLDRED "Test 1 Failed\n" RESET);
	}
	if (isascii('~') == 1)
	{
		ft_putstr(BOLDGREEN "Test 2 Passed\n" RESET);
	}
	else
	{
		ft_putstr(BOLDRED "Test 2 Failed\n" RESET);
	}
	char lolnewchar[]= "¢";
	if (isascii(lolnewchar[0])) ft_putstr(BOLDRED "Test 3 Failed\n" RESET);
	else ft_putstr(BOLDGREEN "Test 3 Passed\n" RESET);

	ft_putstr(BOLDWHITE "\n23. ft_isascii Test:\n" RESET);

	if (ft_isascii(letter) == 1)
	{
		ft_putstr(BOLDGREEN "Test 1 Passed\n" RESET);
	}
	else
	{
		ft_putstr(BOLDRED "Test 1 Failed\n" RESET);
	}
	if (ft_isascii('~') == 1)
	{
		ft_putstr(BOLDGREEN "Test 2 Passed\n" RESET);
	}
	else
	{
		ft_putstr(BOLDRED "Test 2 Failed\n" RESET);
	}
	if (ft_isascii(lolnewchar[0])) ft_putstr(BOLDRED "Test 3 Failed\n" RESET);
	else ft_putstr(BOLDGREEN "Test 3 Passed\n" RESET);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "24. isprint Test:\n" RESET);

	int pr1 = 'k';
	int pr2 = '8';
	int pr3 = '\t';
	int pr4 = ' ';

	if( isprint(pr1) )
	{
		printf("var1 = |%c| can be printed\n", pr1 );
	}
	else
	{
		printf("var1 = |%c| can't be printed\n", pr1 );
	}

	if( isprint(pr2) )
	{
		printf("var2 = |%c| can be printed\n", pr2 );
	}
	else
	{
		printf("var2 = |%c| can't be printed\n", pr2 );
	}

	if( isprint(pr3) )
	{
		printf("var3 = |%c| can be printed\n", pr3 );
	}
	else
	{
		printf("var3 = |%c| can't be printed\n", pr3 );
	}

	if( isprint(pr4) )
	{
		printf("var4 = |%c| can be printed\n", pr4 );
	}
	else
	{
		printf("var4 = |%c| can't be printed\n", pr4 );
	}

	ft_putstr(BOLDWHITE "\n24. ft_isprint Test:\n" RESET);

	if( ft_isprint(pr1) )
	{
		printf("var1 = |%c| can be printed\n", pr1 );
	}
	else
	{
		printf("var1 = |%c| can't be printed\n", pr1 );
	}

	if( ft_isprint(pr2) )
	{
		printf("var2 = |%c| can be printed\n", pr2 );
	}
	else
	{
		printf("var2 = |%c| can't be printed\n", pr2 );
	}

	if( ft_isprint(pr3) )
	{
		printf("var3 = |%c| can be printed\n", pr3 );
	}
	else
	{
		printf("var3 = |%c| can't be printed\n", pr3 );
	}

	if( ft_isprint(pr4) )
	{
		printf("var4 = |%c| can be printed\n", pr4 );
	}
	else
	{
		printf("var4 = |%c| can't be printed\n", pr4 );
	}

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "25. toupper Test:\n" RESET);

	int z = 0;
	char str[] = "This was in lower case";

	while(str[z])
	{
		putchar (toupper(str[z]));
		z++;
	}
	ft_putchar('\n');
	ft_putstr(BOLDWHITE "25. ft_toupper Test:\n" RESET);

	int j = 0;
	char upper[] = "This was in lower case";

	while(upper[j])
	{
		putchar (ft_toupper(upper[j]));
		j++;
	}

	ft_putchar('\n');
	printf("\n\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "26. tolower Test:\n" RESET);

	int k = 0;
	char low[] = "tHis WAS IN UPPER CASE";

	while(low[k])
	{
		putchar (tolower(low[k]));
		k++;
	}
	ft_putchar('\n');
	ft_putstr(BOLDWHITE "26. ft_tolower Test:\n" RESET);

	int l = 0;
	char lower[] = "This was in lower case";

	while(lower[l])
	{
		putchar (ft_tolower(lower[l]));
		l++;
	}

	printf("\n\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "27. memchr Test:\n" RESET);
	const char str_mchr1[] = "This is a test of memchr function";
	const char ch1 = 'a';
	char *ret1;

	ret1 = memchr(str_mchr1, ch1, strlen(str_mchr1));

	printf("String after |%c| is - |%s|\n", ch1, ret1);

	ft_putstr(BOLDWHITE "\n27. ft_memchr Test:\n" RESET);
	const char str_mchr2[] = "This is a test of memchr function";
	const char ch2 = 'a';
	char *ret2;

	ret2 = ft_memchr(str_mchr2, ch2, strlen(str_mchr2));

	printf("String after |%c| is - |%s|\n", ch2, ret2);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "28. strchr Test:\n" RESET);

	const char chr[] = "This is a test of strchr function";
	const char ch5 = 'a';
	char *ret0;

	ret0 = strchr(chr, ch5);

	printf("String after |%c| is - |%s|\n", ch5, ret0);

	ft_putstr(BOLDWHITE "\n28. ft_strchr Test:\n" RESET);

	const char chr1[] = "This is a test of strchr function";
	const char ch6 = 'a';
	char *ret9;

	ret9 = ft_strchr(chr1, ch6);

	printf("String after |%c| is - |%s|\n", ch5, ret0);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putchar('\n');

	ft_putstr(BOLDWHITE "Part 2 Tests:\n" RESET);

	ft_putchar('\n');

	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "29. memalloc Test:\n" RESET);
    
    printf("\n%s\n", "ft_memalloc used on a new pointer to char with a size of 20, then the words 'Hello world' are placed into the new string");
    char	*new_str;
    new_str = ft_memalloc(20);
    strcpy(new_str, "Hello world");
    printf("%s", new_str);
    ft_putchar('\n');

	printf("\n\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "30. memdel Test:\n" RESET);
    
    int	new_arr[5][5];
    printf("\n%s\n", "ft_memdel used on a newly created array, no crash means it works");
    ft_memdel((void **)new_arr);
    
	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "31. strnew Test:\n" RESET);
    
    char	*new_str1;
    printf("\n%s\n", "ft_strnew used to create a new string of size 10");
    new_str1 = ft_strnew(10);
    printf("%s\n", new_str1);
    
	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "32. strdel Test:\n" RESET);
    
    printf("\n%s\n", "ft_strdel used to free the string that was just created, no crash means it works");
    ft_strdel((char **)new_str1);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "33. strclr Test:\n" RESET);
    
    printf("\n%s\n", "ft_strclr used to clear the string created with ft_memalloc");
    ft_strclr(new_str);
    printf("%s\n", new_str);

	printf("Press Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "34. striter Test:\n"RESET);
    
    printf("\n%s\n", "ft_striter used on a string with 'Hello world' using a test uppercase program");
    strcpy(new_str, "Hello world");
    ft_striter(new_str, &ft_puppercase);

	printf("\n\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "35. striteri Test:\n" RESET);
    
    printf("\n%s\n", "ft_striteri used on the same string using a test upper and lower case program");
    ft_striteri(new_str, &ft_plowercase_mod);

	printf("\n\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "36. strmap Test:\n" RESET);
    
    printf("\n%s\n", "ft_srrmap used on the same string using a test uppercase program, put into a new string");
    char	*new_str2;
    new_str2 = ft_strmap(new_str, &ft_test_upper);
    printf("%s\n", new_str2);

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "37. strmapi Test:\n" RESET);
    
    printf("\n%s\n", "ft_strmapi used on the string that was just created using an upper and lowercase program, put into a new string");
    char	*new_str3;
    new_str3 = ft_strmapi(new_str2, &ft_test_upper_mod);
    printf("%s\n", new_str3);


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "38. strequ Test:\n" RESET);
    
    printf("\n%s\n", "ft_strequ used to compare strings 'Hello world' and 'Hello world', output should be 1");
    printf("%d\n", ft_strequ("Hello world", "Hello world"));
    printf("\n%s\n", "ft_strequ used to compare strings 'Hel±lo§' and 'Hello world', output should be 0");
    printf("%d\n", ft_strequ("Hel±lo§", "Hello world"));


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "39. strnequ Test:\n" RESET);
    
    printf("\n%s\n", "ft_strnequ used to compare strings 'Hello world' and 'Hello world' for size of 200, output should be 1");
    printf("%d\n", ft_strnequ("Hello world", "Hello world", 200));
    printf("\n%s\n", "ft_strnequ used to compare strings 'Hel±lo§' and 'Hello world' for a size of 200, output should be 0");
    printf("%d\n", ft_strnequ("Hel±lo§", "Hello world", 200));
    printf("\n%s\n", "ft_strnequ used to compare strings 'Hel±lo§' and 'Hello world' for a size of 2, output should be 1");
    printf("%d\n", ft_strnequ("Hel±lo§", "Hello world", 2));

	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "40. strsub Test:\n" RESET);
    
    printf("\n%s\n", "ft_strsub used on the string 'Hello world', starting from 0 with a size of 4");
    printf("%s\n", ft_strsub("Hello world", 0, 4));
    printf("\n%s\n", "ft_strsub used on the string 'Hello world', starting from 4 with a size of 200");
    printf("%s\n", ft_strsub("Hello world", 4, 200));
    printf("\n%s\n", "ft_strsub used on the string 'Hello world', starting from 200 with a size of 4");
    printf("%s\n", ft_strsub("Hello world", 200, 4));


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "41. strjoin Test:\n" RESET);
    
    printf("\n%s\n", "ft_strjoin used on the strings 'Hello ' and 'world'");
    printf("%s\n", ft_strjoin("Hello ", "world"));


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "42. strtrim Test:\n" RESET);
    
    printf("\n%s\n", "ft_strtrim used on the sting '       Hello world		\t     '");
    printf("%s", ft_strtrim("               Hello world          \t         "));


	printf("\n\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "43. strsplit Test:\n" RESET);
    
    char	**str_arr;
    char	**str_arr2;
    int		i;
    
    i = 0;
    printf("\n%s\n", "ft_strsplit used to split the string 'Hello**world*I*am***coding*' with the delimiter '*'");
    str_arr = ft_strsplit("Hello**world*I*am***coding*", '*');
    while (str_arr[i] != '\0')
    {
        printf("%s\n", str_arr[i]);
        i++;
    }
    i = 0;
    printf("\n%s\n", "ft_strsplit used to split the string '   Hell o**wo rld*I*a m***cod ing*’ with the delimiter ' ' ");
    str_arr2 = ft_strsplit("Hell o**wo rld*I*a m***cod ing*", ' ');
    while (str_arr2[i] != '\0')
    {
        printf("%s\n", str_arr2[i]);
        i++;
    }


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "44. itoa Test:\n" RESET);
    
    printf("\n%s\n", "ft_itoa used to convert the int '-300' into a string");
    printf("%s\n", ft_itoa(-300));
    printf("\n%s\n", "ft_itoa used to convert the int '30501' into a string");
    printf("%s\n", ft_itoa(30501));


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "45. putchar Test:\n" RESET);
    
    printf("\n%s\n", "ft_putchar printing the char 'c'");
    ft_putchar('c');
    printf("\n%s\n", "ft_putchar printing the char '4'");
    ft_putchar('4');


	printf("\n\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "46. putstr Test:\n" RESET);
    
    printf("\n%s\n", "ft_putstr printing the string 'Hello world'");
    ft_putstr("Hello world");

	printf("\n\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "47. putendl Test:\n"RESET);
    
    printf("\n%s\n", "ft_putendl printing the string 'Hello world'");
    ft_putendl("Hello world");


	printf("\nPress Enter to Continue");
	while( getchar() != '\n' );

	system("clear");
	ft_putstr(BOLDWHITE "48. putnbr Test:\n" RESET);
    
    printf("\n%s\n", "ft_putnbr printing the int '-300'");
    ft_putnbr(-300);
    printf("\n\n%s\n", "ft_putnbr printing the int '605'");
    ft_putnbr(605);
    ft_putchar('\n');


    int	fd;
     fd = 0;
    
    printf("\n\n%s\n", "ft_putchar_fd, ft_putstr_d, ft_putendl_d, ft_putnbr_fd, printing 'A' 'You passed' 'The test case' and '42' to file 'test'");
    if ((fd = open("test", O_WRONLY, S_IRUSR | S_IWUSR)) == -1)
        ft_putendl("Error: couldn't open file.");
    
    if (fd != -1)
    {
        ft_putchar_fd('A', fd);
        ft_putchar_fd('\n', fd);
        ft_putstr_fd("You passed", fd);
        ft_putchar_fd('\n', fd);
        ft_putendl_fd("The test case", fd);
        ft_putnbr_fd(42, fd);
    }
    
    if (fd != -1)
        if ((fd = close(fd)) == -1)
            ft_putendl("Error: couldn't close file");


	return(0);
}

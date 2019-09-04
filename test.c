#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <string.h>

int		main(int argc, char **argv)
{
	if (argc != 1)
		++argv;

	char	*mst;

	// memset
	printf("\n\t\tMEMSET\n");
	char	test[] = "hello world, people!";
	mst = (char*)ft_memset(test, '5', 7);
	printf("%s\n", mst);
	mst = (char*)memset(test, '5', 7);
	printf("%s\n", mst);
	printf("-----------------\n");
	mst = (char*)ft_memset(test, '5', 0);
	printf("%scheck\n", mst);
	mst = (char*)memset(test, '5', 0);
	printf("%scheck\n", mst);

	// bzero
	printf("\n\t\tBZERO\n");
	ft_bzero(mst, 7);
	printf("%scheck\n", mst);
	if (*mst == '\0')
		printf("done!\n");
	bzero(mst, 7);
	printf("%scheck\n", mst);
	if (*mst == '\0')
		printf("done!\n");
	printf("-----------------\n");
	ft_bzero(mst, 0);
	printf("%scheck\n", mst);
	if (*mst == '\0')
		printf("done!\n");
	bzero(mst, 0);
	printf("%scheck\n", mst);
	if (*mst == '\0')
		printf("done!\n");

	// memcpy
	printf("\n\t\tMEMCPY\n");
	char	test1[] = "hello world, people!";
	char	test2[] = "hello world, people!";
	char	src1[] = "testish test";
	char	src2[] = "testish test";
	mst = ft_memcpy(test1, src1, 8);
	printf("%s\n", mst);
	mst = memcpy(test2, src2, 8);
	printf("%s\n", mst);
	printf("-----------------\n");
	char	test3[] = "hello world, people!";
	char	test4[] = "hello world, people!";
	char	src3[] = "testish test";
	char	src4[] = "testish test";
	mst = ft_memcpy(test3, src3, 0);
	printf("%s\n", mst);
	mst = memcpy(test4, src4, 0);
	printf("%s\n", mst);
	printf("-----------------\n");
	char	strmemcpy[] = "memmove can be very useful......";
	char	strmemcpy1[] = "memmove can be very useful......";
  	mst = ft_memcpy(strmemcpy + 15, strmemcpy + 13, 8);
	printf("%s\n", mst);
  	mst = memcpy(strmemcpy1 + 15, strmemcpy1 + 13, 8);
	printf("%s\n", mst);
	printf("-----------------\n");
	char	strmemcpy2[] = "foo-bar";
	char	strmemcpy3[] = "foo-bar";
  	mst = ft_memcpy(&strmemcpy2[3], &strmemcpy2[4], 2);
	printf("%s\n", mst);
  	mst = memcpy(&strmemcpy3[3], &strmemcpy3[4], 2);
	printf("%s\n", mst);
	
	// memccpy
	printf("\n\t\tMEMCCPY\n");
	char	testc1[] = "hello world, people!";
	char	testc2[] = "hello world, people!";
	char	srcc1[] = "testish test";
	char	srcc2[] = "testish test";
	mst = ft_memccpy(testc1, srcc1, 'z', 8);
	printf("%s\n", mst);
	mst = memccpy(testc2, srcc2, 'z', 8);
	printf("%s\n", mst);
	printf("-----------------\n");
	char	testc3[] = "hello world, people!";
	char	testc4[] = "hello world, people!";
	char	srcc3[] = "testish test";
	char	srcc4[] = "testish test";
	mst = ft_memccpy(testc3, srcc3, 'h', 8);
	printf("%s\n", mst);
	mst = memccpy(testc4, srcc4, 'h', 8);
	printf("%s\n", mst);
	printf("-----------------\n");
	char	testc5[] = "hello world, people!";
	char	testc6[] = "hello world, people!";
	char	srcc5[] = "testish test";
	char	srcc6[] = "testish test";
	mst = ft_memccpy(testc5, srcc5, 'h', 0);
	printf("%s\n", mst);
	mst = memccpy(testc6, srcc6, 'h', 0);
	printf("%s\n", mst);

	// memmove
	printf("\n\t\tMEMMOVE\n");
	char	testm1[] = "hello world, people!";
	char	testm2[] = "hello world, people!";
	char	srcm1[] = "testish test";
	char	srcm2[] = "testish test";
	mst = ft_memmove(testm1, srcm1, 8);
	printf("%s\n", mst);
	mst = memmove(testm2, srcm2, 8);
	printf("%s\n", mst);
	printf("-----------------\n");
	char	testm3[] = "hello world, people!";
	char	testm4[] = "hello world, people!";
	char	srcm3[] = "testish test";
	char	srcm4[] = "testish test";
	mst = ft_memmove(testm3, srcm3, 0);
	printf("%s\n", mst);
	mst = memmove(testm4, srcm4, 0);
	printf("%s\n", mst);
	printf("-----------------\n");
	char	strmemmove[] = "memmove can be very useful......";
	char	strmemmove1[] = "memmove can be very useful......";
  	mst = ft_memmove(strmemmove + 15, strmemmove + 13, 8);
	printf("%s\n", mst);
  	mst = memmove(strmemmove1 + 15, strmemmove1 + 13, 8);
	printf("%s\n", mst);
	printf("-----------------\n");
	char	strmemmove2[] = "foo-bar";
	char	strmemmove3[] = "foo-bar";
  	mst = ft_memmove(&strmemmove2[3], &strmemmove2[4], 2);
	printf("%s\n", mst);
  	mst = memmove(&strmemmove3[3], &strmemmove3[4], 2);
	printf("%s\n", mst);

	//memchr
	printf("\n\t\tMEMCHR\n");
	char	testmem[] = "hello world!";
	mst = ft_memchr(testmem, 'o', 8);
	printf("%s\n", mst);
	mst = memchr(testmem, 'o', 8);
	printf("%s\n", mst);
	printf("-----------------\n");
	mst = ft_memchr(testmem, 'o', 3);
	printf("%s\n", mst);
	mst = memchr(testmem, 'o', 3);
	printf("%s\n", mst);

	//memcmp
	printf("\n\t\tMEMCMP\n");
	char	cmp1[] = "";
	char	cmp2[] = "";
	char	cmp3[] = "123123A";
	char	cmp4[] = "123123a";
	char	cmp5[] = "";
	char	cmp6[] = "zzz";
	printf("%d\n", ft_memcmp(cmp1, cmp2, 0));
	printf("%d\n", memcmp(cmp1, cmp2, 0));
	printf("-----------------\n");
	printf("%d\n", ft_memcmp(cmp1, cmp2, 3));
	printf("%d\n", memcmp(cmp1, cmp2, 3));
	printf("-----------------\n");
	printf("%d\n", ft_memcmp(cmp3, cmp4, 7));
	printf("%d\n", memcmp(cmp3, cmp4, 7));
	printf("-----------------\n");
	printf("%d\n", ft_memcmp(cmp5, cmp6, 3));
	printf("%d\n", memcmp(cmp5, cmp6, 3));

	//strlen
	printf("\n\t\tSTRLEN\n");
	printf("%zu\n", ft_strlen(cmp1));
	printf("%zu\n", strlen(cmp1));
	printf("-----------------\n");
	printf("%zu\n", ft_strlen(cmp3));
	printf("%zu\n", strlen(cmp3));
	printf("-----------------\n");
	printf("%zu\n", ft_strlen(cmp6));
	printf("%zu\n", strlen(cmp6));

	//strdup and strcpy
	printf("\n\t\tSTRDUP AND STRCPY\n");
	char	*newdup;
	char	dupsrc[] = "get the new line";
	char	dupsrc1[] = "again get the new line";
	char	dupsrc2[] = "and again...";
	newdup = ft_strdup(dupsrc);
	printf("%s\n", newdup);
	newdup = strdup(dupsrc);
	printf("%s\n", newdup);
	printf("-----------------\n");
	newdup = ft_strdup(dupsrc1);
	printf("%s\n", newdup);
	newdup = strdup(dupsrc1);
	printf("%s\n", newdup);
	printf("-----------------\n");
	newdup = ft_strdup(dupsrc2);
	printf("%s\n", newdup);
	newdup = strdup(dupsrc2);
	printf("%s\n", newdup);

	//strncpy
	printf("\n\t\tSTRNCPY\n");
	char	strn[] = "123 456 789 999 999";
	char	strn0[] = "123 456 789 999 999";
	char	strn1[] = "ASDFASDF";
	char	strn2[] = "aasdasdasdasdas";
	printf("%s\n", ft_strncpy(strn, strn1, 5));
	printf("%s\n", strncpy(strn0, strn1, 5));
	printf("-----------------\n");
	printf("%s\n", ft_strncpy(strn1, strn2, 5));
	printf("%s\n", strncpy(strn1, strn2, 5));

	//strcat
	printf("\n\t\tSTRCAT\n");
	char	catbase[25];
	char	*newcat;
	catbase[0] = '\0';
	char	app[] = "test+++test";
	newcat = ft_strcat(catbase, app);
	newcat = ft_strcat(catbase, app);
	printf("%s\n", catbase);
	printf("-----------------\n");
	catbase[0] = '\0';
	newcat = strcat(catbase, app);
	newcat = strcat(catbase, app);
	printf("%s\n", catbase);

	//strncat
	printf("\n\t\tSTRNCAT\n");
	catbase[0] = '\0';
	newcat = ft_strncat(catbase, app, 3);
	newcat = ft_strncat(catbase, app, 3);
	printf("%s\n", catbase);
	printf("-----------------\n");
	catbase[0] = '\0';
	newcat = strncat(catbase, app, 3);
	newcat = strncat(catbase, app, 3);
	printf("%s\n", catbase);

	//strlcat
	printf("\n\t\tSTRLCAT\n");
	catbase[0] = '\0';
	unsigned int len = 0;
	len = ft_strlcat(catbase, app, 25);
	len = ft_strlcat(catbase, app, 25);
	len = ft_strlcat(catbase, app, 25);
	printf("%d\n", len);
	newcat = &catbase[0];
	printf("%s\n", newcat);
	printf("-----------------\n");
	catbase[0] = '\0';
	len = strlcat(catbase, app, 25);
	len = strlcat(catbase, app, 25);
	len = strlcat(catbase, app, 25);
	printf("%d\n", len);
	newcat = &catbase[0];
	printf("%s\n", newcat);

	//strchr
	printf("\n\t\tSTRCHR\n");
	printf("%s\n", ft_strchr(app, '+'));
	printf("%s\n", strchr(app, '+'));

	//strrchr
	printf("\n\t\tSTRRCHR\n");
	printf("%s\n", ft_strrchr(app, '+'));
	printf("%s\n", strrchr(app, '+'));

	//strstr
	printf("\n\t\tSTRSTR\n");
	char	strstr0[] = "hell boy, it's a difficult";
	char	need[] = "boy";
	char	need1[] = "";
	char	strstr1[] = "";
	printf("%s\n", ft_strstr(strstr0, need));
	printf("%s\n", strstr(strstr0, need));
	printf("-----------------\n");
	printf("%s\n", ft_strstr(strstr0, need1));
	printf("%s\n", strstr(strstr0, need1));
	printf("-----------------\n");
	printf("%s\n", ft_strstr(strstr1, need));
	printf("%s\n", strstr(strstr1, need));
	printf("-----------------\n");
	printf("%s\n", ft_strstr(strstr1, need1));
	printf("%s\n", strstr(strstr1, need1));

	//strnstr
	printf("\n\t\tSTRNSTR\n");
	printf("%s\n", ft_strnstr(strstr0, need, 7));
	printf("%s\n", strnstr(strstr0, need, 7));
	printf("-----------------\n");
	printf("%s\n", ft_strnstr(strstr0, need1, 7));
	printf("%s\n", strnstr(strstr0, need1, 7));
	printf("-----------------\n");
	printf("%s\n", ft_strnstr(strstr1, need, 7));
	printf("%s\n", strnstr(strstr1, need, 7));
	printf("-----------------\n");
	printf("%s\n", ft_strnstr(strstr1, need1, 7));
	printf("%s\n", strnstr(strstr1, need1, 7));


	//isalpha
	printf("\n\t\tISALPHA\n");
	printf("a - %d\n", ft_isalpha('a'));
	printf("1 - %d\n", ft_isalpha('1'));
	printf("h - %d\n", ft_isalpha('h'));
	printf("- - %d\n", ft_isalpha('-'));
	printf("Z - %d\n", ft_isalpha('Z'));
	printf("\\0 - %d\n", ft_isalpha('\0'));

	//isdigit
	printf("\n\t\tISDIGIT\n");
	printf("2 - %d\n", ft_isdigit('2'));
	printf("a - %d\n", ft_isdigit('a'));
	printf("- - %d\n", ft_isdigit('-'));
	printf("0 - %d\n", ft_isdigit('0'));
	printf("+ - %d\n", ft_isdigit('+'));







	//putchar
	printf("\n\t\tPUTCHAR\n");
	ft_putchar('z');
	ft_putchar('a');
	ft_putchar('\0');
	ft_putchar('\n');

	//putstr
	printf("\n\t\tPUTSTR\n");
	ft_putstr("test");
	ft_putchar('\n');
	puts("test");

	return (0);
}

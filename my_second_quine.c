#include <stdio.h>

int	main(void)
{
	char	*s[] = {
	"	%c%s%c,%c",
	"#include <stdio.h>%c",
	"%c",
	"int	main(void)%c",
	"{%c",
	"	char	*s[] = {%c",
	"	};%c",
	"%c",
	"	for (int i = 1 ; i < 6 ; i++)%c",
	"		printf(s[i], 10);%c",
	"	for (int i = 0 ; i < 17 ; i++)%c",
	"		printf(s[0], 34, s[i], 34, 10);%c",
	"	for (int i = 6 ; i < 17 ; i++)%c",
	"		printf(s[i], 10);%c",
	"%c",
	"	return (0);%c",
	"}%c",
	};

	for (int i = 1 ; i < 6 ; i++)
		printf(s[i], 10);
	for (int i = 0 ; i < 17 ; i++)
		printf(s[0], 34, s[i], 34, 10);
	for (int i = 6 ; i < 17 ; i++)
		printf(s[i], 10);

	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*s[] = {
	"	%c%s%c,%c",
	"========== C Code ==========",
	"#include <stdio.h>",
	"",
	"int	main(void)",
	"{",
	"	char	*s[] = {",
	"	};",
	"",
	"	for (int i = 19 ; i < 24 ; i++)",
	"		printf(s[i], 10);",
	"	for (int i = 0 ; i < 35 ; i++)",
	"		printf(s[0], 34, s[i], 34, 10);",
	"	for (int i = 24 ; i < 35 ; i++)",
	"		printf(s[i], 10);",
	"",
	"	return (0);",
	"}",
	"========= CPP Code =========",
	"#include <iostream>%c",
	"%c",
	"int	main(void)%c",
	"{%c",
	"	std::string	s[] = {%c",
	"	};%c",
	"%c",
	"	for (int i = 2 ; i < 7 ; i++)%c",
	"		std::cout << s[i] << std::endl;%c",
	"	for (int i = 0 ; i < 35 ; i++)%c",
	"		std::cout << (char)9 << (char)34 << s[i] << (char)34 << ',' << std::endl;%c",
	"	for (int i = 7 ; i < 18 ; i++)%c",
	"		std::cout << s[i] << std::endl;%c",
	"%c",
	"	return (0);%c",
	"}%c",
	};

	for (int i = 19 ; i < 24 ; i++)
		printf(s[i], 10);
	for (int i = 0 ; i < 35 ; i++)
		printf(s[0], 34, s[i], 34, 10);
	for (int i = 24 ; i < 35 ; i++)
		printf(s[i], 10);

	return (0);
}

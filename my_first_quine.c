#include <stdio.h>

int	main(void)
{
	char	s[] = "#include <stdio.h>%c%cint%cmain(void)%c{%c%cchar%cs[] = %c%s%c;%c%cprintf(s, 10, 10, 9, 10, 10, 9, 9, 34, s, 34, 10, 9, 10, 10);%c}%c";
	printf(s, 10, 10, 9, 10, 10, 9, 9, 34, s, 34, 10, 9, 10, 10);
}

#include <stddef.h>
static size_t	w_cnt(char const *str, char ch)
{
	size_t	cnt;
	size_t	i;
	size_t	flag;

	cnt = 0;
	i = 0;
	while (str[i] && str[i] == ch)
		i++;
	flag = 1;
	if (str[i])
		cnt++;
	while (str[i])
	{
		if (str[i] != ch && flag == 0)
		{
			cnt++;
			flag = 1;
		}
		if (str[i] == ch && flag == 1)
			flag = 0;
		i++;
	}
	return (cnt);
}
#include <stdio.h>
int main (
)
{
    printf("%ld \n", w_cnt("f    ", ' '));
}
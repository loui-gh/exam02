//A = 65; Z = 90
//a = 97; z = 122

#include <unistd.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *str1 = "abcdefghijklmnopqrstuvwxyz";
	char *str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *test = argv[1];
	int i = 0;
	char c;
	int index;
	while(test[i] != '\0')
	{
		if (test[i] >= 97 && test[i] <= 122)
		{
			if (test[i] >= 110)
			{
				index = 12 - (122 - test[i]);
				c = str1[index];
			}
			else 
				c = test[i] + 13;
			
			write(1, &c, 1);
		}
		else if (test[i] >= 65 && test[i] <= 90)
		{
			if (test[i] >= 78)
			{
				index = 12 - (90 - test[i]);
				c = str2[index];
			}
			else 
				c = test[i] + 13;
			
			write(1, &c, 1);
		}
		else
			write(1, &test[i], 1);
		
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

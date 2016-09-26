static int z = 0;
int getnext(char *str) {
	while(1) {
		switch(str[z])
		{
			case '0': case '1': case '2': case '3':
                        case '4': case '5': case '6': case '7':
                        case '8': case '9':
			z++;
			return str[z - 1] - '0';
			break;

			case '+': case '*': case '-': case '/':
			z++;
			return str[z - 1] - '0';
			break;

			case ' ':
			{
				z++;
				continue;
			}
			case '\0':
			return -6;
			break;
			default :
			{	
				z++;
				continue;
			}

		}
	}
}

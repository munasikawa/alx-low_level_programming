/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char char;
	int integer;
	long int li;
	long long int vli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(integer));
	printf("Size of a long int: %d bytes(s)\n", sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", sizeof(vli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}

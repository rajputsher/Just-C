#include <stdio.h>

int main()
{
	int a;
	double b;
	float c;

	/* initialize variables! */
	a = 12345;
	b = 6.0221409e23;

	printf("Value of variable 'a': %d\n",a);
	/* the address may be different from system to system */

	printf("Address of variable 'a': %p\n",&a);
	/* integers typically occupy 4 bytes in modern systems */

	printf("Size of variable 'a': %lu\n",sizeof(a));
	/* try modifying this code to change 'int' to a 'long'
	   see how the sizeof value changes */

    printf("Value of variable 'b': %e\n",b);
	/* addresses differ from system to system */
	printf("Address of variable 'b': %p\n",&b);
	/* consider changing 'double' to 'float' to see
	   whether the sizeof value changes */
	printf("Size of variable 'b': %lu\n",sizeof(b));

	return(0);
}

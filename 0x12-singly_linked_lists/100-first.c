#include <stdio.h>
void myConstructor(void) __attribute__ ((constructor));
void myConstructor(void)
{
	printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n ");
}

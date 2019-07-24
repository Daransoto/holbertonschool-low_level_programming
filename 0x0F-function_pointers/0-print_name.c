/**
* print_name - Prints a name using a specified function.
* @name: Name to print.
* @f: function to use to print the name.
*/
void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
}

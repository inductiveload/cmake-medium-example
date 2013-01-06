#include <stdio.h>

#include "foo_config.h" // CMake configs
#include "utilities.h" // common includes

#include "foo.h" // library includes



int main ()
{
	// include constant from CMake
	printf("Foo version: %s\n", FOOPROJ_VERSION);

    // included constant
    printf("Meaning of life: %d\n", MEANING_OF_LIFE);
    
    // library function
	printf("MoL squared: %d\n", libFooSquareMoL());	

	return 0;
}

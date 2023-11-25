#include <stdio.h>
#include <stdlib.h>
#include "../include/editline.h"
#include <doslib.h>

int main( int argc, char *argv[] ) {
	char *p;

	while ((p = readline("CLI> ")) != NULL) {
		puts(p);
		free(p);
	}

	return 0;
}


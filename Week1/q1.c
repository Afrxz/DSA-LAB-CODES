#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int
main ()
{
  int size = 5;
  int top = -1;					// index of the topmost element of the stack
  char inp_array[size][100];	// array of strings with size 5

  char a[100];

  FILE *fptr;

  void push (char inp[100])
  {
	if (top == size - 1)
	  {							// check if stack is full
		printf ("Overflow!\n");
		return;					// prevent pushing if full
	  }
	top = top + 1;
	strcpy (inp_array[top], inp);	// copy string from inp to inp_array[top]
	
  }
  fptr = fopen ("studentin.dat", "r");

  if (fptr == NULL)
	{
	  printf ("Error opening file!\n");
	  exit (1);
	}

  while (fgets (a, sizeof (a), fptr))
	{
	  push (a);
	  printf ("%s", a);
	}
}


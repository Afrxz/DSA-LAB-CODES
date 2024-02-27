#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5
  
int
main ()
{
  
int rear = -1;
  
int front = -1;
  
char inp_array[SIZE][100];
  
 
char a[100];
  
 
FILE * fptr;
  
 
void enqueue (char inp[100])
  {
	
if (rear == SIZE - 1)
	  {
		
rear = -1;
		
printf ("Overflow!\n");
		
return;
	  
}
	
 
rear++;
	
strcpy (inp_array[rear], inp);
  
}
  
 
void dequeue ()
  {
	
if (front == -1 || front > rear)
	  {
		
front = 0 ;
 printf ("\n");
		
fptr = fopen ("studentout1.dat", "w");
		
for (int i = front; i <= rear; i++)
		  {
			
 
printf ("Dequeued element: %s", inp_array[front]);
			
fprintf (fptr, "%s", inp_array[i]);
			
front++;
	  
} 
 
}
  
} 
 
void show ()
  {
	
if (front == -1)
	  {
		
printf ("\nUnderflow!!\n");
	  
}
	else
	  {
		
 
printf ("\nElements present in the queue:\n");
		
for (int i = front; i <= rear; i++)
		  {
			
printf ("%s\n", inp_array[i]);
  
 
} 
} 
}					//ignore show function as it is not needed 
  
fptr = fopen ("studentin1.dat", "r");
  
 
if (fptr == NULL)
	{
	  
printf ("Error opening file!\n");
	  
exit (1);
	
}
  
 
while (fgets (a, sizeof (a), fptr))
	{
	  
enqueue (a);
	  
printf ("%s", a);
	
}
  
 
printf ("done\n");
  
 
	// Call functions to demonstrate queue operations
	dequeue ();
  
 
 
fclose (fptr);
  
return 0;

}

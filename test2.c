/*Sean Walton
 * 
 * 
 */


#include <stdio.h>


	int check_for_ones(int input);
	int main()
	   {
		int choice;             /* menu choice, given by user */
  

  printf ( "Please choose: \n" );
  printf ( "\t 0  Display \"Hello world\" \n" );
  printf ( "\t 1  Display \"Goodbye!\" \n" );
  printf ( "\t -1 Quit\n" ); 

  scanf ( "%d", &choice );
  while (choice != -1) 
  {
    
		if ( choice == 0 ) 
		{
		  printf ( "Hello world \n" );
		 
			
		 }

	   else if(choice == 1)
	   {
		   printf("Goodbye! \n \n");
		   	   
	   }
   
		else if(choice == -1)
		return 0;
		
		else
		   printf("Choice undefined. \n");
		   

    printf ( "Please choose: \n" );
    printf ( "\t 0  Display \"Hello world\" \n" );
    printf ( "\t 1  Display \"Goodbye!\" \n" );
    printf ( "\t -1 Quit\n" ); 

    scanf ( "%d", &choice);
  } 

  return 0;

	   }

	


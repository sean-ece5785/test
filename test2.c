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
  printf ( "\t 2  Display \"I love Git!\" \n" );
  printf ( "\t -1 Quit\n" ); 

  scanf ( "%d", &choice );
  while (choice != -1) 
  {
    
		if ( choice == 0 ) 
		{
		  printf("\n");
		  printf ( "Hello world \n \n" );
		 
			
		 }

	   else if(choice == 1)
	   {   printf("\n");
		   printf("Goodbye! \n \n");
		   	   
	   }
   
	else if(choice == 2)
	   {
		   printf("\n");
		   printf("I love Git! \n \n");
		   	   
	   }
		else if(choice == -1)
		return 0;
		
		else
		   printf("\n Choice undefined. \n");
		   

    printf ( "Please choose: \n" );
    printf ( "\t 0  Display \"Hello world\" \n" );
    printf ( "\t 1  Display \"Goodbye!\" \n" );
    printf ( "\t 2  Display \"I love Git!\" \n" );
    printf ( "\t -1 Quit\n" ); 

    scanf ( "%d", &choice);
  } 

  return 0;

	   }

	


#include"headers.h"

int main()
{
	char ch;
	patient *head=NULL;

	load_data(&head);

	printf("Enter login details (only hospital management): ");
	password();
	
	while(1)
	{
		print_menu();
		printf("Enter choice: ");
		scanf(" %c",&ch);

		switch(ch)
		{
			case 'A':
			case 'a': book_an_app(&head);
				  break;
			case 'P':
			case 'p': print_details(&head);
				  break;
			case 'F':
			case 'f': search_details(&head);
				  break;
			case 'S':
			case 's': save_data(&head);
				  break;
			case 'M':
			case 'm': modify_details(&head);
				  break;
			case 'D':
			case 'd': delete_record(&head);
				  break;
			case 'E':
			case 'e': exit(0);
			default: 
				  printf("Invalid choice !\n");
				  break;
		}

	}
}

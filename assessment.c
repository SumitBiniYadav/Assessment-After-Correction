#include<stdio.h>
int main()
{
	int total=0;           //variable declared to calculate the sub total of order to show at the end !!!
	int in;                //variable declared to hold input of the menu !!!
	char moreOrder;        //variable declared to hold input of further order y/n !!! 
	
	//using do while loop to asking the input again if the user wants to order more !!!
	do {
		printf("\n-----------Menu---------------\n");
        printf("\n1. Pizza          price = 200rs/pcs");
        printf("\n2. Dosa           price = 120rs/pcs");
        printf("\n3. Burger         price = 60rs/pcs");
        printf("\n4. Idli           price = 40rs/pcs");
        printf("\n5. Pasta          price = 180rs/pcs");
        
        printf("\n Please Enter Your Choice : ");
        scanf("%d", &in);
        
        //using conditional statement ( Ladder IF ELSE Statement ) for multiple input's results !!!
        
        if(in == 1) 
		{
            int n;                                                          // Variable to store input of quantity !!!
            printf("You have selected Pizza");                              //Prints the choice !!!
            printf("\nEnter the quantity : ");  
            scanf("%d", &n);
            printf("\nYou ordered %d Pizza(s), Total: %d rs", n, n * 200);  // Shows ordered quantity and total amount !!!
            total += n * 200;                                               // Adds the cost to total !!!
        }
        else if(in == 2) 
		{
            int n;
            printf("You have selected Dosa");
            printf("\nEnter the quantity : ");
            scanf("%d", &n);
            printf("\nYou ordered %d Dosa(s), Total: %d rs", n, n * 120);
            total += n * 120;
        }
        else if(in == 3) 
		{
            int n;
            printf("You have selected Burger");
            printf("\nEnter the quantity : ");
            scanf("%d", &n);
            printf("\nYou ordered %d Burger(s), Total: %d rs", n, n * 60);
            total += n * 60;
        }
        else if(in == 4) 
		{
            int n;
            printf("You have selected Idli");
            printf("\nEnter the quantity : ");
            scanf("%d", &n);
            printf("\nYou ordered %d Idli(s), Total: %d rs", n, n * 40);
            total += n * 40;
        }
        else if(in == 5) 
		{
            int n;
            printf("You have selected Pasta");
            printf("\nEnter the quantity : ");
            scanf("%d", &n);
            printf("\nYou ordered %d Pasta(s), Total: %d rs", n, n * 180);
            total += n * 180;
        }
        else {
            printf("INVALID INPUT, TRY AGAIN !!!!");
        }

        // Asking if the user wants to order more
        printf("\nDo you want to order more? (y/n): ");
        scanf(" %c", &moreOrder);
	}
	while (moreOrder =='y');                            // if the input is y the loop runs again anything else will break the loop!!!
	
	printf("Your Final Bill is : %d", total);           //if the loop breaks the final bill will be printed using total variable !!!
	
	return 0;
	
}

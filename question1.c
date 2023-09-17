#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int amount;
	char billtype, company, choice = 'Y';
	float discount, amountbill = 0;
	
	printf ("\t\t\t\tWelcome to ABC SDN BHD");
	
	do {
			
	printf ("\n\nUtilities : U");
	printf ("\nInternet : I");
	
	printf ("\nPlease enter bill type : ");
	scanf (" %c", &billtype);
	
		if (billtype == 'U' || billtype== 'u') {
		printf ("\nTNB = T");
		printf ("\nSyabas = S");
		printf ("\nPlease choose company : ");
		scanf (" %c", &company);
		
				if (company == 'T' || company == 't') {
				printf ("\n\nDiscount : 5 percent");
				printf ("\nPlease enter amount : RM");
				scanf ("%d", &amount);
				amountbill = (amount-amount*0.05);
				printf ("Amount bill after discount : RM%.2f", amountbill);
				}
				else if (company == 'S' || company == 's') {
				printf ("\n\nDiscount : 10 percent");
				printf ("\nPlease enter amount : RM");
				scanf ("%d", &amount);
				amountbill = (amount-amount*0.10);
				printf ("Amount bill after discount : RM%.2f", amountbill);
				}
				else {
				printf ("Company is invalid.");
				}
		}
		else if (billtype == 'I' || billtype == 'i') {
		printf ("\nDigi = D");
		printf ("\nUnifi = W");
		printf ("\nMaxis Fibre = M");
		printf ("\nPlease choose company : ");
		scanf (" %c", &company);
		
				if (company == 'D' || company == 'd' || company == 'W' || company == 'w' || company == 'M' || company == 'm') {
				printf ("\n\nDiscount : 5 percent");
				printf ("\nPlease enter amount : RM");
				scanf ("%d", &amount);
				amountbill = (amount-amount*0.05);
				printf ("Amount bill after discount : RM%.2f", amountbill);
				}
				else {
				printf ("Company is invalid.");
				}
		}
		else {
		printf ("Not valid. Please enter again.");
		}
		
		printf ("\n\nContinue to other bill?");
		printf ("\nY for YES & N for NO >> ");
		scanf (" %c", &choice);
	}
	
	while (choice != 'N');	
 	printf ("\n\nThank you, please come again.");
 	
 	return 0;
}

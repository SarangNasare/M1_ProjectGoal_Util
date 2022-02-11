
#include"atm.h"

// show main menu
int Menu() {
 	int action;
    printf("\n Hello:)   Welcome to ATM Banking\n\n");
    printf(" Please choose one of the options below:-\n\n");
    printf("  1    Balance Enquiry\n\n");
    printf("  2    Deposit\n\n");
    printf("  3    Withdraw\n\n");
    printf("  4    Exit\n\n");
    scanf("%d",&action);
    return action;
}

//Show account Balance
float Balanceenquiry(float x){
	
	return x;
}

//Add the amount to the existing amount and display ammount
float Deposit(float x,int y){
	int z;
	z=x+y;
	return z;
	
}

//Subtract the amount withdrawn from the main balance and show balance
float Withdraw(float x,int y){
	if(y>x){
		return 0;
	}else{
	int z;
	z=x-y;
	return z;
	}
}

//exit from code
int Exit(){
	printf("\nThankyou for using ATM Services\n");
	printf("\nVisit Again\n");
	printf("\nPress Any Key to Exit\n");
    return 0;
}

//check the pin entered is correct or not if not the pass error
int EnterPin(int x){
	int pass=1234;
	if(x==pass){
		return 1;
	}else{
		return 0;
	}
}
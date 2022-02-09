#include <stdio.h>
#include <stdlib.h>

float Balance=25000;
int Menu();
float Balanceenquiry();
float Deposit(float,int);
float Withdraw(float,int);
int Exit();
int EnterPin(int);

int main(){
	int action,amount,pin,pass=1234;
	
	 action=Menu();
	 
	 switch(action){
	 
	 	case 1:
	 		system("CLS");
	 		printf("\nEnter Pin\n");
	 		scanf("%d",&pin);
	 		system("CLS");
	 		if(EnterPin(pin)==1){
			 
	 		printf("\nYour available Balance is %0.2f\n",Balanceenquiry());
	 		Exit();
	 		}
	 		else{
	 			printf("\nwrong pin\n");
	 			printf("\npress any key to Exit\n");
			 }
	 		break;
	 		
	 		
	 	case 2:
	 		system("CLS");
	 		printf("\nEnter Pin\n");
	 		scanf("%d",&pin);
	 		system("CLS");
	 		if(EnterPin(pin)==1){
	 			system("CLS");
	 			printf("\n Enter Amount you want to add\n\n");
	 			scanf("%d",&amount);
	 				if(amount%100!=0){
	 					system("CLS");
	 					printf("\nerror! please put amount divisible by 100 only\n");
				 	}else{
	 				system("CLS");
	 				printf("\nYour New Balance is %0.2f\n",Deposit(Balance,amount));
	 				Exit();
	 				}
	 		}else{
	 			printf("\nwrong pin\n");
	 			printf("\npress any key to Exit\n");
			 }
	 		break;
	 		
	 	case 3:
	 		system("CLS");
	 		printf("\nEnter Pin\n");
	 		scanf("%d",&pin);
	 		system("CLS");
	 		if(EnterPin(pin)==1){
	 			system("CLS");
	 			printf("\n Enter Amount you want to withdraw\n");
				scanf("%d",&amount);
				if(amount%100!=0){
						system("CLS");
	 					printf("\nerror! please put amount divisible by 100 only\n");
				}else{
					system("CLS");
					if(Withdraw(Balance,amount)==0){
						printf("\nerror\n");
						printf("\nYou Do Not Have Enough Balance\n");
						Exit();
				   }else{
						printf("\n Please collect your amount\n");
						printf("\nyour new Balance is %0.2f\n",Balance);
						Exit(); 
					}
				}
			}else{
				printf("\nwrong pin\n");
	 			printf("\npress any key to Exit\n");
			}
			break;
			
		case 4:
			system("CLS");
			
	 		Exit();
	 		break;	
	}
	 
	 return 0;
}

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

float Balanceenquiry(){
	
	return Balance;
}

float Deposit(float x,int y){
	Balance=x+y;
	return Balance;
	
}

float Withdraw(float x,int y){
	if(y>x){
		return 0;
	}else{
	
	Balance=x-y;
	return Balance;
	}
}

int Exit(){
	printf("\nThankyou for using ATM Services\n");
	printf("\nVisit Again\n");
	printf("\nPress Any Key to Exit\n");
    return 0;
}

int EnterPin(int x){
	int pass=1234;
	if(x==pass){
		return 1;
	}else{
		return 0;
	}
}
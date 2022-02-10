#include"atm.h"

int main(){
	int Balance=25000,action,amount,pin,pass=1234;
	
	 action=Menu();
	 
	 switch(action){
	 
	 	case 1:   //if user enters 1
	 		system("CLS");
	 		printf("\nEnter Pin\n");
	 		scanf("%d",&pin);
	 		system("CLS");
	 		if(EnterPin(pin)==1){
			 
	 		printf("\nYour available Balance is %0.2f\n",Balanceenquiry(Balance));
	 		Exit();
	 		}
	 		else{
	 			printf("\nwrong pin\n");
	 			printf("\npress any key to Exit\n");
			 }
	 		break;
	 		
	 		
	 	case 2:    //if user enters 2
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
	 		
	 	case 3:    //if user enters 3
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
						printf("\nyour new Balance is %0.2f\n",Withdraw(Balance,amount));
						Exit(); 
					}
				}
			}else{
				printf("\nwrong pin\n");
	 			printf("\npress any key to Exit\n");
			}
			break;
			
		case 4:   ////if user enters 4
			system("CLS");
			
	 		Exit();
	 		break;	

        default:
            system("CLS");
            printf("\nInvalid Operation\n");
            Exit();
            break;
	}
	 
	 return 0;
}

//header guard
#ifndef atm_h_
#define atm_h_


/**
 * @file atm.c
 * @author Sarang Nasare (sarang.nasare@gmail.com)
 * @brief Header files
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief shows menu conating the options like balance enquiry, withdraw, deposit and exit.
 * 
 * @return int 
 */
int Menu();
/**
 * @brief shows the account balance.
 * 
 * @return float 
 */
float Balanceenquiry(float);
/**
 * @brief adds the amount to the existing balance and shows the new balance. 
 * 
 * @return float 
 */
float Deposit(float,int);
/**
 * @brief this function cheaks the entered amount is ou have enough balance or not is yes then deducts from your balance.
 * 
 * @return float 
 */
float Withdraw(float,int);
/**
 * @brief exits the code.
 * 
 * @return int 
 */
int Exit();
/**
 * @brief cheaks if pin is right or not to do the balance enquiry,deposite and witdraw action.
 * 
 * @return int 
 */
int EnterPin(int);


#endif
# Description
 * ATM machine(Automatic Teller Machine) allows people to do banking transactions like cheak balance,withdraw money, without visiting the bank.
 * Create ATM (Automatic Teller Machine) miniproject using c language

# Folder Description
        | Folder Name | Description |
        |:------------:|:-----------:|
        | 0_Certificates | All the required certificates | 
        | 1_Requirments | Detailed document about high/low level requirments SWOT analysis and 5W&1H  |
        | 2_Architecture | Structural and flow diagrams of project |
        | 3_Implementation | Detailed coding including test,unity and makefile |
        | 4_TestPlanAndOutput | Includes tables about testcases |
        | 5_Report | Details about project |
        | 6_ImagesAndVideos | Images of working of project |
        | 7_Other | References |
  

# Requirments
## High Level Requirments

| --ID | Desciption | Status |
|:------------:|:-----------:|:---------:|
 | HLR1 | Main Menu | Implemented |
 | HLR2 | Balance Enquiry | Implemented |
 | HLR3 | Deposit | Implemented |
 | HLR4 | Withdraw | Implemented |
    
## Low Level Requirments
  | --ID | Desciption | Status |
  |:------------:|:-----------:|:---------:|
  | LLR1 | Easy Interface. | Implemented |
  | LLR2 | Taking,Reading and Cheaking proper input from user. | Implemented |
  | LLR3 | Doing proper task as per user requirment. | Implemented |
  | LLR4 | Should display the updated balance after the transaction. | Implemented |

# SWOT
 ## Strength
  * Very easy to use interface.
  * Quick process
  * Very Accurate.

 ## Weakness
 * Lack of graphical user interface.
 * If your pin is leaked it might damage your account.

 ## Opportunity
 * Since now a days people have very less time in their busy life this kind of machines are required.

 ## Threats
 * Better application can be developed or designed using various other technologies.

# 5W and 1H
 ## Who
  * Any persone who is in need of fast transaction.

 ## What
  * Automatic machine which can withdraw or deposit money easily.

 ## When
  * Available anytime.

 ## Where 
  * Can be available at various places according to need.

 ## How
  * Design and develope using c language to avoid complexity and to keep the machine simple for anyone to use.

# Architecture
    
## Design
 * Flowcharts
    ![flow diagram](https://user-images.githubusercontent.com/98864424/153283426-b7f6c14f-98c3-4195-bcd0-e64fa240b867.png)
 * Use case diagrams
    ![features](https://user-images.githubusercontent.com/98864424/153333487-4ba1cab3-24b7-4e85-984b-27bb2154e8c9.png)


# Test Plan  
## Table
| Test ID   | Description of Test case | Input values | Expected Output | Actual Output | Status |
|:-----:|:--------------------------:|:--------------:|:-----------------:|:---------------:|:---------:|
| R1  | Balance Enquiry | 25000 |25000| 25000|SUCCESS|
| R2  | Deposit | 25000,5000 | 30000 |30000|SUCCESS|
| R3  | Withdraw | 25000,5000 | 20000 | 20000 |SUCCESS|


# Project working
![project working](https://user-images.githubusercontent.com/98864424/153477162-b0e3f0fd-d513-4e3e-9992-61666a902aad.jpg)
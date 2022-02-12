# Test Plan  
## Table(unit testing)
| Test ID   | Description of Test case | Input values | Expected Output | Actual Output | Status ||Type of test |
|:-----:|:--------------------------:|:--------------:|:-----------------:|:---------------:|:---------:|:-------:|
| R1  | Balance Enquiry | 25000 |25000| 25000|SUCCESS| Unit Test|
| R2  | Deposit | 25000,5000 | 30000 |30000|SUCCESS| Unit Test|
| R3  | Withdraw | 25000,5000 | 20000 | 20000 |SUCCESS| Unit Test|


## Table(Manual Testing)
| Test ID   | Description of Test case | Input values | Expected Output | Actual Output | Status ||Type of test |
|:-----:|:--------------------------:|:--------------:|:-----------------:|:---------------:|:---------:|:-------:|
| R1  | Balance Enquiry | pin correct |Show balance| Balance shown |SUCCESS| Manual Test|
| R2  | Balance Enquiry | pin incorrect | error | error | SUCCESS | Manual Test|
| R3  | Deposit | pin correct | add amount and balance | Added | SUCCESS | Manual Test|
| R4  | Deposit | pin incorrect | error | error |SUCCESS| Manual Test|
| R5  | Withdraw | pin correct | subtract amount from balance | Subtracted | SUCCESS | Manual Test|
| R6  | Withdraw | pin incorrect | error | error |SUCCESS| Manual Test|
| R7  | Withdraw | pin correct | Amount more than Balance | error |SUCCESS| Manual Test|
#include<iostream>
using namespace std;

double Money;
double Balance = 10000;
int AccountNumber, AccountNumber_1 = 1111, AccountNumber_2 = 2222, AccountNumber_3 = 3333;
int PIN;
double AccountBalance = 10000;
int Option;
int Exit = 6;
string UserName, UserName_1 = "Jason", UserName_2 = "Lusia", UserName_3 = "Cal";
 
void menu()
{
   cout << " =================================================" << endl;
   cout << " ==========Hello! Welcome! TO BANKOUT :]========== " << endl;
   cout << " What banking service would you like to explore today? " << endl;
   cout << " ================================================= " << endl;
   
   cout << " Enter Username : " << endl;
   cin >> UserName;
   cout << " Enter Account Number : " << endl;
   cin >> AccountNumber;
   cout << " Enter Pin : " << endl;
   cin >> PIN;
   
 cout << " Enter 1 to Deposit " << endl;
 cout << " Enter 2 to Withdraw " << endl;
 cout << " Enter 3 to Transfer cash " << endl;
 cout << " Enter 4 To check account balance " << endl;
 cout << " Enter 5 For User Information " << endl;
 cout << " Enter 6 to EXIT" << endl;
 
 cin >> Option;
 switch(Option)
 {
   case 1:
     cout << " You to chosen the depositing option " << endl;
     cout << " How much will you deposit to your account? " << endl;
     cin >> Money;
     AccountBalance = AccountBalance + Money;
if(Money > 0);
  {
     cout << " You can deposit to your account " << endl;
  }
     cout << " The deposited money in your account : R " << Money << endl;
     cout << " R " << Money << " has been deposited to your account " << endl;
     cout << " AccountBalance : R " << AccountBalance << endl;
     break;
   case 2:
      cout << " You have chosen the withdrawal option " << endl;
      cout << " How much are you withdrawing from your account ? " <<endl;
      cin >> Money;
      Balance = Balance - Money;
if(Money < Balance);
  {
      cout << " Can not withdraw more then current Balance" << endl;
  }
      cout << " The amount you have withdrawn : R " << Money << endl;
      cout << " R " << Money << " has been withdrawn from your account " << endl;
      cout << " Balance amount : R " << Balance << endl;
      break;
   case 3:
      cout << " You have chosen to send cash " << endl;
      cout << " How much money are you sending ? " << endl;
      cin >> Money;
      cout << " Which account do you want to send the money to ? " << endl;
      cin >> AccountNumber;
if(AccountNumber = 1111)
  {
    cout << " You have entered : " << AccountNumber_1 << endl;
    cout << " You are sending to : " << UserName_1 << endl;
  }
else
if(AccountNumber = 2222) 
  {
    cout << " You have entered : " << AccountNumber_2 << endl;
    cout << " You are sending to : " << UserName_2 << endl;
  }
else
if(AccountNumber = 3333) 
  {
    cout << " You have entered : " << AccountNumber_3 << endl;
    cout << " You are sending to : " << UserName_3 << endl;
  } 
      Balance = Balance - Money;
      cout << " The cash you have transferred : R " << Money << " To the account " << endl;
      cout << " Balance amount : R " << Balance << endl;
      break;
   case 4:
      cout << " You have chosen to check your balance " << endl;
      cout << " Your current Balance : R " << Balance << endl;
      Balance = Balance;
      break;
   case 5:
      cout << " Here is your User information : " << endl;
       cout << " User Details : " << endl;
       cout << "_____________________________________" << endl;
       cout << " Username : " << UserName << endl;
       cout << " Account Number : " << AccountNumber_1 << endl;
       cout << " PIN : " << PIN << endl;
       cout << " Account Balance : " << AccountBalance << endl;
       cout << "_____________________________________" << endl;
      break;
   case 6:
      cout << " You have chosen " << Exit << " to Exit the banks system " << endl;
      cout << " Exiting service " << endl;
      cout << " Processing..........." << endl;
      cout << " Thank you for using our banking system please come again :> " << endl;
      break;
   default :
     cout << " Our bank does not offer that option please put the correct input " << endl;
     break;
  }    
} 
int main()
{
  do
  {
    menu();
  }
 while(Option = 0);
 return 0;
} 
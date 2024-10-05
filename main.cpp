#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int balance2, pin, pin2, option, balance, amount;
	
	cout<<"============================WELCOME TO ATM OF MEEZAN BANK==================="<<endl<<endl;
	cout<<"please enter your debit card to proceed"<<endl<<endl;
	//pin section
	cout<<"Enter your pin to coninue:\t"<<endl;
	cin>>pin;
	
	cout<<"Enter pin again to confirm:\t"<<endl;
	cin>>pin2;
	
	//main menu
	
	balance = 100000;
	
	((pin == pin2)? cout<<"WELCOME TO THE MAIN MENU:\n 1-- Deposit money. \n 2-- Withdraw money \n 3-- Balance Inquiry "<<endl:cout<<"Your entered pin is incorrect");
	((pin != pin2)? exit(0):void(0));
	
	// balance option
	cin>>option;
	
	((option == 3)? cout<<"your account current balance is: \t"<<balance<<endl:cout<<"not declared yet");
	
	// again main menu
	
	cout<<"For main menu, press 0";
	cin>>option;
	
	((option == 0)? cout<<"WELCOME TO THE MAIN MENU:\n 1-- Deposit money. \n 2-- Withdraw money \n 3-- Balance Inquiry "<<endl: cout<<"not declared yet" );
	
	//withdraw option
	
	cin>>option;
	
	((option == 2)? cout<<"Enter your amount to withdraw: \t":cout<<"Incorrect choice");
	cin>>amount;
	
	((amount <= balance)? cout<<"Do you want a Receipt \n 4) YES \n 5) NO"<<endl: cout<<"Not enough balance");
	
	cin>>option;
	
	balance2 = (balance)-(amount);
	
	((option == 4 || 5)? cout<<"Amount Withdrawn successfully. Your new balance is: \t"<<balance2<<endl :cout<<"THANKYOU FOR CHOOSING MEEZAN. PLEASE COME AGAIN");
	
	cout<<"For Main Menu, press 0"<<endl;
	cin>>option;
	
	((option == 0)? cout<<"1-- Deposit money.\n2-- Withdraw money\n3-- Balance Inquiry"<<endl : cout<<"not declared");
	
	cin>>option;
	
	((option == 1)? cout<<"Enter your amount to deposit"<<endl : cout<<"not declared");
	
	cin>>amount;
	
	amount += balance2;
	
	cout<<"Amount deposited successfullly. your new balance is :\t"<< amount<<endl;
	
	cin>>option;
	
	char ch;
	cin.get(ch);
//	cin.get(ch);
	
	return 0;
}

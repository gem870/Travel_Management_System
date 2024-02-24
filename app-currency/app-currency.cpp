

#include <iostream>
#include <string>
using namespace std;




string shotDash_R = "<<---",
shotDash_L = "--->>",
longDash_L = "------------------>>>>>>>>",
longDash_R = "<<<<<<<<------------------";




void welcomeScreen(),
 option(),
 menu();

int main()
{
	int number,
	 cashAmount,
	 currentAmount;
	bool done = false;
	string shotDash_R = "<<---", 
		   shotDash_L = "--->>";

	while (!done) {
		welcomeScreen();
		cin >> number;
		system("cls");
		if (number != 1 && number != 2)
		{
			cout << endl;
			cout << shotDash_L << " Invalid operation..! " << shotDash_R << endl;
			option();
			cin >> number;
			system("cls");
			cout << endl;
			cout <<"     " << shotDash_L << " Invalid operation..! " << shotDash_R << endl;
			cout << "************ For the last time ************" << endl;
			option();
			cin >> number;
			if (number != 1 && number != 2 && number != 3 && number != 4) {
				cout << endl;
				cout << shotDash_L << " You have been disconnected..! try again.! " << shotDash_R << endl;
				done = true;
			}
		}
		if (number == 1) {
			system("cls");
			menu();
			cin >> number;
            
			if (number != 1 && number != 2 && number != 3 && number != 4) {
				int counter = 1;
				system("cls");
				cout << endl;
				cout << endl;
				cout << shotDash_L << " Invalid operation.! " << endl;
				cout << endl << endl;
				cout << shotDash_L << "  " << counter << "  attemt.!" << endl;
				cout << endl;
				cout << shotDash_L << " Choose any of the option ( '1' '2' '3' '4'): " << endl;
				menu();
				cin >> number;
				counter++;
				system("cls");

				cout << endl;
				cout << endl;
				cout << shotDash_L << " Invalid operation.! " << endl;
				cout << endl << endl;
				cout << shotDash_L << "  " << counter << "  attemt.!" << endl;
				cout << endl;
				cout << shotDash_L << " Choose any of the option ( '1' '2' '3' '4'): " << endl;
				menu();
				cin >> number;
				counter++;
				system("cls");
			}
			
			if (number == 1) {
				cout << endl;
				cout << shotDash_L << " To check for Dollar: " << endl << endl;
				cout << "=====| Dollar rate: 10.00 " << endl;
				cout << endl;
				cout << shotDash_L << " Enter the amount: ";
				cin >> cashAmount;
				cout << endl;
				cout << ">> Privous amount: " << cashAmount << endl;
				currentAmount = cashAmount *= 10;
				cout << ">> Current amount is : $" << currentAmount << endl;
				option();
				cin >> number;
				system("cls");
			}
			if (number == 2) {
				cout << endl;
				cout << shotDash_L << " To check for Pounds: " << endl << endl;
				cout << "=====| Dollar rate: 12.00 " << endl;
				cout << endl;
				cout << shotDash_L << " Enter the amount: ";
				cin >> cashAmount;
				cout << endl;
				cout << ">> Privous amount: " << cashAmount << endl;
				currentAmount = cashAmount *= 12;
				cout << ">> Current amount is : &" << currentAmount << endl;
				option();
				cin >> number;
				system("cls");
			}
			if (number == 3) {
				cout << endl;
				cout << shotDash_L << " To check for Naira: " << endl << endl;
				cout << "=====| Naira rate: -20.00 " << endl;
				cout << endl;
				cout << shotDash_L << " Enter the amount: ";
				cin >> cashAmount;
				cout << endl;
				cout << ">> Privous amount: " << cashAmount << endl;
				currentAmount = cashAmount -= 20;
				cout << ">> Current amount is : N" << currentAmount << endl;
				option();
				cin >> number;
				system("cls");
			}
			if (number == 4) {
				cout << endl;
				cout << shotDash_L << " To check for  Gana sedies: " << endl << endl;
				cout << "=====| Gana sedies rate: -10.00 " << endl;
				cout << endl;
				cout << shotDash_L << " Enter the amount: ";
				cin >> cashAmount;
				cout << endl;
				cout << ">> Privous amount: " << cashAmount << endl;
				currentAmount = cashAmount -= 10;
				cout << ">> Current amount is : #" << currentAmount << endl;
				option();
				cin >> number;
				system("cls");
			}
		}
		else
		
		if (number == 2) {
			cout << endl;
			cout << "===============================================================================||" << endl;
			cout << endl;
			cout << shotDash_L << " Thank you for performing the operation..! " << shotDash_R << endl;
			cout << endl;
			cout << "===============================================================================||" << endl;
			cout << endl;
			done = true;
		}
	}

	return 0;
}


//           my fuctions <<<<------------------

void menu() {
	cout << endl;
	cout << longDash_L << " MENU " << longDash_R << endl;
	cout << "please choose number of currency to be convrted to:" << shotDash_R << endl;
	cout << "  " << shotDash_L << "   Dollar        < 1." << endl;
	cout << "  " << shotDash_L << "   Pounds        < 2." << endl;
	cout << "  " << shotDash_L << "   Naira         < 3." << endl;
	cout << "  " << shotDash_L << "   Ganna sedies  < 4." << endl;
	cout << endl;
	cout << "   >> Please enter number of currency: ";
}

void welcomeScreen() {	
	cout << endl;
	cout << longDash_L << " CURRENCY CONVERTER " << longDash_R << endl;
	cout << "          " << shotDash_L << " Welcome to our currency exchange center..! " << shotDash_R << endl << endl;
	cout << shotDash_L << " To continue press                < 1." << endl;
	cout << shotDash_L << " To stop the converter press      < 2." << endl;
	cout << endl;
	cout << "   >> Please enter number: ";
}

void option() {
	cout << endl;
	cout << shotDash_L << " To go back press any number     <<" << endl;
	cout << endl;
	cout << "   >> Please enter number: ";
}

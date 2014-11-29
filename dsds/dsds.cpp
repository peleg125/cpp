// BankHapaalim.cpp : Defines the entry point for the console application.

//

#include "stdafx.h"
#include <string>
#include <Windows.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

class CCustomer
{
	public:
		int			ID;
		string      Name;
		double		Cash;

};

CCustomer CustomerList[13];
int iCustomerLastIndex = 0;

void AddCustomer()
{	
	printf("Your name:\n");
	string sName;
	cin >> sName;

	printf("Please insert money:\n");
	double dStartCash = 0;
	cin >> dStartCash;
	
	CustomerList[iCustomerLastIndex].ID   = iCustomerLastIndex + 1;
	CustomerList[iCustomerLastIndex].Name = sName;
	CustomerList[iCustomerLastIndex].Cash = dStartCash;
	
	printf("registration completed, ID=%d, Name=%s, Cash=%.2f\n", 
		CustomerList[iCustomerLastIndex].ID, CustomerList[iCustomerLastIndex].Name.c_str(), CustomerList[iCustomerLastIndex].Cash);
		iCustomerLastIndex++;
	system("pause");
}

void AddCash()
{
	printf("Your id:\n");		
	int nID = 0;
	cin >> nID;

	printf("Enter your amount you would like to give:\n");
	double nCash = 0;
	cin >> nCash;

	CustomerList[nID - 1].Cash = CustomerList[nID - 1].Cash + nCash;
	printf("Your sum is %.2f",CustomerList[nID - 1].Cash);
	system("pause");

}

void GetCash()
{
	printf("Your id:\n");		
	int nID = 0;
	std::cin >> nID;

	printf("Enter the amout you would like to recive:\n");		
	double nCash = 0;
	std::cin >> nCash;
		if (nCash < CustomerList[nID - 1].Cash)
	{
	CustomerList[nID - 1].Cash = CustomerList[nID - 1].Cash - nCash;
	printf("Your cash is %.2f",CustomerList[nID - 1].Cash);
	}
		else
		{
		printf("Requst denied");
		}
	system("pause");
}

void ShowCustomer()
{
	printf("Your id:\n");
	int nID = 0;
	cin >> nID;

	CustomerList[nID - 1].Name;
	CustomerList[nID - 1].Cash;
	printf("Your name is %s\n", CustomerList[nID - 1].Name.c_str());
	printf("you have %.2f in Your Account\n", CustomerList[nID - 1].Cash);
	system("pause");
}

void ShowAllCustomers()
{
	printf("please enter your password");
	int password;
	cin >> password;
	if (password == 1234)
	{
	CustomerList[13].Name;
		printf("The first customer is %s\n",CustomerList[0].Name.c_str());
		printf("cash = %.2f\n",CustomerList[0].Cash );
		printf("----------------------------------------------------------\n");
		printf("The second customer is %s\n",CustomerList[1].Name.c_str());
		printf("cash = %.2f\n",CustomerList[1].Cash );
		printf("----------------------------------------------------------\n");
		printf("The third customer is %s\n",CustomerList[2].Name.c_str());
		printf("cash = %.2f\n",CustomerList[2].Cash );
		printf("----------------------------------------------------------\n");
		printf("The fourth customer is %s\n",CustomerList[3].Name.c_str());
		printf("cash = %.2f\n",CustomerList[3].Cash );
		printf("----------------------------------------------------------\n");
		printf("The fifth customer is %s\n",CustomerList[4].Name.c_str());
		printf("cash = %.2f\n",CustomerList[4].Cash );
		printf("----------------------------------------------------------\n");
		printf("The sixth customer is %s\n",CustomerList[5].Name.c_str());
		printf("cash = %.2f\n",CustomerList[5].Cash );
		printf("----------------------------------------------------------\n");
		printf("The seventh customer is %s\n",CustomerList[6].Name.c_str());
		printf("cash = %.2f\n",CustomerList[6].Cash );
		printf("----------------------------------------------------------\n");
		printf("The eightn customer is %s\n",CustomerList[7].Name.c_str());
		printf("cash = %.2f\n",CustomerList[7].Cash );
		printf("----------------------------------------------------------\n");
		printf("The ninth customer is %s\n",CustomerList[8].Name.c_str());
		printf("cash = %.2f\n",CustomerList[8].Cash );
		printf("----------------------------------------------------------\n");
		printf("The tenth customer is %s\n",CustomerList[9].Name.c_str());
		printf("cash = %.2f\n",CustomerList[9].Cash );
		printf("----------------------------------------------------------\n");
		printf("The eleventh customer is %s\n",CustomerList[10].Name.c_str());
		printf("cash = %.2f\n",CustomerList[10].Cash );
		printf("----------------------------------------------------------\n");
		printf("The twelfth customer is %s\n",CustomerList[11].Name.c_str());
		printf("cash = %.2f\n",CustomerList[11].Cash );
		printf("----------------------------------------------------------\n");
	system ("pause");
	}
	else{
	printf("Wrong password");
	system("pause");
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	printf("Wellcome to our bank !!!\n");
	int ID = 0;
	double CurrentCash = 0;
	double RequestCash = 0;
	int iChoice = 999;
	bool bWork_24_7 = true;
	while(bWork_24_7)
	{
		system("cls"); 
		printf("Bank Menu\n");
		printf("Press 1 - Add Customer\n");
		printf("Press 2 - Insert Cash\n");
		printf("Press 3 - Get Cash\n");
		printf("Press 4 - Show Customer\n");
		printf("Press 5 - Show All Customers\n");

		printf("Press your choice: ");

		Sleep(100);
		
		cin >> iChoice;
		if (iChoice == 1)
		{
			AddCustomer();
		}

		else if (iChoice == 2)
		{
			AddCash();
		}

		else if (iChoice == 3)
		{
			GetCash();
		}

		else if (iChoice == 4)
		{
			ShowCustomer();
		}

		else if (iChoice == 5)
		{
			ShowAllCustomers();
		}

		else if (iChoice == 0)
		{
			printf("Bank Closed\n");
			bWork_24_7 = false;
			system("pause");
		}
	}

	return 0;
}
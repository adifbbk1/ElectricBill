// Bill.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<conio.h>

void main()
{
	int ebno, pr, cr, units;
	float amt;
	char cname[20], addr[30];
	cout << "\t\t\tELECTRICITY BILL\n\n";
	cout << "Enter the EB number of the Customer\n";
	cin >> ebno;
	cout << "Enter the customer name\n";
	cin >> cname;
	cout << "Enter the address of the customer\n";
	cin >> addr;
	cout << "Enter the previous reading\n";
	cin >> pr;
	cout << "Enter the current reading\n";
	cin >> cr;
	units = cr - pr;
	if (units <= 100)
	{
		amt = units * 1;
		goto out;
	}
	else if ((units>100) && (units <= 200))
	{
		amt = (units - 100)*2.50 + 100 * 1;
		goto out;
	}
	else
	{
		amt = (units - 200) * 5 + 200 * 2.50 + 100 * 1;
		goto out;
	}
out:
	cout << "\t\tYour current month bill\n";
	cout << "\nCustomer's EB number: " << ebno << "\n";
	cout << "\nCustomer's name:" << cname << "\n";
	cout << "\nCustomer's address: " << addr << "\n";
	cout << "\nPrevious reading: " << pr << "\n";
	cout << "\nCurrent reading: " << cr << "\n";
	cout << "\nNumber of units: " << units << "\n";
	cout << "\nAmount: Rs." << amt;
}
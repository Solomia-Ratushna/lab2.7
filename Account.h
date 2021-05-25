//Account.h
#pragma once

#include "Money.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Account
{
private:
	Money money;
	int no;
	string name;
	double percent;
public:
	Money GetMoney() const { return money; }
	int GetNo() const { return no; }
	string GetName() const { return name; }
	double GetPercent() const { return percent; }

	void SetName(string value) { name = value; }
	void SetMoney(Money value);
	bool SetNo(int value);
	bool SetPercent(double value);

	Account();
	Account(int, string, Money, double);
	Account(const Account&);

	Account& operator = (const Account&);
	operator string () const;

	friend ostream& operator << (ostream& out, const Account& s);
	friend istream& operator >> (istream& in, Account& s);

	Account& operator ++ ();
	Account& operator -- ();
	Account operator ++ (int);
	Account operator -- (int);

	double Withdraw();
	double Put();
	void Perc() { cout << "Summa + Percent = " << Put() + (((money.get_sum() / 100) * percent)) << endl; }
	void toDollar() { cout << "Summa in dollar = " << money.get_sum() * 0.036 << endl; }
	void toEuro() { cout << "Summa in euro = " << money.get_sum() * 0.03 << endl; }
	const char* SumToNumeral();
};


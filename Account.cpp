//Account.cpp
#include "Account.h"

void Account::SetMoney(Money value)
{
	money.Set_1000(value.Get_1000());
	money.Set_500(value.Get_500());
	money.Set_200(value.Get_200());
	money.Set_100(value.Get_100());
	money.Set_50(value.Get_50());
	money.Set_20(value.Get_20());
	money.Set_10(value.Get_10());
	money.Set_5(value.Get_5());
	money.Set_2(value.Get_2());
	money.Set_1(value.Get_1());
	money.Set_050(value.Get_050());
	money.Set_025(value.Get_025());
	money.Set_010(value.Get_010());
	money.Set_005(value.Get_005());
	money.Set_002(value.Get_002());
	money.Set_001(value.Get_001());
}
bool Account::SetNo(int value)
{
	if (value > 0)
	{
		no = value;
		return true;
	}
	else
	{
		no = 0;
		return false;
	}
}

bool Account::SetPercent(double value)
{
	if (value > 0)
	{
		percent = value;
		return true;
	}
	else
	{
		percent = -value;
		return false;
	}

}
Account::Account()
	:no(0), name("A"), percent(0)
{}

Account::Account(int no, string name, Money money, double percent)
{
	SetName(name);
	SetMoney(money);
	SetNo(no);
	SetPercent(percent);
}
Account::Account(const Account& a)
{
	*this = a;
}

Account& Account::operator = (const Account& a)
{
	money = a.money;
	no = a.no;
	name = a.name;
	percent = a.percent;
	return *this;
}
Account::operator string () const
{
	stringstream sout;
	sout << " no    = " << no << endl;
	sout << " name  = " << name << endl;
	sout << " summa = " << GetMoney().get_sum() << endl;
	sout << " percent = " << percent << endl;

	return sout.str();
}

ostream& operator << (ostream& out, const Account& s)
{
	cout << string(s) << endl;
	return out;
}
istream& operator >> (istream& in, Account& s)
{
	cout << " no      = ? "; in >> s.no;
	cout << " name  = ? ";   in >> s.name;
	cout << " summa   = ? "; in >> s.money;
	cout << " percent = ? "; in >> s.percent;

	return in;
}

Account& Account::operator ++ ()
{
	++no;
	return *this;
}
Account& Account::operator -- ()
{
	--no;
	return *this;
}
Account Account::operator ++ (int)
{
	Account a = *this;
	percent++;
	return a;
}
Account Account::operator -- (int)
{
	Account a = *this;
	percent--;
	return a;
}

double Account::Withdraw()
{
	double sub;
	double withdraw;
	cout << "—ума ст€гу: "; cin >> sub;
	withdraw = money.get_sum() - sub;
	return withdraw;
}
double Account::Put()
{
	double add;
	double put;
	cout << "—ума начисленн€: "; cin >> add;
	put = money.get_sum() + add;
	return put;
}
const char* Account::SumToNumeral()
{
	const char* _centuries[11] = { "",
"сто",
"дв≥ст≥",
"триста",
"чотириста",
"п'€тсот",
"ш≥стсот",
"с≥мсот",
"в≥с≥мсот",
"дев'€тсот",
"тис€ча або б≥льше" };
	const char* _decades[10] = { "",
	"",
	"двадц€ть",
	"тридц€ть",
	"сорок",
	"п'€тдес€т",
	"ш≥стдес€т",
	"с≥мдес€т",
	"в≥с≥мдес€т",
	"дев'€носто" };
	const char* _digits[20] = { "",
	"один",
	"два",
	"три",
	"чотири",
	"п'€ть",
	"ш≥сть",
	"с≥м",
	"в≥с≥м",
	"дев'€ть",
	"дес€ть",
	"одинадц€ть",
	"дванадц€ть",
	"тринадц€ть",
	"чотирнадц€ть", "п'€тнадц€ть",
	"ш≥стнаднадц€ть",
	"с≥мнадц€ть",
	"в≥с≥мнадц€ть", "дев'€тнадц€ть" };

	if (money.get_sum() >= 1000)
		return _centuries[10];

	int sum = floor(money.get_sum());
	int cen = sum / 100;
	sum = sum % 100;
	int dec = sum / 10;
	int dig;
	if (dec == 0 || dec == 1)
		dig = sum % 20;
	else
		dig = sum % 10;

	int fractional = (money.get_sum() - floor(money.get_sum())) * pow(10, 2);
	int sumFrac = fractional;
	sumFrac = sumFrac % 100;
	int decFrac = sumFrac / 10;
	int digFrac;
	if (decFrac == 0 || decFrac == 1)
		digFrac = sumFrac % 20;
	else
		digFrac = sumFrac % 10;

	char s[100] = "";
	strcat_s(s, _centuries[cen]);
	strcat_s(s, " ");
	strcat_s(s, _decades[dec]);
	strcat_s(s, " ");
	strcat_s(s, _digits[dig]);
	strcat_s(s, " грн.");
	strcat_s(s, " ");
	strcat_s(s, _decades[decFrac]);
	strcat_s(s, " ");
	strcat_s(s, _digits[digFrac]);
	strcat_s(s, " коп.");
	return s;
}


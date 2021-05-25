//Money.cpp
#include "Money.h"
#include <iostream>
#include <iomanip>
#include <sstream>

void Money::Set_1000(int value)
{
    if (value > 0)
        _1000 = value;
    else
        _1000 = 0;
}

void Money::Set_500(int value)
{
    if (value > 0)
        _500 = value;
    else
        _500 = 0;
}

void Money::Set_200(int value)
{
    if (value > 0)
        _200 = value;
    else
        _200 = 0;
}

void Money::Set_100(int value)
{
    if (value > 0)
        _100 = value;
    else
        _100 = 0;
}

void Money::Set_50(int value)
{
    if (value > 0)
        _50 = value;
    else
        _50 = 0;
}

void Money::Set_20(int value)
{
    if (value > 0)
        _20 = value;
    else
        _20 = 0;
}

void Money::Set_10(int value)
{
    if (value > 0)
        _10 = value;
    else
        _10 = 0;
}

void Money::Set_5(int value)
{
    if (value > 0)
        _5 = value;
    else
        _5 = 0;
}

void Money::Set_2(int value)
{
    if (value > 0)
        _2 = value;
    else
        _2 = 0;
}

void Money::Set_1(int value)
{
    if (value > 0)
        _1 = value;
    else
        _1 = 0;
}

void Money::Set_050(int value)
{
    if (value > 0)
        _050 = value;
    else
        _050 = 0;
}

void Money::Set_025(int value)
{
    if (value > 0)
        _025 = value;
    else
        _025 = 0;
}

void Money::Set_010(int value)
{
    if (value > 0)
        _010 = value;
    else
        _010 = 0;
}

void Money::Set_005(int value)
{
    if (value > 0)
        _005 = value;
    else
        _005 = 0;
}

void Money::Set_002(int value)
{
    if (value > 0)
        _002 = value;
    else
        _002 = 0;
}

void Money::Set_001(int value)
{
    if (value > 0)
        _001 = value;
    else
        _001 = 0;
}
Money::Money()
    :_1000(0), _500(0), _200(0), _100(0), _50(0), _20(0), _10(0), _5(0), _2(0), _1(0), _050(0), _025(0), _010(0), _005(0), _002(0), _001(0)
{}
Money::Money(int _1000, int _500, int _200, int _100, int _50, int _20, int _10, int _5, int _2, int _1, int _050, int _025, int _010, int _005, int _002, int _001)
{
    Set_1000(_1000);
    Set_500(_500);
    Set_200(_200);
    Set_100(_100);
    Set_50(_50);
    Set_20(_20);
    Set_10(_10);
    Set_5(_5);
    Set_2(_2);
    Set_1(_1);
    Set_050(_050);
    Set_025(_025);
    Set_010(_010);
    Set_005(_005);
    Set_002(_002);
    Set_001(_001);
}
Money::Money(double x)
{
    _1000 = 0;
    _500 = 0;
    _200 = 0;
    _100 = 0;
    _50 = 0;
    _20 = 0;
    _10 = 0;
    _5 = 0;
    _2 = 0;
    _1 = 0;
    _050 = 0;
    _025 = 0;
    _010 = 0;
    _005 = 0;
    _002 = 0;
    _001 = 0;
    _1000 = (int)(x / 1000.);
    x = x - _1000 * 1000.;
    _500 = (int)(x / 500.);
    x = x - _500 * 500.;
    _200 = (int)(x / 200.);
    x = x - _200 * 200.;
    _100 = (int)(x / 100.);
    x = x - _100 * 100.;
    _50 = (int)(x / 50.);
    x = x - _50 * 500.;
    _20 = (int)(x / 20.);
    x = x - _20 * 200.;
    _10 = (int)(x / 10.);
    x = x - _10 * 10.;
    _5 = (int)(x / 5.);
    x = x - _5 * 5.;
    _2 = (int)(x / 2.);
    x = x - _2 * 2.;
    _1 = (int)(x / 1.);
    x = x - _1 * 1.;
    _050 = (int)(x / 0.50);
    x = x - _050 * 0.50;
    _025 = (int)(x / 0.25);
    x = x - _025 * 0.25;
    _010 = (int)(x / 0.10);
    x = x - _010 * 0.10;
    _005 = (int)(x / 0.05);
    x = x - _005 * 0.05;
    _002 = (int)(x / 0.02);
    x = x - _002 * 0.02;
    _001 = (int)(x / 0.01);
    x = x - _001 * 0.01;

}
Money::Money(const Money& a)
{
    *this = a;
}
double Money::get_sum() const
{
    return (_1000 * 1000. + _500 * 500. + _200 * 200. + _100 * 100. + _50 * 50. +
        _20 * 20. + _10 * 10. + _5 * 5. + _2 * 2. + _1 * 1. + _050 * 0.50 + _025 * 0.25 + _010 * 0.10 +
        _005 * 0.05 + _002 * 0.02 + _001 * 0.01);
}
Money& Money::operator = (const Money& a)
{
    _1000 = a._1000;
    _500 = a._500;
    _200 = a._200;
    _100 = a._100;
    _50 = a._50;
    _20 = a._20;
    _10 = a._10;
    _5 = a._5;
    _2 = a._2;
    _1 = a._1;
    _050 = a._050;
    _025 = a._025;
    _010 = a._010;
    _005 = a._005;
    _002 = a._002;
    _001 = a._001;

    return *this;
}

Money::operator string () const
{
    stringstream sout;
    sout << "\nСума" << endl;
    sout << " 1000 - " << _1000 * 1000. << endl;
    sout << " 500 - " << _500 * 500. << endl;
    sout << " 200 - " << _200 * 200. << endl;
    sout << " 100 - " << _100 * 100. << endl;
    sout << " 50 - " << _50 * 50. << endl;
    sout << " 20 - " << _20 * 20. << endl;
    sout << " 10 - " << _10 * 10. << endl;
    sout << " 5 - " << _5 * 5. << endl;
    sout << " 2 - " << _2 * 2. << endl;
    sout << " 1 - " << _1 * 1. << endl;
    sout << " 0.50 - " << _050 * 0.5 << endl;
    sout << " 0.25 - " << _025 * 0.25 << endl;
    sout << " 0.10 - " << _010 * 0.10 << endl;
    sout << " 0.05 - " << _005 * 0.05 << endl;
    sout << " 0.02 - " << _002 * 0.02 << endl;
    sout << " 0.01 - " << _001 * 0.01 << endl;
    sout << " Загалом - " << get_sum() << endl;
    sout << endl;

    return sout.str();
}
Money& Money::operator ++ ()
{
    ++_1000;
    return *this;
}
Money& Money::operator -- ()
{
    --_1000;
    return *this;
}
Money  Money::operator ++ (int)
{
    Money a = *this;
    _500++;
    return a;
}
Money  Money::operator -- (int)
{
    Money a = *this;
    _500--;
    return a;
}
ostream& operator << (ostream& out, const Money& p)
{
    out << string(p) << endl;
    return out;
}
istream& operator >> (istream& in, Money& p)
{
    cout << "\nСума" << endl;
    cout << " 1000 - ? "; in >> p._1000;
    cout << " 500 - ? "; in >> p._500;
    cout << " 200 - ? "; in >> p._200;
    cout << " 100 - ? "; in >> p._100;
    cout << " 50 - ? "; in >> p._50;
    cout << " 20 - ? "; in >> p._20;
    cout << " 10 - ? "; in >> p._10;
    cout << " 5 - ? "; in >> p._5;
    cout << " 2 - ? "; in >> p._2;
    cout << " 1 - ? "; in >> p._1;
    cout << " 0.50 - ? "; in >> p._050;
    cout << " 0.25 - ? "; in >> p._025;
    cout << " 0.10 - ? "; in >> p._010;
    cout << " 0.05 - ? "; in >> p._005;
    cout << " 0.02 - ? "; in >> p._002;
    cout << " 0.01 - ? "; in >> p._001;
    cout << endl;

    return in;

}

bool operator <(Money& a, Money& b)
{
    Money x;
    return a.get_sum() < b.get_sum();
}
bool operator == (Money& a, Money& b)
{
    Money x;
    return a.get_sum() == b.get_sum();
}
bool operator > (Money& a, Money& b)
{
    Money x;
    return a.get_sum() > b.get_sum();
}
bool operator <=(Money& a, Money& b)
{
    Money x;
    return a.get_sum() <= b.get_sum();
}
bool operator >= (Money& a, Money& b)
{
    Money x;
    return a.get_sum() >= b.get_sum();
}
bool operator != (Money& a, Money& b)
{
    Money x;
    return a.get_sum() != b.get_sum();
}
Money operator +(const Money& a, const Money& b)
{
    Money x;
    x._1000 = a._1000 + b._1000;
    x._500 = a._500 + b._500;
    x._200 = a._200 + b._200;
    x._100 = a._100 + b._100;
    x._50 = a._50 + b._50;
    x._20 = a._20 + b._20;
    x._10 = a._10 + b._10;
    x._5 = a._5 + b._5;
    x._2 = a._2 + b._2;
    x._1 = a._1 + b._1;
    x._050 = a._050 + b._050;
    x._025 = a._025 + b._025;
    x._010 = a._010 + b._010;
    x._005 = a._005 + b._005;
    x._002 = a._002 + b._002;
    x._001 = a._001 + b._001;

    return x;
}
Money operator -(const Money& a, const Money& b)
{
    Money x;
    x._1000 = a._1000 - b._1000;
    x._500 = a._500 - b._500;
    x._200 = a._200 - b._200;
    x._100 = a._100 - b._100;
    x._50 = a._50 - b._50;
    x._20 = a._20 - b._20;
    x._10 = a._10 - b._10;
    x._5 = a._5 - b._5;
    x._2 = a._2 - b._2;
    x._1 = a._1 - b._1;
    x._050 = a._050 - b._050;
    x._025 = a._025 - b._025;
    x._010 = a._010 - b._010;
    x._005 = a._005 - b._005;
    x._002 = a._002 - b._002;
    x._001 = a._001 - b._001;
    return x;
}
double operator /(const  Money& a, const  Money& b)
{
    if (a.get_sum() >= b.get_sum())
    {
        return a.get_sum() / b.get_sum();
    }
    if (a.get_sum() < b.get_sum())
    {
        return b.get_sum() / a.get_sum();
    }
}

Money DivisionToFractionsNumber(const Money& a, double div)
{
    double sum = a.get_sum();
    double res = sum / div;
    Money x(res);

    return x;
}
Money MultToFractionsNumber(const Money& a, double mult)
{
    double sum = a.get_sum();
    double res = sum * mult;
    Money x(res);

    return x;
}



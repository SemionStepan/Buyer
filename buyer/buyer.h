#ifndef BUYER_H
#define BUYER_H

#include <iostream>

using namespace std;

class Buyer
{
    string _lastName;
    string _firstName;
    string _fatherName;
    string _adress;
    double _creditCardNumber;
    double _bankAccountNumber;
public:
    Buyer(string lastName, string firstName, string adress, double creditCardNumber, double bankAccountNumber);


};
#endif // BUYER_H

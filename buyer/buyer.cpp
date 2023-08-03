#include "buyer.h"

Buyer::Buyer(string lastName, string firstName, string fatherName, string address, double creditCardNumber, double bankAccountNumber)
{
    _lastName = lastName;
    _firstName = firstName;
    _fatherName = fatherName;
    _address = address;
    _creditCardNumber = creditCardNumber;
    _bankAccountNumber = bankAccountNumber;
}

void Buyer::out()
{
    cout << _lastName << endl;
    cout << _firstName << endl;
    cout << _fatherName << endl;
    cout << _address << endl;
    cout << _creditCardNumber << endl;
    cout << _bankAccountNumber << endl;
}

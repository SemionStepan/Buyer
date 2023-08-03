#ifndef BUYER_H
#define BUYER_H

#include <iostream>

using namespace std;

class Buyer
{
    string _lastName;
    string _firstName;
    string _fatherName;
    string _address;
    double _creditCardNumber;
    double _bankAccountNumber;
public:
    Buyer(string lastName, string firstName, string fatherName, string address, double creditCardNumber, double bankAccountNumber);

    inline string getLastName() const { return _lastName; }
    inline string getFirstName() const { return _firstName; }
    inline string getFatherName() const { return _fatherName; }
    inline string getAddress() const { return _address; }
    inline double getCreditCardNumber() const { return _creditCardNumber; }
    inline double getBankAccountNumber() const { return _bankAccountNumber; }

    inline void setLastName(string lastName) { _lastName = lastName; }
    inline void setFirstName(string firstName) { _firstName = firstName; }
    inline void setFatherName(string fatherName) { _fatherName = fatherName; }
    inline void setAddress(string address) { _address = address; }
    inline void setCreditCardNumber(double creditCardNumber) { _creditCardNumber = creditCardNumber; }
    inline void setBankAccountNumber(double bankAccountNumber) { _bankAccountNumber = bankAccountNumber; }

    void out();
};


#endif // BUYER_H

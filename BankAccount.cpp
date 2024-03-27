#include <iostream>
#include <vector>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount(string accountHolder, int accountNumber)
{
    this->accountHolder = accountHolder;
    this->accountNumber = accountNumber;
}

void BankAccount::deposit(float amount)
{
    this->accountingEntries.push_back(amount);
}

void BankAccount::withdraw(float amount)
{
    this->accountingEntries.push_back(-amount);
}

float BankAccount::calcBalance()
{
    float sum = 0;

    for(int i = 0; i < this->accountingEntries.size(); i++)
    {
        sum+=accountingEntries.at(i);
    }

    return sum;
}

void BankAccount::transfer(float amount, BankAccount &other)
{
    this->accountingEntries.push_back(-amount);
    other.accountingEntries.push_back(amount);
}

string BankAccount::getAccountHolder()
{
    return this->accountHolder;
}

void BankAccount::setAccountHolder(string accountHolder)
{
    this->accountHolder = accountHolder;
}

int BankAccount::getAccountNumber()
{
    return this->accountNumber;
}

void BankAccount::setAccountNumber(int accountNumber)
{
    this->accountNumber = accountNumber;
}
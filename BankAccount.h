#include <string>
#include <vector>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    vector<float> accountingEntries;

public:
    BankAccount(string accountHolder, int accountNumber);

    void deposit(float amount);
    void withdraw(float amount);
    void transfer(float amount, BankAccount &other);
    float calcBalance();

    string getAccountHolder();
    void setAccountHolder(string accountHolder);
    int getAccountNumber();
    void setAccountNumber(int AccountNumber);
};
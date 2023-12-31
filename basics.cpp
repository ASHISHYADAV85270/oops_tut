#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Hero
{
private:
    int accountDetails;

    //   Public access specifier.Public members can be accessed from anywhere.
public:
    int health;
    int age;
    string userName;

    // Sets the account details for the Hero object.
    // This is a setter function that allows modifying the private accountDetails member.
    // It takes an int parameter for the new account details value to set.
    void setAccountDetails(int accountDetails)
    {
        this->accountDetails = accountDetails;
    }

    /*
     * Prints the hero's user name and account details to stdout.
     * This is a getter function that allows reading the private accountDetails member.
     */
    void printName()
    {
        cout << userName << endl;
        cout << accountDetails << endl;
    }
};
int main()
{
    // static memory allocation
    Hero ramesh;
    ramesh.health = 89;
    ramesh.age = 20;
    ramesh.userName = "Ramesh";
    ramesh.setAccountDetails(123456);
    ramesh.printName();

    // dynamic memory allocation
    Hero *ashish = new Hero;
    ashish->health = 90;
    ashish->age = 21;
    ashish->userName = "Ashish";
    ashish->setAccountDetails(654321);
    ashish->printName();
    delete ashish; // it can be delted only when the memory is allocated dynamically.
    return 0;
}
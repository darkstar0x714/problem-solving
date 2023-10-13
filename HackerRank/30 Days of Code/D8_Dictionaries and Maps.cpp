#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int numberOfPhoneNumbers;
    cin >> numberOfPhoneNumbers;
    cin.ignore();

    map<string, long long> phoneBook;

    for (int i = 0; i < numberOfPhoneNumbers; i++)
    {
        string name;
        long long number;
        cin >> name >> number;
        phoneBook[name] = number;
    }

    string query;
    while (cin >> query)
    {
        auto iterator = phoneBook.find(query);

        if (iterator != phoneBook.end())
        {
            cout << query << "=" << phoneBook[query] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
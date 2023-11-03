#include <iostream>
using namespace std;

int main() {
    int returnedDay, returnedMonth, returnedYear;
    int dueDay, dueMonth, dueYear;

    cin >> returnedDay >> returnedMonth >> returnedYear;
    cin >> dueDay >> dueMonth >> dueYear;

    int fine = 0;

    if (returnedYear > dueYear) {
        fine = 10000;
    } else if (returnedYear == dueYear) {
        if (returnedMonth > dueMonth) {
            fine = 500 * (returnedMonth - dueMonth);
        } else if (returnedMonth == dueMonth && returnedDay > dueDay) {
            fine = 15 * (returnedDay - dueDay);
        }
    }

    cout << fine << endl;

    return 0;
}

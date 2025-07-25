#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Animal Quiz Game!" << endl;
    cout << "Choose an option:" << endl;
    cout << "1. What animal barks?" << endl;
    cout << "2. What animal is known as the king of the jungle?" << endl;
    cout << "3. What animal is a common pet that purrs?" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Answer: Dog" << endl;
            break;
        case 2:
            cout << "Answer: Lion" << endl;
            break;
        case 3:
            cout << "Answer: Cat" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}

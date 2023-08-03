#include <iostream>
using namespace std;

int main() {
    char str[100];
    int choice, length, count = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (true) {
        cout << "\n\n1. Calculate length of string"
             << "\n2. Count the number of vowels"
             << "\n3. Reverse the string"
             << "\n4. Display addresses of characters"
             << "\n5. Exit"
             << "\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                length = 0;
                while (str[length] != '\0')
                    length++;
                cout << "\nLength of string: " << length;
                break;

            case 2:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                        count++;
                }
                cout << "\nNumber of vowels: " << count;
                break;

            case 3:
                length = 0;
                while (str[length] != '\0')
                    length++;
                for (int i = length - 1; i >= 0; i--)
                    cout << str[i];
                break;

            case 4:
                length = 0;
                while (str[length] != '\0') {
                    cout << "\nAddress of character " << str[length] << ": " << &str[length];
                    length++;
                }
                break;

            case 5:
                exit(0);

            default:
                cout << "\nInvalid choice!";
        }
    }

    return 0;
}


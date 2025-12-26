#include <iostream>
#include <fstream>
using namespace std;

class LOGIN {
public:
    void login() {
        int count = 0;
        string userId, password, Id, pass;

        cout << "Enter Username: ";
        cin >> userId;
        cout << "Enter Password: ";
        cin >> password;

        ifstream input("record.txt");
        while (input >> Id >> pass) {
            if (Id == userId && pass == password) {
                count = 1;
                break;
            }
        }
        input.close();

        if (count == 1)
            cout << "Login Successful \n";
        else
            cout << "Invalid Username or Password \n";
    }

    void registration() {
        string rusername, rpassword;

        cout << "Enter Username: ";
        cin >> rusername;

        cout << "Enter Password (min 8 chars): ";
        cin >> rpassword;

        while (rpassword.length() < 8) {
            cout << "Password too short. Re-enter: ";
            cin >> rpassword;
        }

        ofstream f("record.txt", ios::app);
        f << rusername << " " << rpassword << endl;
        f.close();

        cout << "Registration Successful \n";
    }

    void forget() {
        int option;
        cout << "1. Recover password\n";
        cout << "2. Back\n";
        cin >> option;

        if (option == 1) {
            string suserId, sId, spass;
            int found = 0;

            cout << "Enter Username: ";
            cin >> suserId;

            ifstream f2("record.txt");
            while (f2 >> sId >> spass) {
                if (sId == suserId) {
                    cout << "Password: " << spass << endl;
                    found = 1;
                    break;
                }
            }
            f2.close();

            if (!found)
                cout << "Account not found \n";
        }
    }
};

int main() {
    LOGIN log;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Login\n";
        cout << "2. Register\n";
        cout << "3. Forget Password\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: log.login(); break;
        case 2: log.registration(); break;
        case 3: log.forget(); break;
        case 4: cout << "Thank You \n"; break;
        default: cout << "Invalid Choice \n";
        }
    } while (choice != 4);

    return 0;
}

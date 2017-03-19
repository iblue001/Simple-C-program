#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
	string currentUsername;
	string currentPassword;
	string random;
	string random2;
	string username;
	string password;

	cin >> random;
	cin >> random2;

	cout << "Welcome." << endl;
	cout << "Enter in your Password and Username" << endl;
	cout << "Username:" << currentUsername << flush;
	cin >> currentUsername;
	cout << "Enter your password: " << currentPassword << flush;
	cin >> currentPassword;

	username = currentUsername == random;
	password = currentPassword == random2;

	bool Username = currentUsername == random;

	bool Password = currentPassword == random2;

	if (Username == 0 || Password == 0) {

		cout
				<< "The user name  and the password you entered is incorrect or the combination of them you entered did not match our database"
				<< endl;
	}

	return 0;
}

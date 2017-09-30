#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>

using namespace std;

int main() {

	ofstream myfile("string.dat");

	string str1;

	cout << "Please enter a sentence : ";
	getline(cin, str1);
	if (myfile.is_open())
	{
		myfile << str1;
		myfile.close();
	}
	else cout << "Unable to open file";
	
	cout << endl;
	cout << endl;
	cout << endl;
	int const size = 1000;
	char alpha[size]; // declaring the array
	int i = 0;
	ifstream file("string.dat");
		if (file.is_open())
		{
			 file.getline(alpha, size); // telling the program where to get the string from the file
			
				for (int i = 0; i < size; i++) {
					if (alpha[i] != '\0') {
						alpha[i] = toupper(alpha[i]);
						cout << alpha[i];
					}
					if (alpha[i] == '\0') {
						break;
					}
				}
				
			
			file.close();
		}

		else cout << "Unable to open file";
		cout << endl;
		cout << endl;

		ofstream newfile("UppercaseString.dat");
		if (newfile.is_open())
		{
			for (int i = 0; i < size; i++) {
				if (alpha[i] == '\0') {
					break;
				}
				if (alpha[i] != '\0') {
					/*cout << alpha[i];*/
					newfile << alpha[i];
					
					
				}
				
			}
			
			newfile.close();
		}
		else cout << "Unable to open file";
	
		 
	system("pause");

	return 0;
}


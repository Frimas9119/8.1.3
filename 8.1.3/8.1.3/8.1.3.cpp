#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Count(char* str, char* s,int z,int i)
{
	/*if (s[z] == str[i]) {
		z++;
		if (z == 5) {
			return z;
		}
		return Count(str, s, 0, i+1);
	}
	else {
		return 0;
	}*/
	if (str[i + 1] != 0)
		if (s[z] == str[i]) {
			z++;
			return 1 + Count(str, s, z, i + 1);
		}
		else {
			return Count(str, s, z, i + 1);
		}
	else {
		return 0;
	}
}

int main()
{
	int i = 0;
	int z = 0;
	char str[101];
	char s[] = "while";
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "there are " << Count(str, s,z,i) << "/5 " << "letters in the word 'while' " << endl;
	return 0;
}
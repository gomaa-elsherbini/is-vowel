#include <iostream>
#include <string>
using namespace std;




char readCharacter()
{
	char ch;
	cout << "\nenter char to be counted?\n";
	cin >> ch;
	return ch;
}

char invertLetterCase(char ch)
{
	return tolower(ch);
}

bool isVowelLetter(char ch)
{
	char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
	
	for (int i = 0; i < 5; i++)
	{
		if (vowels[i] == invertLetterCase(ch))
			return true;
		else
			return false;
	}
}

void printRes(bool res, char letter)
{
	if (res)
		cout << "Yes, Letter '" << letter << "' is vowel\n";
	else
		cout << "No, Letter '" << letter << "' is not vowel\n";
}

int main()
{
	char ch = readCharacter();

	printRes(isVowelLetter(ch), ch);
	


	system("pause>0");
	return main();

}
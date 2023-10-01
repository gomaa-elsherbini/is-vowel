#include <iostream>
using namespace std;




char readCharacter()
{
	char ch;
	cout << "\nEnter a letter?\n";
	cin >> ch;
	return ch;
}

bool isVowelLetter(char ch)
{
	char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
	
	for (int i = 0; i < 5; i++)
	{
		if (vowels[i] == tolower(ch))
			return true;
	}
	return false;
}

void printRes(char letter)
{

	if (isVowelLetter(letter))
		cout << "Yes, Letter '" << letter << "' is a vowel letter\n";
	else
		cout << "No, Letter '" << letter << "' is not a vowel letter\n";
}

int main()
{
	char ch = readCharacter();

	printRes(ch);
	


	system("pause>0");
	return main();

}
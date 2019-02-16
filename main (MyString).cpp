/********************************************
Name : Hafiz Muneeb ur Rehman
Roll No. : BCSF15M030
Date of Submission : April 2,2016.
Submitted On : April 2, 2016.
Assignment No. : 1
***********************************************/

/*******************************************
			CLIENT CODE
*******************************************/

#include"MyString.h"

int main()
{
	const int SIZE = 1000;
	char str[SIZE];
	MyString string1;
	char ch;
	ch = 'a';
	while (ch!= '$')
	{	
		menu();
		cout << "\n\n\nEnter your option: ";
		int option;
		cin >> option;
		switch (option)
		{
		case 0:
		{
			cout << "Length of string\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			int len;
			len = string1.findLength(str, SIZE);
			cout << "Length of string is: " << len << endl;
		}
		break;
		case 1:
		{
			cout << "Left function\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.left();
		}
		break;
		case 2:
		{
			cout << "Right function\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.right();
		}
		break;
		case 3:
		{
			cout << "Mid function\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.mid();
		}
		break;
		case 4:
		{
			cout << "Find substring\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.substring();
		}
		break;
		case 5:
		{
			cout << "toUpper (upper case)\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.toUpper();
		}
		break;
		case 6:
		{
			cout << "toLower (lower case)\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.toLower();
		}
		break;
		case 7:
		{
			cout << "toProper (proper case)\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.toProper();
		}
		break;
		case 8:
		{
			cout << "Alternate (upper into lower and lower into upper)\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.alternateCase();
		}
		break;
		case 9:
		{
			cout << "Left concatenate (it will concatenate second string to left of first string)\n";
			char str1[SIZE], str2[SIZE];
			cout << "Enter first string: ";
			cin.ignore();
			cin.getline(str1, SIZE);
			cout << "Enter second string: ";
			cin.clear();
			cin.getline(str2, SIZE);
			string1.leftConcatenate(str1, SIZE, str2, SIZE);
		}
		break;
		case 10:
		{
			cout << "Right concatenate (it will concatenate second string to right of first string)\n";
			char str1[SIZE], str2[SIZE];
			cout << "Enter first string: ";
			cin.ignore();
			cin.getline(str1, SIZE);
			cout << "Enter second string: ";
			cin.clear();
			cin.getline(str2, SIZE);
			string1.RightConcatenate(str1, SIZE, str2, SIZE);
		}
		break;
		case 11:
		{
			cout << "Find Character\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.findCh();
		}
		break;
		case 12:
		{
			cout << "Find String\nEnter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.findString();
		}
		break;
		case 13:
		{
			cout << "Strings Apart function tell No. characters between to substring\n";
			cout << "Enter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.stringsApart();
		}
		break;
		case 14:
		{
			cout << "Remove a character\n";
			cout << "Enter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.removeCh();
		}
		break;
		case 15:
		{
			cout << "Remove a string\n";
			cout << "Enter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.removeString();
		}
		break;
		case 16:
		{
			cout << "Palindrome\n";
			cout << "Enter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.palindrome();
		}
		break;
		case 17:
		{
			cout << "Find Number of words\n";
			cout << "Enter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.findWords();
		}
		break;
		case 18:
		{
			cout << "Find Number of vowels\n";
			cout << "Enter string: ";
			cin.ignore();
			cin.getline(str, SIZE);
			string1.input(str, string1.findLength(str, SIZE));
			string1.findVowels();
		}
		break;
		case 19:
		{
			cout << "String Comparison (NOT CASE SENSITIVE)\n";
			char str1[SIZE], str2[SIZE];
			cout << "Enter first string: ";
			cin.ignore();
			cin.getline(str1, SIZE);
			cout << "Enter second string: ";
			cin.clear();
			cin.getline(str2, SIZE);
			string1.stringComparison(str1, str2);
		}
		break;
	}

	 system("pause");
 	 system("CLS");
	 cout << "For Exit press $ sign OR any other key to continue: ";
	 ch = _getch();
  }
	system("pause");		
	return 0;
}
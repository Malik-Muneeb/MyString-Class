/********************************************
	Name : Hafiz Muneeb ur Rehman
	Roll No. : BCSF15M030
	Date of Submission : April 2,2016.
	Submitted On : April 2, 2016.
	Assignment No. : 1
***********************************************/

/*******************************************
		CLASS IMPLEMENTATION
*******************************************/

#include"MyString.h"

/*****************************************************************
					CONSTRUCTOR
******************************************************************/
MyString::MyString()
{
	size = 0;
}


/*****************************************************************
				LENGTH FUNCTION
				FIND LENGTH OF STRING
******************************************************************/
int MyString::findLength(char* s, int size)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}


/*****************************************************************
				INPUT FUNCTION
		STORE DATA INTO CLASS PRIVATE DATA MEMBERS
******************************************************************/
void MyString::input(char* s, int len)
{
	size = len;
	str = s;
	str[size + 1] = '\0';
}


/*****************************************************************
					LEFT FUNCTION
THIS FUNCTION SHOW NUMBER OF CHARATERS FROM LEFT SIDE OF STRING
=> FIRST USER ENTER NUMBER OF CHARACTERS
******************************************************************/
void MyString::left()
{
	cout << "How many characters you want to see from left ? Enter No. characters: ";
	int c;
	cin >> c;
	while (c > size || c < 0)
	{
		cout << "Invalid Enter !!! You may enter character greater than total characters OR less than minimum characters :( :( :( \n";
		cout << "Enter No. characters again: ";
		cin >> c;
	}
	for (int i = 0; i < c; i++)
		cout << str[i];
	cout << endl;
}


/*****************************************************************
						RIGHT FUNCTION
THIS FUNCTION SHOW NUMBER OF CHARATERS FROM RIGHT SIDE OF STRING
=> FIRST USER WILL ENTER NUMBER OF CHARACTERS
******************************************************************/
void MyString::right()
{
	cout << "How many characters yow want to see from right ? Enter No. Characters: ";
	int c;
	cin >> c;
	while (c > size || c < 0)
	{
		cout << "Invalid Enter !!! You may enter character greater than total characters OR less than minimum characters :( :( :( \n";
		cout << "Enter No. characters again: ";
		cin >> c;
	}
	for (int i = size - c; i < size; i++)
		cout << str[i];
	cout << endl;
}


/*****************************************************************
						MID FUNCTION
THIS FUNCTION SHOW NUMBER OF CHARATERS FROM MID OF STRING
=> FIRST USER WILL ENTER STARTING POINT
=> USER WILL ENTER ENDGING POINT
******************************************************************/
void MyString::mid()
{
	cout << "\nEnter starting point: ";
	int start, end;
	cin >> start;
	while (start > size || start < 0)
	{
		cout << "Invalid Enter !!!\n";
		cout << "Enter Starting point again: ";
		cin >> start;
	}
	cout << "Enter ending point: ";
	cin >> end;
	while (end > size || end < 0)
	{
		cout << "Invalid Enter !!!\n";
		cout << "Enter Ending point again: ";
		cin >> end;
	}
	for (int i = start - 1; i < end; i++)
		cout << str[i];
	cout << endl;
}


/*****************************************************************
					FIND SUBSTRING
THIS FUNCTION FINDS THE SUBSTRING FROM GIVEN STRING
=> FIRST USER WILL ENTER NUMBER OF CHARACTER.
=> USER WILL ENTER STARTING POINT
******************************************************************/
void MyString::substring()
{
	cout << "To extract a substring from a string\nEnter No. Characters: ";
	int c, start;
	cin >> c;
	while (c > size || c < 0)
	{
		cout << "Invalid Enter !!! You may enter character greater than total characters OR less than minimum characters :( :( :(\n";
		cout << "Enter No. characters again: ";
		cin >> c;
	}
	cout << "Enter starting point: ";
	cin >> start;
	while (start > size || start < 0)
	{
		cout << "Invalid Enter !!!\n";
		cout << "Enter Starting point again: ";
		cin >> start;
	}
	for (int i = start - 1; i < start + c - 1 && i != size; i++)
		cout << str[i];
	cout << endl;
}


/*****************************************************************
				toUPPER FUNCTION
THIS FUNCTION WILL CONVERT LOWER CASE CHARCTERS INTO UPPER CASE.
******************************************************************/
void MyString::toUpper()
{
	cout << "Upper Function:\n";
	int i = 0;
	while (str[i]!='\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;	//EACH LOWER CASE CHARACTER HAS ASCII GREATER THAN
									//	32 BY ITS CORRESPONDING UPPER CASE CHARACTER
		else
			str[i] = str[i];
		i++;
	}
	str[i] = '\0';
	cout << str << endl;
}


/*****************************************************************
					tolOWER FUNCTION
THIS FUNCTION WILL CONVERT UPPER CASE CHARCTERS INTO LOWER CASE.
******************************************************************/
void MyString::toLower()
{
	cout << "Lower Function:\n";
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;	//EACH UPPER CASE CHARACTER HAS ASCII LESS THAN
									//	32 BY ITS CORRESPONDING LOWER CASE CHARACTER
		else
			str[i] = str[i];
		i++;
	}
	str[i] = '\0';
	cout << str << endl;
}


/*****************************************************************
					toPROPER FUNCTION
THIS FUNCTION WILL CONVERT SENTENCE INTO PROPER CASE
FOR INSTANCE:
		my Name iS muneeb.
		My name is muneeb.
******************************************************************/
void MyString::toProper()
{
	int i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0')
	{	
		if (str[i] == '.')
		{
			i = i + 2;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != ' ')
				str[i] = str[i] + 32;
		}
		i++;
	}
	cout << str;
	cout << endl;
}


/*****************************************************************
					ALTERNATE CASE
THIS FUNCTION WILL CONVERT UPPER CASE CHARCTERS INTO LOWER CASE
AND VICE VERSA.
******************************************************************/
void MyString::alternateCase()
{
	cout << "Alternate Case (lower to upper OR upper to lower) Function:\n";
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	str[i] = '\0';
	cout << str << endl;
}


/*****************************************************************
				LEFT CONCATENATE FUNCTION
THIS FUNCTION WILL ADD NEW STRING AT LEFT SIDE OF PRIOR STRING
=> IT WILL RECEVIE TWO STRINGS FROM MAIN()
=> FIND THEIR LENGTHS
=> ALLOCATE MEMORY BY DYNAMIC ALLOCATION
=> DECLARE NEW CHARCTER ARRAY AND STORE SECOND STRING & THEN FIRST
******************************************************************/
void MyString::leftConcatenate(char* s1, int size1, char* s2, int size2)
{
	int len1, len2;
	//FIND LENGTHS
	len1 = findLength(s1, size1);
	len2 = findLength(s2, size2);
	//DYNAMIC ALLOCATION
	char *str1, *str2;
	str1 = new char[len1];
	str2 = new char[len2];
	str1 = s1;
	str2 = s2;
	cout << "string 1: " << str1 << endl;
	cout << "string 2: " << str2 << endl;
	char *str3;
	//NEW CHARCTER ARRAY
	str3 = new char[len1 + len2];
	//COPY STRINGS INT STR3[]
	for (int i = 0; i < len2; i++)
		str3[i] = str2[i];
	int i = len2, j = 0;
	for (; i < len1 + len2; i++, j++)
		str3[i] = str1[j];
	str3[i] = '\0';
	cout << str3 << endl;
}


/*****************************************************************
				RIGHT CONCATENATE FUNCTION
THIS FUNCTION WILL ADD NEW STRING AT RIGHT SIDE OF PRIOR STRING
=> IT WILL RECEVIE TWO STRINGS FROM MAIN()
=> FIND THEIR LENGTHS
=> ALLOCATE MEMORY BY DYNAMIC ALLOCATION
=> DECLATE NEW CHARCTER ARRAY AND STORE FIRST STRING & THEN SECOND
******************************************************************/
void MyString::RightConcatenate(char* s1, int size1, char* s2, int size2)
{
	int len1, len2;
	//FIND LENGTHS
	len1 = findLength(s1, size1);
	len2 = findLength(s2, size2);
	//DYNAMIC ALLOCATION
	char *str1, *str2;
	str1 = new char[len1];
	str2 = new char[len2];
	str1 = s1;
	str2 = s2;
	cout << "string 1: " << str1 << endl;
	cout << "string 2: " << str2 << endl;
	char *str3;
	//DECLARE CHARACTER ARRAY
	str3 = new char[len1 + len2];
	//COPY STRINGS INTO STR3[]
	for (int i = 0; i < len1; i++)
		str3[i] = str1[i];
	int i = len1, j = 0;
	for (; i < len1 + len2; i++, j++)
		str3[i] = str2[j];
	str3[i] = '\0';
	cout << str3 << endl;
}


/*****************************************************************
				FIND CHARACTER FUNCTION
THIS FUNCTION FIND A SPECIFIC CHARACTER AND TELL ITS OCCURENCES
=> INPUT A CHARACTER
=> FIND IN CHARACTER ARRAY AND COUNT ITS OCCURENCES
******************************************************************/
void MyString::findCh()
{
	cout << "Enter a character to find its occurence: ";
	char ch;			//INPUT A CHARACTER
	cin >> ch;
	int occur=0;
	//FIND IN CHARACTER ARRAY AND COUNT ITS OCCURENCES
	for (int i = 0; i < size; i++)
	{
		if (str[i] == ch)
			occur++;
	}
	cout << "Total occurence of \"" << ch << "\" is " << occur<<endl;
}


/*****************************************************************
				FIND STRING FUNCTION
THIS FUNCTION FIND A SPECIFIC STRING AND TELL ITS OCCURENCES
=> INPUT SUBSTRING AND THEN ALLOCATE MEMORY
=> FIND IN CHARACTER ARRAY AND COUNT ITS OCCURENCES
******************************************************************/
void MyString::findString()
{
	cout << "Enter a string to find its occurences: ";
	char s[1000], *subStr;
	//INPUT SUBSTRING AND THEN ALLOCATE MEMORY
	cin.getline(s, 1000);
	int len = findLength(s, 1000);
	//DYNAMIC ALLOCTION
	subStr = new char[len];
	subStr = s;
	int occur = 0;
	cout << str << endl << subStr << endl;
	int i = 0, j = 0;
	bool isTrue = false;
	//THIS LOOP FIND IN CHARACTER ARRAY AND COUNT ITS OCCURENCES
	while (str[i] != '\0')
	{
		if (str[i] == subStr[j])
		{
			j++;
			isTrue = true;
		}
		else
		{
			if (str[i] == subStr[--j])
			{
				j++;
				isTrue = true;
			}
			else
			{
				j = 0;
				isTrue = false;
			}
		}
		if (isTrue)
		{
			if (subStr[j] == '\0')
			{
				++occur;
				j = 0;
			}
		}
		i++;
	}
	cout << "Total occurences of \"" << subStr << "\" is " << occur << endl;
}


/*****************************************************************
				STRINGS APART FUNCTION
THIS FUNCTION FIND NUMBER OF CHARACTERS BETWEEN TWO STRINGS
=> INPUT TWO SUBSTRINGS
=> FIND IN CHARACTER ARRAY AND COUNT ITS OCCURENCES
******************************************************************/
void MyString::stringsApart()
{
	char s1[1000], s2[1000];
	cout << "Enter first substring: ";
	cin >> s1;
	cout << "Enter second substring: ";
	cin >> s2;
	int len1, len2;
	len1 = findLength(s1, 1000);
	len2 = findLength(s2, 1000);
	//Dynamic Allocation
	char *substr1, *substr2;
	substr1 = new char[len1];
	substr2 = new char[len2];
	substr1 = s1;
	substr2 = s2;
	cout << "string 1: " << substr1 << endl;
	cout << "string 2: " << substr2 << endl;
	int index1 = findSubstring(str, substr1);
	int index2 = findSubstring(str, substr2);
	if (index1 == 0 || index2 == 0)
		cout << "Substring not found...!!!" << endl;
	else
	{
		int apart;
		if (index1 > index2)
			apart = index1 - index2 - len2;
		else
			apart = index2 - index1 - len2;
		cout << "Substring \"" << substr1 << "\" is " << apart << " characters apart from substring \"" << substr2 << "\"." << endl;
	}
}


/*****************************************************************
				FIND SUBSTRING FUNCTION
THIS FUNCTION FIND SUBSTRING FOR STRING APART FUNCTION
=> RECIVES TWO STRINGS
=> RETURN THE INDEX OF LAST CHARACTER OF SUBSTRING
******************************************************************/
int MyString::findSubstring(char *str, char *substr1 )
{
	int index = 0;
	int i = 0, j = 0;
	bool isTrue = false;
	while (str[i] != '\0')
	{
		if (str[i] == substr1[j])
		{
			j++;
			isTrue = true;
		}
		else
		{
			if (str[i] == substr1[--j])
			{
				j++;
				isTrue = true;
			}
			else
			{
				j = 0;
				isTrue = false;
			}
		}
		if (isTrue)
		{
			if (substr1[j] == '\0')
			{
				index = i;
				return index;
			}
		}
		i++;
	}
	return 0;
}


/*****************************************************************
					REMOVE CHARACTER FUNCTION
THIS FUNCTION FIND A SPECIFIC CHARACTER FROM STRING AND REMOVE IT
=> RECIVES TWO STRINGS
=> RETURN THE INDEX OF LAST CHARACTER OF SUBSTRING
******************************************************************/
void MyString::removeCh()
{
	cout << "Enter a character to remove from string: ";
	char ch;
	cin >> ch;
	int i = 0, j = 0;
	while(str[i] != '\0')
	{
		if (str[i] != ch)
		{
			str[j] = str[i];
			++j;
		}
		++i; 
	}
	str[j] = '\0';
	cout << "string without \'" << ch << "\' : " << str << endl;
}


/*****************************************************************
				REMOVE STRING FUNCTION
THIS FUNCTION FIND A SUBSTRING FROM STRING AND REMOVE IT
=> INPUT A SUBSTRING FIND ITS LENGTH AND ALLOCATE MEMORY
=> DECLARE ANOTHER CHARACTER ARRAY
=> FIND OCCURENCE OF STRING ENTERED BY USER
=> WHEN FIRST OCCURENCE FOUND COPY ALL DATA INTO CHARACTER ARRAY
   "EXCEPT THE STRING WHICH IS FOUND" ---- THIS IS HOW ALL DATA 
    WILL COPY INTO THIRD ARRAY EXCEPT THAT STRING
******************************************************************/
void MyString::removeString()
{
	cout << "Enter substring to remove from string: ";
	char s[1000], *substr;
	cin.getline(s,1000);
	int len = findLength(s, 1000);
	substr = new char[len];
	substr = s;
	substr[len + 1] = NULL;
	int i = 0, j = 0, k = 0, ip = 0;
	int start = 0;
	char *str2;
	str2 = new char[size];
	bool isTrue = false;
	while (str[i] != '\0')
	{
		if (str[i] == substr[j])
		{
			j++;
			isTrue = true;
		}
		else
		{
			if (str[i] == substr[--j])
			{
				j++;
				isTrue = true;
			}
			else
			{
				j = 0;
				isTrue = false;
			}
		}

		ip++;
		if (isTrue)
		{
			if (substr[j] == '\0')
			{
				j = 0;
				for ( ; start <= i - len ; start++, k++)
					str2[k] = str[start];
				start = k + len;
			}
		}
		else if (str[ip] == '\0')
		{
			for (start; start < size; start++,k++)
				str2[k] = str[start];
		}
		++i;
	}
	str2[k] = '\0';
	cout << "String without substring \"" << substr << "\" is: " << str2 << endl;
}


/*****************************************************************
					PALINDROME FUNCTION
THIS FUNCTION CHECK WHETHER GIVEN STRING IS PALINDROME OR NOT
=> FIRST COPY ALL CONTENTS INTO ANOTHER ARRAY
=> THEN COPIED ARRAY CHECK FROM ENDING POINT TO START BY THE 
   ORIGINAL ARRAY.
******************************************************************/
void MyString::palindrome()
{
	char *revstr;
	revstr = new char[size];
	int	count, revCount;
	bool flag = true;
	count = revCount = 0;

	//Stores all the contents of str in rev_str. 
	while (str[count] != '\0')
	{
		revstr[count] = str[count];
		count++;
	}

	//revStr start from ending point to start and str start to end.
	//Also compare each letter. if both are not equal its stops working.
	revCount = count - 1;
	count = 0;
	for (; revCount >= 0 && flag == true; revCount--)
	{
		if (revstr[revCount] != str[count])
			flag = false;
		count++;
	}
	//if flag is true then string is palindrome otherwise not.
	if (flag)
		cout << "It's a palindrome." << endl;
	else
		cout << "Not a palindrome." << endl;
}


/*****************************************************************
			FIND WORDS FUNCTION
THIS FUNCTION FIND TOTAL NUMBER OF WORDS IN A STRING
******************************************************************/
void MyString::findWords()
{
	int i = 0, word = 0;
	//if user insert nothing and press enter key. it returns 0.
	if (str[i] != '\0')
		word++;
	while (str[i] != '\0')
	{
		//when it finds character after space increments in word variable.
		if (str[i] == ' ')
		{
			if (str[++i] != '\0')
				word++;
		}	
		i++;
	}
	cout << "Number of words in the string is " << word << endl;
}


/*****************************************************************
				FIND VOWELS FUNCTION
THIS FUNCTION FIND TOTAL NUMBER OF VOWELS IN A STRING
******************************************************************/
void MyString::findVowels()
{
	int i, vowel;
	i = vowel = 0;
	while (str[i] != '\0')
	{
		//when it finds any vowels increment in vowel variable and display at the end.

		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I'
			|| str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
			vowel++;
		i++;
	}
	cout << "Total number of vowels in \"" << str << "\" is " << vowel << endl;
}


/*****************************************************************
			STRING COMPARISON FUNCTION
THIS FUNCTION COMPARE TWO STRINGS WEHTHER THEY ARE SAME OR NOT
=> RECEIVES TWO STRINGS
=> COMPARISON IS NOT CASE SENSITIVE
FOR INSTANCE:
			PaKIStan & Pakistan BOTH ARE SAME
			Ali & Ahmed ARE DIFFERENT		
******************************************************************/
void MyString::stringComparison(char* str1, char* str2 )
{
	bool flag;
	int i = 0;
	cout << "String 1: " << str1 << endl;
	cout << "String 2: " << str2 << endl;
	while (str1[i] != '\0')
	{
		//this whole section check each letter
		//if letters are in different cases then first
		//it convert into same case and check.
		if (str1[i] == str2[i])
			flag = true;
		else if (str1[i] - 32 == str2[i])
			flag = true;
		else if (str1[i] + 32 == str2[i])
			flag = true; 
		else
			flag = false;
		i++;
	}	
	if (flag)
		cout << "Same String." << endl;
	else
		cout << "Different String." << endl;
}


/***********************************************************
			HANDLE CURSOR ON SCREEN
************************************************************/
void placeCursor(HANDLE screen, int row, int col)
{ // COORD is a defined C++ structure that
	COORD position; // holds a pair of X and Y coordinates
	position.Y = row;
	position.X = col;
	SetConsoleCursorPosition(screen, position);
}


/**************************************************************
				MENU FUNCTION
=> DISPLAY FUNCTIONS OF MyString CLASS AND THEIR CODE TO ACCESS
   THEM
***************************************************************/
void menu()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	placeCursor(screen, 3, 20);
	cout << "******Welcome to MyString Class******";
	placeCursor(screen, 5, 20);
	cout << "***MENU***";
	placeCursor(screen, 7, 0);
	cout << "There are various functions for strings. Each has specific code to access them. And these are following:";
	placeCursor(screen, 10, 0);
	cout << "******************Function*******************\n";
	cout << "___________________________________________________\n";
	cout << "Length of string\nLeft\nRight\nMid\nFind Substring\n";
	cout << "toUpper (upper case)\ntoLower (lower case)\n";
	cout << "toProper(proper case)\nAlternate (upper into lower and lower into upper)\n";
	cout << "Concatenate (Add new string to LEFT)\n";
	cout << "Concatenate (Add new string to Right)\n";
	cout << "Find occurences of a character\n";
	cout << "Find occurences of a string\n";
	cout << "To find number of characters b/w two substrings\n";
	cout << "Remove a character\nRemove a string\n";
	cout << "Palindrome\nFind number of words\n";
	cout << "Find number of vowels\nString Comparison\n";
	placeCursor(screen, 10, 65);
	cout << "******************Code*******************\n";
	placeCursor(screen, 11, 65);
	cout << "__________________________________________\n\n";
	placeCursor(screen, 12, 65);
	cout << "0";
	placeCursor(screen, 13, 65);
	cout << "1";
	placeCursor(screen, 14, 65);
	cout << "2";
	placeCursor(screen, 15, 65);
	cout << "3";
	placeCursor(screen, 16, 65);
	cout << "4";
	placeCursor(screen, 17, 65);
	cout << "5";
	placeCursor(screen, 18, 65);
	cout << "6";
	placeCursor(screen, 19, 65);
	cout << "7";
	placeCursor(screen, 20, 65);
	cout << "8";
	placeCursor(screen, 21, 65);
	cout << "9";
	placeCursor(screen, 22, 65);
	cout << "10";
	placeCursor(screen, 23, 65);
	cout << "11";
	placeCursor(screen, 24, 65);
	cout << "12";
	placeCursor(screen, 25, 65);
	cout << "13";
	placeCursor(screen, 26, 65);
	cout << "14";
	placeCursor(screen, 27, 65);
	cout << "15";
	placeCursor(screen, 28, 65);
	cout << "16";
	placeCursor(screen, 29, 65);
	cout << "17";
	placeCursor(screen, 30, 65);
	cout << "18";
	placeCursor(screen, 31, 65);
	cout << "19";
}


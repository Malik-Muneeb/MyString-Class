/********************************************
Name : Hafiz Muneeb ur Rehman
Roll No. : BCSF15M030
Date of Submission : April 2,2016.
Submitted On : April 2, 2016.
Assignment No. : 1
***********************************************/

/*******************************************
		CLASS SPECIFICATION
*******************************************/

#ifndef MYSTRING_H
#define MYSTRING_H
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<windows.h>
using namespace std;
void menu();

class MyString
{
	int size;
	char* str;
public:
	MyString();							//constructor
	int findLength(char* , int );		//find length of srting`
	void input(char*, int);				//store data in private members
	void left();						//show characters of string from left side 
	void right();						//show characters of string from right side
	void mid();							//show characters of string from mid side
	void substring();					//find substring
	void toUpper();						//convert all characters into upper case
	void toLower();						//convert all characters into lower case
	void toProper();					//convert all characters into proper case
	void alternateCase();				//convert lower alphabets into capital and vice versa
	void leftConcatenate(char*, int, char*, int);				//add a new string on left side of prior string
	void RightConcatenate(char*, int, char*, int);				//add a new string on right side of prior string
	void findCh();						//find a character 
	void findString();					//find substring
	void stringsApart();				//find number of characters between two strings
	int findSubstring(char*,char*);		//this function find index of substrings for stringApart function 
	void removeCh();					//remove a character
	void removeString();				//remove string
	void palindrome();					//check whether string is Palindrome or not
	void findWords();					//find total number of words(not characters) from string
	void findVowels();					//find total number of vowels (a,e,i,o,u)
	void stringComparison(char*,char*);							//compare two strings
};

#endif
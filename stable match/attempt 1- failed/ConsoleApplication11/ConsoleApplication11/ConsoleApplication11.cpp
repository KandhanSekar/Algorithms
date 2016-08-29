// ConsoleApplication11.cpp : Defines the entry point for the console application.
//Author:Kandhan Sekar

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
string first[3][3], second[3][3];
int a=1;
// let us have a vector for each man and women

//the code for men
//0 for single
//1 for engaged
vector<string>a;
vector<string>b;
vector<string>c;
vector<string>e;
vector<string>f;
vector<string>g;
// a,b,c are d men !!!! e,f,g are the girls


void check()
{
	if (a[0] == '0')
	{
		
	}
}

void getval()
{
	cout << "enter val for one";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> first[i][j];
		}
	}
	cout << "enter val for second";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> second[i][j];
		}
	}

}
 void disp()
 {
	 cout << "\n one\n";
	 for (int i = 0; i < 3; i++)
	 {
		 for (int j = 0; j < 3; j++)
		 {
			 cout << first[i][j];
		 }
		 cout << "\n";
	 }
	 cout << "\n second\n";
	 for (int i = 0; i < 3; i++)
	 {
		 for (int j = 0; j < 3; j++)
		 {
			 cout<< second[i][j];
		 }
		 cout << "\n";
	 }
 }
int main()
{
	getval();
	disp();
	
	while (a == 2)
	{
		check();
	}
}


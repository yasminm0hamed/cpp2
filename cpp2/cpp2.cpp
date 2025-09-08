// cpp2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
#include <cmath>
#include <algorithm>


// function without parameters 
void sayHello() {
	cout << " hello osama \n";
}
// function with prameters 
void sayHello2 (string mes, string name)
{
	cout << mes << " " << name << endl;
}

void calculate(string operation)
{
	int num1, num2;
	cout << "inter thr first number...\n";
	cin >> num1;
	cout << "inter the second number...\n";
	cin >> num2;
	cout << "choose the opereation that you need...\n";
	cin >> operation;
	cout << num1 << operation << num2 << "=";

	if (operation == "+")
		cout << num1 + num2<<endl;
	else if (operation == "-")
		cout << num1 - num2 << endl;
	else if (operation == "*")
		cout << num1 * num2 << endl;
	else if (operation == " / ")
		cout << num1 / num2 << endl;

}

// function with parameter default value
// لازم الديفولت فاليو تكون ف اخر براميتر ولو عملناها ف الاول يبقي كله الباقي لازم يتعمله ديفولت فاليو
void sayHello3(string mes = "welcome",string name= "yasmin ")
{
	cout << mes << " " << name << endl;
}

// function .. passing array as parameter 
void calculate2(int nums [] , int count )// "count" number of elements in the array 
{
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		 result += nums[i] ;
	}
	cout << "the sum of the numbers in the array equal = " << result << endl;
}

// function with return type 
int calculate3(int n1,int n2)
{
	cout << "operation is done\n";
	return n1 * n2; // this function doesn't print any thing but return value 
	cout << "will not show "; // اي جمله طباعه بعد سطر الريتيرن مش هتتطبع 
}





int main() // the main function have to return int datatype 
{


	// functions بنكتبها برا المين 
	//returnDataType functionName (param1,param2,param3)
	//{
	// function body contain block of code 


	// call the function 
	sayHello(); // without arguments
	sayHello2("hello", "osama");
	cout << "=====================================\n";

	calculate("+");
	cout << "=====================================\n";

	sayHello3();
	sayHello3("hello", "mohamed");
	cout << "=====================================\n";

	// let's use calculate2 function 
	// names of arguments doesn't have to be the same name of parameters 
	int arrayOfNumbers[] = { 40,30,20,10 };
	int numSize = size(arrayOfNumbers);
	int numSize2 = sizeof(arrayOfNumbers);
	//cout << numSize;//4
	//cout << numSize2;//4*4=16
	calculate2(arrayOfNumbers, numSize);
	cout << "=====================================\n";

	int result = calculate3(5, 3);
	cout << result << endl;
	cout << "=====================================\n";

	// to use Math built in function we have to include <cmath>
	cout << pow(2, 3) << endl; //2*2*2=8
	cout << 11 % 2 << endl;// uses with int data type onely 
	cout << ceil(9.1)<< endl;//10 
	cout << floor(9.9) << endl; // 9
	cout << round(9.4) << endl; // 9
	cout << round(9.8) << endl; // 10 
	cout << trunc(9.9) << endl; //9
	cout << trunc(9.2) << endl; //9
	cout << trunc(9.5) << endl; //9
	cout << "=====================================\n";

	cout << 'A'<< endl;
	cout << tolower('A') << endl;//الفانكشن دي بتستقبل رقم صحيح ف لازم ترجع رقم صحيح ف هتحول الحرف ل اسمول وتجيب ال اسكي  فاليو بتاعته 
	cout << char(tolower('A')) << endl; // كده هيرجع الحرف سمول 
	cout << "=====================================\n";

	cout << 'a' << endl;
	cout << tolower('a') << endl;//الفانكشن دي بتستقبل رقم صحيح ف لازم ترجع رقم صحيح ف هتحول الحرف ل كابتل وتجيب ال اسكي فاليو بتاعته 
	cout << char(tolower('a')) << endl; // كده هيرجع الحرف كابتل 
	cout << "=====================================\n";

	// app1 => swap case 
	cout << " inter your name please \n ";
	string name;
	cin >> name; 
	size(name);// number of characteres in name  
	
	cout << " the original name is: " << name<< endl;
	cout << " the swaped name is: ";
	for (int i = 0; i < size(name); i++)
	{
		if (isupper(name[i]))
		{
			cout << char(tolower(name[i]));
		}
		else if (islower(name[i]))
		{
			cout << char(toupper(name[i]));
		}
		
	}

	cout << "\n=====================================\n";

	//app2 => remove spaces 
	cout << " inter your full name please \n ";
	string name2;
	cin.ignore();
	getline(cin, name2);// لما عملنا cin بالطريقه العاديه كان مبيتخزنش ف المتغير غير اول كلمه و اول ميشوف مسافه بيقف عشان كدا استخدمنا جيت لاين 
	size(name2);// number of characteres in name
	cout << " the original with spaces name is: " << name2 << endl;
	cout << " the name without spaces is: ";

	for (int i = 0; i < size(name2); i++)
	{
		if (isspace(name2[i]))
		{
			continue;
		}
		else 
		{
			cout << name2[i];
		}

	}
	cout << "\n=====================================\n";


	// to use the following functions we have to use include <algorithm>
	cout << max(10, 89)<<endl;//89
	cout << max({ 3,4,5,67,83,8 })<< endl;//83
	cout << max('a', 'c')<< endl;//c
	cout << max('a', 'C')<< endl;//a
	cout << "=====================================\n";

	cout << min(10, 89) << endl;//10
	cout << min({ 3,4,5,67,83,8 }) << endl;//3
	cout << min('a', 'c') << endl;//a
	cout << min('a', 'C') << endl;//C
	cout << "=====================================\n";









	return 0;
}

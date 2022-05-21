#include <iostream>
#include <string>
using namespace std;
int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num);
int main()
{
 int result = getResult(30,20);
 string name = getResult("Alexander","Hughes");
 int cube = getResult(5);

 cout << "Numbers result is : " << result << endl;
 cout << "String result is : " << name << endl;
 cout << "Cube result is : " << cube << endl;

 return 0;
}
int getResult(int num1, int num2)
{
 return num1+num2;
}
string getResult(string str1, string str2)
{
 return str1 + " " + str2;
}
int getResult(int num)
{
 return num*num*num;
}
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void addition();
void Subtraction();
void Multiplication();
void Division();
void Squaring();
void SquareRoot();
void isEven();
void power();
void Table_items();
int main()
{
  int operation;
  do
  {
    cout << "Press Any Key to Start The Program!\n";
    getch();
    cout << "select the operation using a number : \n";
    cout << "1- Addition \n"
            "2- Subtraction \n"
            "3- Multiplication \n"
            "4- Division \n"
            "5- Squaring \n"
            "6- Square Root \n"
            "7- Even Or not \n"
            "8- Power \n"
            "9-  Table of Contents \n"
            "10- Exit \n";
    cout << "==========================\n";
    cout << "Choose A number: ";
    cin >> operation;
    switch (operation)
    {
    case 1:
      addition();
      break;
    case 2:
      Subtraction();
      break;
    case 3:
      Multiplication();
      break;
    case 4:
      Division();
      break;
    case 5:
      Squaring();
      break;
    case 6:
      SquareRoot();
      break;
    case 7:
      isEven();
      break;
    case 8:
      power();
      break;
    case 9:
      Table_items();
      break;
    case 10:
    exit(0);
    default :
    cout << "Enter The correct nuber !! \n";
    main();
    }
  } while (operation != 11);

  return 0;
}
void addition()

{
  int num_of_number;
  float num, sum = 0;
  cout << "Enter The number \n";
  cout << "==========================\n";
  cin >> num_of_number;
  cout << "==========================\n";
  for (int i = 1; i <= num_of_number; i++)
  {
    cout << "Enter Number " << i << ": ";
    cin >> num;
    sum += num;
  }
  cout << "==========================\n";
  cout << "The sum  " << " = " << sum;
  cout << "\n==========================\n";
}
void Subtraction()
{
  float num1, num2, result;
  cout << "Enter the first number : \n";
  cin >> num1;
  cout << "Enter the second number : \n";
  cin >> num2;
  result = num1 - num2;
  cout << "==========================\n";
  cout << "The Subtraction of " << num1 << " - " << num2 << " = " << result << endl;
}
void Multiplication()
{
  float num, numOfNumber, multi = 1;
  cout << "Enter the  num of numbers : \n";
  cin >> numOfNumber;
  for (int i = 1; i <= numOfNumber; i++)
  {
    cout << "Enter Number " << i << ": ";
    cin >> num;
    multi *= num;
  }
  cout << "==========================\n";
  cout << "The Multiplication of " << numOfNumber << " = " << multi << endl;
  cout << "==========================\n";
}
void Division()
{

  float num1, num2, result;
  cout << "Enter the first number : \n";
  cin >> num1;
  cout << "Enter the second number : \n";
  cin >> num2;
  if (num2 == 0)
  {
    cout << "==========================\n";
    cout << "The Division is not correct !!\n";
    cout << "==========================\n";
    return;
  }
  else
  {
    result = num1 / num2;
    cout << "The Division of " << num1 << " / " << num2 << " = " << result << endl;
  }
}
void Squaring()
{
  float num, result;
  cout << "Enter The Number : ";
  cin >> num;
  cout << "==========================\n";
  result = num * num;
  cout << "The number of squaring " << num << " = " << result << endl;
  cout << "==========================\n";
}
void SquareRoot()
{
  float num, result;
  cout << "Enter The Number You want sqrt : ";
  cin >> num;
  cout << "==========================\n";
  result = sqrt(num);
  cout << "The number of sqrt " << num << " = " << result << endl;
  cout << "==========================\n";
}
void isEven()
{
  int num, result;
  cout << "Enter The number to check :";
  cin >> num;
  result = num % 2;
  if (result == 0)
  {
    cout << "==========================\n";
    cout << result << " is Even \n";
    cout << "==========================\n";
  }
  else
  {
    cout << "==========================\n";
    cout << result << " is odd \n";
    cout << "==========================\n";
  }
}
void power()
{
  float num, power;
  cout << "Enter num of number : ";
  cin >> num;
  cout << "==========================\n";
  cout << "Enter power of number :";
  cin >> power;
  cout << "==========================\n";
  cout << num << " ^ " << power << " = " << pow(num, power);
  cout << "\n==========================\n";
}
void Table_items()
{
  void Table_Numbers();
  void Table_String();
  int choice;
  do
  {
    cout << "Enter the type of data :"
            "\n 1- Interger"
            "\n 2- String"
            "\n 3- Exit";
    cout << "Choice a number :";
    cin >> choice;
    switch (choice)
    {
    case 1:
      Table_Numbers();
      break;
    case 2:
      Table_String();
      break;
    case 3:
      main();
      break;
    }
  } while (choice != 3);
}
void Table_Numbers()
{
  int num;
  cout << "Enter the num of number : ";
  cin >> num;
  float nums[num];
  for (int i = 1; i <= num; i++)
  {
    cout << "\n Enter number  " << i << " : ";
    cin >> nums[i - 1];
  }
  cout << "\nTable of number "
          "\n----------------\n";
  for (int i = 0; i < num; i++)
  {
    cout << " -" << nums[i] << endl;
  }
}
void Table_String()
{
  int stringOftable;
  cout << "Enter the num of strings : ";
  cin >> stringOftable;
  string strings[stringOftable];
  for (int i = 1; i <= stringOftable; i++)
  {
    cout << "\n Enter string  " << i << " : ";
    cin >> strings[i - 1];
  }
  cout << "\nTable of number "
          "\n----------------\n";
  for (int i = 0; i < stringOftable; i++)
  {
    cout << i + 1 << " - " << strings[i] << endl;
  }
}
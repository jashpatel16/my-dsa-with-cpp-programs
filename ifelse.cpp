/*#ODD OR EVEN(only positive numbers)*/

/* ONLY if */

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     if(num%2==0){
//         cout<<"The number is Even.";
//     }
//     if(num%2!=0){
//         cout<<"The number is Odd.";
//     }
//     return 0;
//     }

/*#ODD OR EVEN(only positive numbers)*/

/* if else*/

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     if(num%2==0){
//         cout<<"The number is Even.";
//     }
//     else {
//         cout<<"The number is Odd.";
//     }
//     return 0;
//     }

/*Take positive number as input and check if it is divisbile by 5 or not*/

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a positive number::";
//     cin>>num;
//     if(num%5==0){
//         cout<<"The number is divisible by 5.";
//     }
//     else{
//         cout<<"The number is not divisible by 5.";
//     }
//     return 0;
// }

/*Given an integer. Print the absolute(mod) value of the integer.*/

// #include<iostream>
// using namespace std;
// int main(){

//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     if(num>0){
//         cout<<"The absolute value of the number is::"<<num;
//     }
//     else{
//         cout<<"The absolute value of the number is::"<<-num;
//     }
//     return 0;
// }

/*# IF cost price and selling price of an item is input by the user, write a program to determine whether the seller has made a profit or loss. If profit then how much profit and if the loss then how much loss */

// #include <iostream>
// using namespace std;
// int main()
// {
//     float cost_price, selling_price, profit, loss;
//     cout << "Enter the cost price of the item::";
//     cin >> cost_price;
//     cout << "Enter the selling price of the item::";
//     cin >> selling_price;

//     if (selling_price > cost_price)
//     {
//         cout << "The seller has made a profit of::" << selling_price - cost_price;
//     }
//     else if (cost_price > selling_price)
//     {
//         cout << "The seller has made a loss of::" << cost_price - selling_price;
//     }
//     else
//     {
//         cout << "The seller has neither made a profit nor a loss.";
//     }
//     return 0;
// }

/* *****Multiple Conditions Using &&(logical AND) and ||(logical OR)***** */

/* Take positive integer as input and check if it is a three(3) digit number or not */

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     if((num>=100 && num<=999) || (num<=-100 && num>=-999)){
//         cout<<"The number is a three digit number.";
//     }
//     else{
//         cout<<"The number is not a three digit number.";
//     }
//     return 0;
// }

/* Take positive integer as input and check if it is divisible by 3 and 5 or not.*/

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a positive integer::";
//     cin>>num;
//     if(num%3==0 && num%5==0){
//         cout<<"The number is divisible by both 3 and 5.";
//     }
//     else{
//         cout<<"The number is not divisible by both 3 and 5.";
//     }
//     return 0;
// }

/* Take positive integer as input and check if it is divisible by (3 or 5) or not.*/

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a positive integer::";
//     cin>>num;

//     if(num%3==0 || num%5==0){
//         cout<<"The number is divisible by either 3 or 5.";
//     }
//     else{
//         cout<<"The number is neither divisible by 3 nor by 5.";
//     }
//     return 0;
// }

/* Take 3 positive integers as input and find the largest among them.(Condition:- Use only if) */

// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,num3;
//     cout<<"Enter first number::";
//     cin>>num1;
//     cout<<"Enter second number::";
//     cin>>num2;
//     cout<<"Enter third number::";
//     cin>>num3;
//     if(num1>=num2 && num1>=num3){
//         cout<<"The largest number is::"<<num1;
//     }
//     if(num2>=num1 && num2>=num3){
//         cout<<"The largest number is::"<<num2;
//     }
//     if(num3>=num1 && num3>=num2){
//         cout<<"The largest number is::"<<num3;
//     }
//     return 0;
// }

/* Write a program to check whether a character is an alphabet or not */

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter a character::";
//     cin>>ch;
//     if((int(ch)>=65 && (int(ch)<=90)) || ((int(ch)>=97) && (int(ch)<=122))){
//         cout<<"The character is an alphabet.";
//     }
//     else{
//         cout<<"The character is not an alphabet.";
//     }
// }

/* ******** ## NESTED IF-ELSE ## ******* */

/* Take a positive integer as input and show whether it is divisible by 3 or 5 but not by 15 */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter a positive integer::";
//     cin >> num;
//     if (num % 3 == 0 || num % 5 == 0)
//     {
//         if (num % 15 != 0)
//         {
//             cout << "The number is divisible by either of 3 or 5 and not divisible by 15.";
//         }
//         else
//         {
//             cout << "The number is divisible by 15.";
//         }
//     }
//     else
//     {
//         cout << "The number is not divisible by either of 3 or 5.";
//     }
//     return 0;
// }

/*Take positive integer as input and tell if it is divisible by both 3 and 5*/

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     if(num%3 == 0){
//         if(num%5 == 0){
//             cout<<"Number is divisible by both 3 and 5.";
//         }
//         else{
//             cout<<"The number is not divisible by 5.";
//         }
//     }
//     else{
//         cout<<"The number is not divisible by 3.";
//     }
//     return 0;
// }

/* Take three positive integers as input and print the greatest of them.(Don't use && and || operators) */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1, num2, num3;
//     cout << "Enter a first number::";
//     cin >> num1;
//     cout << "Enter a second number::";
//     cin >> num2;
//     cout << "Enter a third number::";
//     cin >> num3;

//     if (num1 > num2)
//     {
//         if (num1 > num3)
//         {
//             cout << "First number is greatest::" << num1;
//         }
//         else
//         {
//             cout << "Third number is greatest::" << num3;
//         }
//     }
//     else
//     {
//         if (num2 > num3)
//         {
//             cout << "Second number is greatest::" << num2;
//         }
//         else
//         {
//             cout << "Third number is greatest::" << num3;
//         }
//     }
//     return 0;
// }

/* Take input marks of a student and print the Grade according to the marks:- */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int marks;
//     cout << "Enter the marks of a student out of 100::";
//     cin >> marks;
//     if (marks > 90 && marks <= 100)
//     {
//         cout << "Excellent";
//     }
//     else if (marks > 80 && marks <= 90)
//     {
//         cout << "Very Good";
//     }
//     else if (marks > 70 && marks <= 80)
//     {
//         cout << "Good";
//     }
//     else if (marks > 60 && marks <= 70)
//     {
//         cout << "Can do Better";
//     }
//     else if (marks > 50 && marks <= 60)
//     {
//         cout << "Average";
//     }
//     else if (marks > 40 && marks <= 50)
//     {
//         cout << "Below Average";
//     }
//     else if (marks >= 35 && marks <= 40)
//     {
//         cout << "Needs Improvement";
//     }
//     else
//     {
//         cout << "Fail";
//     }
//     return 0;
// }

/* Write a program to identify whether a given character is a vowel or consonant */

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     int ASCII;

//     cout << "Enter a character::";
//     cin >> ch;
//     ASCII = (int)ch;
//     if ((ASCII >= 65 && ASCII <= 90) || (ASCII >= 97 && ASCII <= 122))
//     {
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         {
//             cout << "It's a vowel";
//         }
//         else
//         {
//             cout << "It's a consonant";
//         }
//     }
//     else
//     {
//         cout << "It's not an alphabet";
//     }
//     return 0;
// }




/* Take three numbers as input and tell that if they can be the sides of the triangle or not:- */

// #include <iostream>
// using namespace std;
// int main()
// {
//     float num1, num2, num3;
//     cout << "Enter first number::";
//     cin >> num1;
//     cout << "Enter second number::";
//     cin >> num2;
//     cout << "Enter third number::";
//     cin >> num3;
//     if ((num1 + num2 > num3) && (num2 + num3 > num1) && (num3 + num1 > num2))
//     {
//         cout << "They can be the sides of the triangle.";
//     }
//     else
//     {
//         cout << "They can't be the sides of the triangle(Invalid)";
//     }
//     return 0;
// }

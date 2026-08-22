/* What's Ternary opeartors basic code writing way:-
        (condition) ? true : false;               */


// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number::";
//     cin>>num;
//     (num%2 == 0) ? cout<<"Even" : cout<<"ODD";
//     return 0;
// }




/*  Given the marks of the student. If the marks are greater than 33 print the result as pass otherwise fail(without using if else statements)  */

// #include<iostream>
// using namespace std;
// int main(){
//     float marks;
//     cout<<"Enter the marks of the student::";
//     cin>> marks;
//     (marks>33) ? cout<<"PASS" : cout<<"FAIL";
//     return 0;

// }




/* PREDICT the output:- */

// #include<iostream>
// using namespace std;
// int main(){
//     char x ;
//     int a = 2;
//     x = (a>0) ? 'a' : 'S';
//     cout<<"Value of x::"<<x<<endl;
//     cout<<"Value of a::"<<a<<endl;
//     return 0;
// }
/* OUTPUT ==> x = a, a = 2*/


/* PREDICT the output:- */

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     x = 5>8 ? 10 : 1 != 2 < 5 ? 20 : 30;
//     cout<<"Value of x::"<<x;
//     return 0;
    /* HERE we have to use Hierarchy concepts.
    First we have to solve right and then we have to move to the left side as ternary operators and assignment operators moves from right to left.
   >,>=,<,<= have more hierarachy power then ==,!=  */

//     /* OUTPUT ==>  x = 30 */

// }







/*        SWITCH STATEMENTS         */


/* Syntax ==>
switch(integer expression){
   case constant 1:
   do this;
   case constant 2:
   do this;
   case constant 3:
   do this;
   default:
   do this;} */



/* Write a program to input week number(1-7) and print day of the week name using switch case. */

// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"Enter a week Day's number::";
//     cin>>day;
//     switch(day){
//         case 1:
//             cout<<"Monday";
//             break;
//         case 2:
//             cout<<"Tuesday";
//             break;
//         case 3:
//             cout<<"Wednesday";
//             break;
//         case 4:
//             cout<<"Thursday";
//             break;
//         case 5:
//             cout<<"Friday";
//             break;
//         case 6:
//             cout<<"Saturday";
//             break;
//         case 7:
//             cout<<"Sunday";
//             break;
//         default:
//         cout<<"Enter a valid number from 1 to 7.";
//     }
//     return 0;

// }




/* How many days are there in each month in the non-leap year(using switch case):- */

// #include<iostream>
// using namespace std;
// int main(){
//     int month;
//     cout<<"Enter the Month's number::";
//     cin>>month;
//     switch((month<=7 && month%2!=0) || (month>=8 && month%2==0)){
//         case 1:
//         cout<<"31 Days";
//     }
//     switch(month==4 || month==6 || month==9 || month==11){
//         case 1:
//         cout<<"30 Days";
//     }
//     switch(month==2){
//         case 1:
//         cout<<"28 Days";
//     }
//     return 0;
// }






/* Write a program to create a calculator that performs basic arithmetic operations(add,subtract,multiply and divide) using switch case and functions. The calculator should input two numbers and an operator from the user:- */

// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     char op;
//     cout<<"Enter num1:";
//     cin>>num1;
//     cout<<"Enter operator(+,-,*,/):";
//     cin>>op;
//     cout<<"Enter num2:";
//     cin>>num2;
//     switch(op){
//         case '+':
//             cout<<num1+num2;
//             break;
//         case '-':
//             cout<<num1-num2;
//             break;
//         case '*':
//             cout<<num1*num2;
//             break;
//         case '/':
//             cout<<num1/num2;
//             break;
//         default:
//             cout<<"Invalid operator";
//     } return 0;

// }

   
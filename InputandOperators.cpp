// #include<iostream>
// using namespace std;
// int main(){
//     // Taking input from user

//     int a,b,sum;
//     cout<<"Enter a number:";
//     cin>>a;
//     cout<<"Enter another number:";
//     cin>>b;
//     sum = a+b;
//     cout<<"The sum of two numbers is:"<<sum;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//    int a,b,c;;
//    cout<<"Enter a number:";
//    cin>>a; 
//    cout<<"Enter another b number:";
//    cin>>b;
//    cout<<"Enter another c number:";
//    cin>>c;

//     cout<<(a==b==c)<<endl;// if operators are same then it will go from left to right
    
//     cout<<(a==(b==c))<<endl;// if brackets are used then first it will check the brackets
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     char a = 'J';// Any single character/digit/symbol can be stored in char data type in single quotes
//     cout<<a;
//     return 0;
    
// }




// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 'A';
//     cout<<(int)ch; // This process of converting one data type to another is called type casting.
//     return 0;      // Here we get ASCII value of character 'A' which is 65 as our output.
// }




// #include<iostream>
// using namespace std;
// int main(){
//     char ch = '0';
//     cout<<(int)ch; // Though 0 is an int but here it is in single quotes so it is treated as a character and we get its ASCII value which is 48 as our output.
//     return 0;

// }




// // ** Question:- Take Integer as input and print half of the number as output.**

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<< "Enter the value of a: ";
//     cin>>a;
//     cout<<a/(2.0);// This will give it's half value. We took 2.0 instead of 2 because if we take 2 then it will give integer value as output but we want decimal value as output for odd numbers so we took 2.0 which is a double value.
//     return 0;
// }



// //***Take the float input and print the fractional part of the real number:-***(Only for positive numbers)

// #include<iostream>
// using namespace std;
// int main(){
//     float a;
//     cout<< "Enter the value of a: ";
//     cin>>a;
//     int b = (int)a;
//     if(b<0) b = b-1;
//     float z = a - b;

//     cout<< "The fractional part of the number is: " << z;
//     return 0;
// }



//**********Hierarchy of Operators**********:-
//"Brackets have highest hierarchy then comes (*, /, %) then comes (+, -)".
// "Hierarchy of *(multiplication), / (division) is more than that of +(addition),-(subtraction)".
// "If operators have same hierarchy then it will go from left to right."

#include<iostream>
using namespace std;
int main(){
    int a = 2*3/4+4/4+8-2+5/8;// Here, 6/4 = 1(because  it's int) 4/4 = 1 5/8 = 0(because it's int) So,a = 1+1+8-2+0 = 8.
    cout<<a;
    return 0;
}
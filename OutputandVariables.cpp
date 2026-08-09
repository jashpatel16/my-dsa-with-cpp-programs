// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World!";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num1=15,num2=15,sum;
//     cout<<" num1:"<<num1<<endl;
//     cout<<" num2:"<<num2<<endl;
//     sum = num1 + num2;
//     cout<<"The sum is::"<<sum;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,sum;
//     cout<<"Enter num1::";
//     cin>>num1;
//     cout<<"Enter num2::";
//     cin>>num2;
//     sum = num1 + num2;
//     cout<<"The Sum Of Two Numbers is ::"<<sum;
//     return 0;

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int a=5,b=15,c=25,d=35;
//     a = a++;
//     cout<<a<<endl;
//     b = b--;
//     cout<<b<<endl;
//     c = ++c;
//     cout<<c<<endl;
//     d = --d;
//     cout<<d<<endl;
//     return 0;

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int a=15,b,c;
//     b = a++;//The value will be assigned to "a" first then it get +1 so the reult shows b=15 in post increment.
//     cout<<b<<endl;
//     c = ++a;//The value will get +1 before it get stored in "a" so we get c=17 in pre increment.
//     cout<<c<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//    cout<<5/2<<endl;//Here when we do not specify type then computer understand both as int and gives ans in int "2";
//    cout<<5/2.0<<endl;//Here when we add .0 to any number then computer understands it as float so gives ans in float "2.5";
//    cout<<5.0/2<<endl;//Here when we add .0 to any number then computer understands it as float so gives ans in float "2.5";
//    cout<<5.0/2.0<<endl;//Here when we add .0 to any number then computer understands it as float so gives ans in float "2.5";
//    return 0;

// }




// #include<iostream>
// using namespace std;
// int main(){
//     //Modulo = remainder, and to perform it we use "%" symbol.
//     cout<<23%4;//23/4 gives remainder 3 so by using modulo we get our desired ans(remainder = 3).
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     cout<<5%4<<endl;//5>4, so remainder is possible which is 1.
//     cout<<4%4<<endl;//4=4, so still remainder is possible which is 0.
//     cout<<2%4<<endl;//2<4, now remainder is not possible so no."2"(which is dividend) is itself considered as a remainder.
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     cout<<9%4<<endl;//if a%b then we get positive remainder.[9%4 = 1]
//     cout<<9%(-4)<<endl;//if a%(-b) then also we get positive remainder.[9%4 = 1]
//     cout<<(-9)%4<<endl;//if (-a)%b then we will get negative remainder.[9%4 = 1, but in negative so -1.]
//     cout<<(-9)%(-4)<<endl;//if (-a)%(-b) then also we will get negative remainder.[9%4 = 1, but in negative so -1.]
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     float Maths,CPF,WTF,BEEE,Percentage;
//     cout<<"Enter the marks of Maths:";
//     cin>>Maths;
//     cout<<"Enter the marks of CPF:";
//     cin>>CPF;
//     cout<<"Enter the marks of WTF:";
//     cin>>WTF;
//     cout<<"Enter the marks of BEEE:";
//     cin>>BEEE;
//     Percentage = (Maths+CPF+WTF+BEEE)/4;
//     cout<<"Percentage:"<<Percentage;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     float pi = 3.14, radius,area;
//     cout<<"Enter the Radius of Circle:";
//     cin>>radius;
//     area = pi*(radius*radius);
//     cout<<"Area of Circle:"<<area;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     float principalAmount,rateofInterest,timeinYears,simpleInterest;
//     cout<<"Enter Principal Amount:";
//     cin>>principalAmount;
//     cout<<"Enter Rate Of Interest:";
//     cin>>rateofInterest;
//     cout<<"Time period in Years:";
//     cin>>timeinYears;
//     simpleInterest = (principalAmount*rateofInterest*timeinYears)/100;
//     cout<<"Simple Interest (S.I.)::"<<simpleInterest;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     // In Boolean Datatype 0=False,1=True;
//     // Anything except "0 and false" will give 1 in output;
//     // "0 and false" give 0 in output;
//     bool flag1= true;
//     cout<<flag1<<endl;
//     bool flag2 = false;
//     cout<<flag2<<endl;
//     bool flag3 = 1;
//     cout<<flag3<<endl;
//     bool flag4 = 0;
//     cout<<flag4<<endl;
//     bool flag5 = 1234;
//     cout<<flag5<<endl;
//     bool flag6 = 0.45;
//     cout<<flag6<<endl;
//     bool flag7 = -1;
//     cout<<flag7<<endl;
//     bool flag8 = -1234;
//     cout<<flag8<<endl;
//     bool flag9 = -0.45;
//     cout<<flag9<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     cout<<(8>3)<<endl;// It will give ans 1(true);
//     cout<<(3>8)<<endl;// It will give ans 0(false);
//     cout<<(4>4)<<endl;// It will give ans 0(false);
//     cout<<(4>=4)<<endl;// It will give ans 1(true);
//     return 0;
// }
// Que number even or not-

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     if(n%2==0)
//     cout<<"even number";
//     else
//     cout<<"odd number";
//     return 0;
// }

// Que 2. Divisible 5 or not
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    if(n%5==0)
    cout<<"divisible by 5";
    else
    cout<<"not divisible by 5";
    return 0;
}*/
// Que 3. absolute value not-
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     if(n>=0)
//     cout<<n;
//     else
//     cout<<-n;//n<0  - - = +
//     return 0;
// }

// Que profit or loss
// #include<iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout<<"enter cost price: ";
//     cin>>cp;
//     int sp;
//     cout<<"enter the selling price";
//     cin>>sp;

//     if(sp>cp)
//     cout<<"profit";
//     if(sp==cp)
//     cout<<"no profit no loss";

//     if(sp<cp)
//     cout<<"loss";
//     return 0;
// }

//  2nd method
// #include<iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout<<"enter cost price: ";
//     cin>>cp;
//     int sp;
//     cout<<"enter the selling price";
//     cin>>sp;

//     if(sp>cp){
//     cout<<"profit is " <<sp-cp;
//     }
//   else if(sp<cp){
//     cout<<"loss is"<<cp-sp;
//   }

//     else {
//     cout<<"no profit no loss";
//     }
//     return 0;
// }

// Que three digit or not-

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     if(n>99 and n<1000)
//     cout<<"3 digit number";
//     else
//     cout<<"not a 3 digit number";
//     return 0;
// }

//  Que divisible by 5 and 3//both are true condition and operator mai dono true hone chayiye

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     if(n%5==0 && n%3==0)
//     // cout<<"divisible by 5 and 3" // 15,30,etc
//     else
//     cout<<" not divisible by 5 and 3 ";
//     return 0;
// }

// logical operator divisible bt 5 ||or 3  // OR( ||) operator mai 1 true and 1 false hoga to wo true  mana jayega
//  3,5,6,9,10,etc
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     if(n%5==0 || n%3==0)
//     cout<<"divisible by 5 or 3";
//     else
//     cout<<" not divisible by 5 or 3 ";
//     return 0;
// }

// TABLE PRINT ANY NUMBER-
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter any integer: ";
//     cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<< n << " * " <<i<<" = "<< n * i <<endl;

//     }
//     return 0;
//
// Que divisible by 5or 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     if(n%5==0||n%3==0){
//         cout<<"divisible by 5or  3";

//     }
//     else{
//         cout<<"not divisible by 5 or 3";

//     }
// return 0;
// }
// Que GREATEST of three  NUMBER -
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter first number: ";
//     cin>>a;

//   cout<<"enter second  number: ";
//     cin>>b;
//   cout<<"enter third number: ";
//     cin>>c;
//      if(a>b and a>c){
//          cout<<a<<"is greater ";

//      }
//     else if(b>a and b>c){
//          cout<<b<<"is greater ";
//     }
//       else{
//          cout<<c<<"is greater ";
//       }
//     return 0;
// }

// Que wap greatest of four number -
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int a,b,c,d;
//     cout<<"enter first number: ";
//     cin>>a;

//   cout<<"enter second  number: ";
//     cin>>b;
//   cout<<"enter third number: ";
//     cin>>c;
//     cout<<"enter fourth number";
//     cin>>d;
//      if(a>b and a>c and a>d){
//          cout<<a<<"is greatest ";

//      }
//     else if(b>a and b>c and b>d){
//          cout<<b<<"is greatest ";
//     }
//       else if (c>a and c>b and c>d){
//          cout<<c<<"is greatest ";
//       }
//       else{
//           cout<<d<<"is greatest";
//       }
//     return 0;
// }

//  Que is - student grade

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter marks : ";
//     cin>>n;
//     if(n>81 &&n<100){
//         cout<<"very good";

//     }
//     else if(n>61&&n<80){
//         cout<<"good";
//     }
//     else if(n>41&&n<60){
//         cout<<"Average";

//     }
//     else{
//         cout<<"Fail";
//     }
//     return 0;
// }

// Que number is prime or notprogram -

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"enter any integer ";
//     cin>>n;
//     if(n==0||n==1)
//     {
//         cout<<"not prime number";

//     }
//     if(n%2!=0){
//         cout<<"prime number ";

//     }
//     else{
//         cout<<"not prime number ";

//     }
//     return 0;
// }

// Que TERNARY OPERATOR -
// SYNTAX
//  expression 1?expression2:expression3; this is a syntax of ternary operator.
// #include<iostream>
// using namespace std;
// int main(){
//         int n;
//         cout<<"enter n: ";
//         cin>>n;
//         // (condition )? if true:if false;
//         (n%2==0)?cout<<"even":cout<<"odd";
// }

// Que - CALCULATER.CPP if  statement
// #include<iostream>
// using namespace std;
// int main(){
// int n1;
// cin>>n1;
// char op;
// cin>>op;
// int n2;
// cin>>n2;
// if(op=='+') cout<<n1+n2;
//     if(op=='-') cout<<n1-n2;
//     if(op=='*') cout<<n1*n2;
//     if(op=='/') cout<<n1/n2;
// return 0;
// }

// Que calculator by switch statement program/

// #include<iostream>
// using namespace std;
// int main(){
//     int n1; //number 1
//     cin>>n1;
//     char op;//operator
//     cin>>op;
//     int n2;//number 2
//     cin>>n2;
//   switch(op){
//     case'+':
//       cout<<n1+n2;
//       break;
//     case'-':
//       cout<<n1-n2;
//       break;
//      case'*':
//          cout<<n1*n2;
//         break;
//      case'/':
//         cout<<n1/n2;
//      default :
//         cout<<"invalid operator"<<endl;

//   }
// }

// Que- predict output //

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10, y=20;
//     if(x==y);
//     cout<<x<<""<<y;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=3, y,z;
//     y=x=10;// (rigt to left)
//     z=x<10; // ( <  this is false means 0)
// cout<<x<<""<<y<<""<<z;
// }

//  CHAPTER 3- LOOPS - Repetition of two or more statements
// (1) FOR LOOP
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=1; i<10;i++){
//         cout<<"hello world"<<endl;

//     }
// }
// print hello world n time by enter using user
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     for(int i=0;i<=n; i++){
//         cout<<"hello world "<<endl ;
//         cout<<"good bye "<<endl;
//     }
// }

// wap to print the numbers  1 to 100

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100;i++){
//         cout<<i<<endl;
//     }
// }

//  print all the even numbers from 1 to 100

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//     if(i%2==0)
//     cout<<i<<endl;
//     }
// }

// print the table of 19
// #include<iostream>
// using namespace std;
// int main(){
//  for(int i=19; i<=190;i+=19){
//      cout<<i<<endl;
//  }

// }

////A.P. Arithmatic progression
// Que wap A.P. 1,3,5,7,9....upto n terms
//  Method 1 mathematical class 10
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"enter n : ";
//      cin>> n;
//      //1 3 5 7 9 .....
//      for(int i=1;i<=2 * n-1;i+=2){
//          cout<< i << "  ";

//     }
// }

// 4 7 10 13..
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>> n;
//     //1 3 5 7 9 .....
//     for(int i=4;i<=3 * n+1;i+=3){
//         cout<< i << "  ";

//     }
// }

// 2nd method -using  extra variable and kepping 'i'  only for the iterations-

// ,4 7 10 13 16....
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>> n;

// int a=4;
// for(int i=1; i<n;i++){
//     cout<<a<<" ";
//     a= a+3;
// }
// }

// Display this GP -1 2 4 8 16 32.....upto n terms

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>> n;
// int a=1;
// for(int i=1;i<=n;i++){
//     cout<<a<<" ";
//     a=a*2;
// }
// }

// Highest factor  of a number 'n ' (other than itself)
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter n:";
// cin>>n;
// for(int i=n/2; i>=1;i--){
//     if(n%i==0)
//     cout<<i<<" ";
//     break;//to grt out of the loop;
// }

// }

// composite number or not //

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             cout<<"composite";
//             break;

//         }
//     }
// }

// prime or composite;//

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     bool flag =true;
//     for(int i=2;i<=n/2;i++){

//         if(n%i==0){
//             flag=false;
//             break;
//         }
//     }
//     if(flag==true) cout<<"prime";

//       else      cout<<"composite";

//         }

// While loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i =1;
//     while(i<=10){
//         cout<<i<<endl;
//         i++;
//     }
// }

// DO-WHILE LOOP-
// #include<iostream>
// using namespace std;
// int main(){
//     int i =1;
//     do{
//         cout<<i<<endl;
//         i++;
//     }while(i<=10);
// }

// predict the output
// #include<iostream> /// this is  infinite loop
// using namespace std;
// int main(){
//     int i;

//   while(i=10){//assign value
//       cout<<i<<endl;
//       i=i+1;
//   }
//   }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=4, y=0;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y)
//          continue;
//     else
//         cout<<x <<" "<<y<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;

//     }

// sumofdigit.cpp

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//     int id=n%10;
//     n/=10;
//     sum +=id;
// }
// cout<<sum;

// }

// reverse program forloop

//   #include<iostream>
//   using namespace std;
//   int main(){
//       int i, n;
//       cout<<"enter n:";
//       cin>>n;
//       for(int i=n;i>=1;i--){
//           cout<<i<<endl;       }

//   }

// while loop reverse
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a numer:";
//     cin>>n;
//     int r=0;
//     while(n!=0){
//         int ld=n%10;//ld last digit
//         r*=10;
//         r+=ld;
//         n/=10;
//     }
//     cout<<r;
// }

//   sumofdigit1ton;

//   #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a numer:";
//     cin>>n;
//     int sum=0;

//   for(int i=1;i<=n;i++){
//       sum += i;

//   }
//   cout<<sum;

// }

//   facorial.cpp

//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a numer:";
//     cin>>n;
//     int fact=1;

//   for(int i=1;i<=n;i++){
//       fact *= i;

//   }
//   cout<<fact;

// }

// PATTERN PRINTING IMP CHAPTER
// print the patter
// ****
// ****
// ****
// ****

// #include<iostream>
// using namespace std;
// int main(){                //  m= rows n= columns
//     int n;
//     cout<<"enter number of rows :";
//     cin>>n;
//     for(int i=1;i<n; i++){
//         for(int j=1; j<=n;j++){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
// }

// 1234
// 1234
// 1234
// 1234

// #include<iostream>
// using namespace std;
// int main(){                //  m= rows n= columns
//     int n;
//     cout<<"enter the side of square :";
//     cin>>n;
//     for(int i=1;i<n; i++){
//         for(int j=1; j<=n;j++){
//             cout<<j<<" " ;

//         }
//         cout<<endl;
//     }
// }

// 1111
// 2222
// 3333
// 4444
// 5555

// #include<iostream>
// using namespace std;
// int main(){                //  m= rows n= columns
//     int n;
//     cout<<"enter the side of square :";
//     cin>>n;
//     for(int i=1;i<=n; i++){
//         for(int j=1; j<=n;j++){
//             cout<<i<<" " ;

//         }
//         cout<<endl;
//     }
// // }

// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE
// #include<iostream>
// using namespace std;
// int main(){                //  m= rows n= columns
//     int n;
//     cout<<"enter the side of square :";
//     cin>>n;
//     for(int i=1;i<n; i++){
//         for(int j=1; j<=n;j++){
//             cout<<(char)(j+64)<<" " ;

//         }
//         cout<<endl;
//     }
// }

// AAAA
// BBBB
// CCCC

// #include<iostream>
// using namespace std;
// int main(){                //  m= rows n= columns
//     int n;
//     cout<<"enter the side of square :";
//     cin>>n;
//     for(int i=1;i<=n; i++){
//         for(int j=1; j<=n;j++){
//             cout<<(char)(i+64)<<" " ;

//         }
//         cout<<endl;
//     }
// }

// *
// **
// ***
// ****

// #include<iostream>
// using namespace std;
// int main(){                //  m= rows n= columns
//     int n;
//     cout<<"enter number of rows :";
//     cin>>n;
//     for(int i=1;i<=n; i++){
//         for(int j=1; j<=i;j++){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
// }

// ****
// ***
// **
// *
// #include<iostream>
// using namespace std;
// int main(){                //  m= rows n= columns
//     int n;
//     cout<<"enter number of rows :";
//     cin>>n;
//     for(int i=1;i<=n; i++){
//         for(int j=1; j<=n-i+1;j++){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
// }

// Function
// #include<iostream>
// using namespace std;
// void name(){
//     cout<<"hello"<<endl;

//     cout<<"ankit singh" <<endl;

// }
// int main(){
//     name();
//     cout<<"i am bca student"<<endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;
// void india(){
//     cout<<"you are in usa"<<endl;
//     return ;
// }
// void usa(){

//     cout<<"you arein india " <<endl;
//   return ;
// }
// int main(){
//     cout<<"you are in india"<<endl;

//     india();
//     usa();

//     return 0;

// }

// sum.cpp
// #include<iostream>
// using namespace std;
// void sum(int a, int b){
//     cout<<a+b;
// }

// int main(){
//   sum(97,90);
//   return 0;
// }

// return type

// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//   cout<<sum(97,90);
//   return 0;
// }

// library.cpp

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     cout<<sqrt(8); //library function
// }

// cbrt

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     cout<<cbrt(8); //library function
// }

// min

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     cout<<min(23,56); //library function
// }

// pow

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     cout<<pow(8,5); //library function
// }

// COMBINATION .CPP

// #include<iostream>
// using namespace std;
// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;

// }

// int main(){
//     int n  ;
//     cout<<"enter  n :";
//     cin>>n;
//     int r;
//     cout<<"enter r ";
//     cin>>r;
//     int a=fact(n);
//     int b=fact(r);
//     int c=fact(n-r);
//     cout<<a/(b*c);
//     return 0;
// }

// // // permutation
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;

// }

// int main(){
//     int n  ;
//     cout<<"enter  n :";
//     cin>>n;
//     int r;
//     cout<<"enter r ";
//     cin>>r;
//     int a=fact(n);

//     int c=fact(n-r);
//     cout<<a/c;
//     return 0;
// }

// // PASCAL TRIANGLE

//  #include<iostream>
// using namespace std;

//  int fact(int n){
//  int f = 1;
//     for(int i = 1; i <= n; i++){
//         f *= i;
//     }
//     return f;
// }

//  int ncr(int n, int r){
//     return fact(n) / (fact(r) * fact(n - r));
// }

// int main(){
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= n - i - 1; j++){
//             cout << " ";
//         }
//         for(int j = 0; j <= i; j++){
//             cout << ncr(i, j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // Function to calculate the area of a rectangle
// float area1(float length, float width) {
//     return length * width;
// }

// // Function to calculate the area of a triangle
// float area2(float base, float height) {
//     return 0.5 * base * height;
// }

// // Function to calculate the area of a circle
// float area3(float radius) {
//     return 3.14 * radius * radius;
// }

// int main() {

//     float length, width, base, height, radius;

//     // For Rectangle
//     cout << "Enter length and width of the rectangle: ";
//     cin >> length >> width;
//     cout << "Area of the rectangle: " << area1(length, width) << endl;

//     // For Triangle
//     cout << "Enter base and height of the triangle: ";
//     cin >> base >> height;
//     cout << "Area of the triangle: " << area2(base, height) << endl;

//     // For Circle
//     cout << "Enter radius of the circle: ";
//     cin >> radius;
//     cout << "Area of the circle: " << area3(radius) << endl;

//     return 0;
// }

// pointers

// #include<iostream>
// using namespace std;
// int main(){
//     int x=20;
//  cout<<x<<endl;
//  return 0;

//}

// address &  alag alag address aayega har baar

// #include<iostream>
// using namespace std;
// int main(){
//     int x=20;
//  cout<<&x<<endl;
//  return 0;
// }

//  x orr y alag alag dabbe hain
// #include<iostream>
// using namespace std;
// int main(){
//     int x=20;
//     int y=3;
//  cout<<x<<endl;
//  cout<<&y<<endl;
//  return 0;
// }

// swap two numbers 
// #include<iostream>
// using namespace std;
// void swap(int x, int y){
//     int temp=x;
//     x=y;
//     y=temp;

// }
// int main(){
//     int x=20;
//     int y=5;
//     cout<<x<<"  "<<y<<endl;
//     int temp=x;
//     x=y;
//     y=temp;
//     cout<<x<<"  "<<y<<endl;
// }

// #include<iostream>
// using  namespace std;
// int main(){
//     int x=3;
//     int *p=&x; //address of x 0x11.
//     cout<<&x<<endl;
//     cout<<p<<endl;
//     return 0;
// }

// pointers = access the value of the varialbl whose address is in the pointer - using star operator

// #include<iostream>
// using  namespace std;
// int main(){
//     int x=3;
//     int *p=&x; //address of x 0x11..kuch bhi aa sakta hai
//     cout<<&x<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl; // star operatorn -fatch the value
//     cout<<x<<endl;
//     cout<<&p<<endl;
//     return 0;
// }

// #include<iosream>
// using namespace std;
// int main(){
//     int x =20;
//     int *ptr=&x;
//   cout<<x<<endl;

//     *ptr=23; // x=23
// cout<<x<<endl;
//     return 0;

// }

// RECURSION= function calling itself this kind of recursion
// 1) repetion 2)infinite loop  3)
// #include<iostream>
// using namespace std;
//  void  greet(){
//      cout<<"hey"<<endl;
//      greet();
//  }

// int main(){
//   greet();

// }

// print n to 1

// #include<iostream>
// using namespace std;
//  void  print(int n){
// if(n==0) return;
//      cout<<n<<endl;//print
//       print(n-1);//calling
//  }

// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;

//   print(n);

// }

// 1 to n
// 1st method

// #include<iostream>
// using namespace std;
//  void  print(int x , int n){
// if(x>n) return;
//      cout<<x<<endl;//print
//       print(x+1,n);//calling
//  }

// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;

//   print(1,n);

// }

// second method

// #include<iostream>
// using namespace std;

// void  print(int n){
// if(n==0) return; // base case

//       print(n-1); //call
//       cout<<n<<endl; //work
//  }

// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;

//   print(n);

// }

// CALCULATE THE FACTORIAL OF N USING RECURSION

// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1) return 1;
//     return n *fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<fact(n);

// }

// power calculate

// #include<iostream>
// using namespace std;
// int power(int a ,int b){
//     if(b==0) return 1;
//     return a*power (a,b-1);
// }

// int main(){
//     int a,b;
//     cout<<"enter a base  and b exponent :";
//     cin>>a>>b;
//     cout<<a<<" raised to the power " <<b <<"is : " <<power(a,b);

// }

// fibonacci number calculate

// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1|| n==2) return 1;
//     return fibo(n-1)+fibo(n-2);
// }

// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<fibo(n);

// }

// ARRAYS
// list - list of integer -  roll no. 11 ,2 3,4 56,#
// list of float
// list of float

// #include<iostream>
// using namespace std;
// int main(){
//     //5 integer =2 ,34,5 6,7,
//     int arr[5]; //declaration an ARRAYS
//     arr[0]=6; // initialize
//     arr[1]=3;
//     arr[2]=5;
//     arr[3]=4;
//     arr[4]=1;

//     for(int i=0;i<=4; i++){
//         cout<<arr[i]<<" ";

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     //5 integer =2 ,34,5 6,
//     int arr[5];
//     cout<<"enter array element" ;
//     for(int i=0;i<=4;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<=4; i++){
//         cout<<arr[i]<<" ";

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5]={4,3,45,67,8};
//// output
//     for(int i=0;i<=4;i++){
//         cout<<arr[i]<<endl;

//     }
// }

// reverse an array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,5,4}; // declaration and initialization
//     for(int i=4; i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }

// passing array to function

// #include<iostream>
// using namespace std;
// void change(int x){
//     x=8;
// }
// int main(){
//     int x=3;
//     cout<<x<<endl;
//   change(x); // pass by value
//     cout<<x<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3]={3,5,7};
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// calculate the sum of all the elements in the given array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,6,7,5,4,78};

//         int sum=0; // initialize
//         for(int i=0;i<6;i++){
//             sum+=arr[i];  // sum ke aandar print kara do
//          }
//          cout<<sum;

//   }

// Take user
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of elements in an array :";
//     cin>>n;
//     int arr[50];
//     cout << "Enter " << n << " elements of the array:" << endl;
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//         int sum = 0; // initialize
//     for(int i = 0; i < n; i++) {
//         sum += arr[i];  // sum ke aandar print kara do
//     }
//     cout << "Sum of array elements: " << sum << endl;

//     return 0;
// }

// calculate the product of all elements in an array
// sizeof operator
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//      int n = sizeof(arr) / sizeof(arr[0]);

//     int product = 1;
//     for (int i = 0; i < n; i++) {
//         product *= arr[i];
//     }

//     cout << "Product of array elements: " << product <<endl;

//     return 0;
// }

// find the product using an array

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5; // Manually specify the size of the array

//     int product = 1;
//     for (int i = 0; i < n; i++) {
//         product *= arr[i];
//     }

//     cout << "Product of array elements: " << product << endl;

//     return 0;
// }

// sum of two number using friend class

#include <iostream>
using namespace std;
class ankit; // declared
class ankush
{
private:
    int money = 10;
    friend void rohit(ankush, ankit);
};

class ankit
{
private:
    int money = 20;
    friend void rohit(ankush, ankit);
};
void rohit(ankush r1, ankit r2)
{
    cout << "sum : =" << r1.money + r2.money;
}
int main()
{
    ankush obj1;
    ankit obj2;
    rohit(obj1, obj2);
}

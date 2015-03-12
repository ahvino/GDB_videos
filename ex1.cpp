#include <iostream>
#include <vector>

using namespace std;

int factorial(int x){
     int y;
     if(x <= 1){ return 1;}
          y = x* factorial(x-1);
          return y;
}

int initialize(){
     int p;
     for(int i = 1; i <= 5; i++){
          p = p*i;
     }
     return p;
}

bool leap_year(){
     int year;

     cout <<"Please enter the year in question:  ";
     cin >> year;

     if(year % 4 == 0 && year %100 != 0){
          cout <<"\nYes, " << year <<" is a leap year.";
          return true;
     }

     else {
          cout <<"\nNo, " << year <<" is not a leap year.";
          return false;
     }
}

void mysort(){

     int first, second, third;
     int a,b,c;

     if(a > b && a > c){
          first = a;
          if(b > c) {
               second = b;
               third = c;
          }
          else {
               second = c;
               third = b;
          }
          cout <<"first:  "<<  first << endl;
          cout <<"second: "<< second << endl;
          cout <<"third:  "<< third << endl;
     }
     if(b > a && b > c){
          first = b;
          if(a > c) {
               second = a;
               third = c;
          }
          else {
               second = c;
               third = a;
          }
          cout <<"first:  "<<  first << endl;
          cout <<"second: "<< second << endl;
          cout <<"third:  "<< third << endl;
     }
     if(c > b && c > c){
          first = c;
          if(b > a) {
               second = b;
               third = a;
          }
          else {
               second = a;
               third = b;
          }
          cout <<"first:  "<<  first << endl;
          cout <<"second: "<< second << endl;
          cout <<"third:  "<< third << endl;
     }
}

int main(){


while (1){
     int number;
     cout <<"Enter 0 to quit" << endl;
     cout <<"Enter 1 to find a factorial" << endl;
     cout <<"Enter 2 to find to look at an unitialized var " << endl;
     cout <<"Enter 3 to run sort on unitialized var's" << endl;
     cout <<"Enter 4 to find out if a year is a leap year" << endl;


     cout << "Enter a number and we'll run a function: ";
     cin >> number;

     if(number == 0) {return 0;}
     if(number == 1){
          cout << "enter another number: ";
          int x;
          cin >> x;
          cout << "let's find the factorial of " << x << endl;
          cout << factorial(x) << endl;
//          cout << y << endl;
     }
     if(number == 2){
          cout <<"here we'll call a function that will do some math";
          cout <<" without first initializing" << endl;
          cout << initialize() << endl;
     }
     if(number == 3){
          cout <<"here are some variables that haven't been initialized ";
          cout <<"but we'll do something with them anyways" << endl;
          cout << initialize() << endl;
          mysort();
     }
     if(number == 4){
          leap_year();
     }
     cout << endl;
     cout << endl;
     }

     return 0;
}

#include <iostream>
using namespace std;
#include "../include/stringLib.h"



void displayOptionMenu(){
char str1[100]="";
char str2[100]="";
char testStr[100]="";
int opNum=0; 
  cout <<"Choose a string operation to apply(e.g 1,2,3,4) : \n";
  cout<<"1-toUpperCase \n2-toLowerCase\n3-strCompare\n4-strCopy\n";
   
cin>>opNum;
 if(cin.fail()){
  cout<<"Unvalid , Enter a digit from 1 to 4 not a character!";
  return;
 }
switch(opNum){
case 1:
cout<< "Enter a string to be upperCased : \n";
cin>>testStr;
toUpperCase(testStr);
break;

case 2:
cout<< "Enter a string to be lowerCased : \n";
cin>>testStr;
toLowerCase(testStr);
break;

case 3:
cout<< "Enter 2 strings to be compared: \n";
cin>>str1;
cin>>str2;
strCompare(str1,str2);
break;

case 4:
cout<< "Enter 2 strings to be copied (e.g 1st str to be copied , 2nd str copied into): \n";
cin>>str1;
cin>>str2;
strCopy(str1,str2,100);
break;

default:
cout<<"unvalid choice!\n";
}
}





int main() {    
 displayOptionMenu();
   


    return 0;
}
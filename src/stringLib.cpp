#include "iostream"
using namespace std;



void toUpperCase(char* str)
{
    cout<<"Upper case: ";
    for (int i=0; str[i]!='\0';i++){
    if(str[i]>='a'&& str[i]<='z'){
         str[i]=str[i]-32;
    }
    }
cout<<str;
    cout<<"\n";
}




void toLowerCase(char* str)
{
    cout<<"Lower case: ";
    for (int i=0; str[i]!='\0';i++){
    if(str[i]>='A'&& str[i]<='Z'){
         str[i]=str[i]+32;
    }
    }
    cout<<str;
 cout<<"\n";
}


int strCompare(const char str1[],const char str2[]){
    
for(int i=0;str1[i]!='\0' || str2[i]!='\0';i++){
if(str1[i]!=str2[i]){
    cout<<"The 2 strings are not compatible!\n";
    return -1;
}

}
cout<<"The 2 strings are identical!\n";
return  1;
}


void strCopy(char str1[],char str2[]){
cout<< "\nThe two strings before copying are :";
cout<< "\n String 1 :" <<str1 ;
cout<< "\n String 2 :" <<str2 ;

int i=0;
for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
str2[i]='\n';
cout<< "\nThe two strings after copying are : ";
cout<< "\n String 1 :" <<str1 ;
cout<< "\n String 2 :" <<str2 ;
}

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
strCopy(str1,str2);
break;
default:
cout<<"unvalid choice!\n";
}
}
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


void strCopy(char str1[],char str2[],int maxSize){
int len=0;
for(int i=0;str1[i]!='\0';i++){
len++;
}

 if(len>=maxSize){
    cout<<"\nThe first string is too long than the second one, can't be copied!";
    return;
}
cout<< "\nThe two strings before copying are :";
cout<< "\n String 1 :" <<str1 ;
cout<< "\n String 2 :" <<str2 ;

int i=0;


for(i=0;str1[i]!='\0';i++){
 
        str2[i]=str1[i];
    }
str2[i]='\0';
cout<< "\nThe two strings after copying are : ";
cout<< "\n String 1 :" <<str1 ;
cout<< "\n String 2 :" <<str2 ;
}


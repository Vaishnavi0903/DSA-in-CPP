// #include <iostream>
// using namespace std;
// int main()
// {
/*int arr[4]={0,1,2,3};
int * ptr;
ptr = &arr[0];
cout<<ptr;
return 0;
}*/

//*****************CREATION OF 1-D ARRAY************/

/*int arr[3]={1,2,3};
for (int i=0 ; i<3 ; i++){
    cout<<arr[i]<<" ";
}
return 0;
}*/

//*****************Copy operation on 1-D ARRAY**************/
/* int a[10], b[10], n;
 cout << "enter the number of elements in array";
 cin >> n;
 cout << "enter the contents of the array";
 for (int i = 0; i < n; i++)
 {
     cin >> a[i];
 }
 for (int j = 0; j < n; j++)
 {
     b[j] = a[j];
 }
 return 0;
}*/

//*******************delete operation on 1-D array*****************
/*  int a[10];
  int i, pos, n;
  cout << "enter the number of elements in array" << endl;
  cin >> n;
  cout << "enter " << n << " array elements" << endl;
  for (i = 0; i < n; i++)
  {
      cin >> a[i];
  }
  cout << "enter the position of element from which you want to delete 2 element" << endl;
  cin >> pos;
  for (i = pos-1; i < n; i++)
  {
      a[i] = a[i + 2];
  }
  for (i = 0; i < n - 2; i++)
  {
      cout << a[i] << " ";
  }
  return 0;
}*/

//***********************INSERTING AN ELEMENT IN ARRAY******************

/* int a[10], n, i, ele, pos;
 cout << "enter the number of elements of array";
 cin >> n;
 cout << "enter the contents of array:" << endl;
 for (i = 0; i < n; i++)
 {
     cin >> a[i];
 }
 cout << "enter the element you want to insert";
 cin >> ele;
 cout << "enter the position at whic you want to insert the element";
 cin >> pos;
 for (i = n; i >= pos; i--)
 {
     a[i] = a[i - 1];
 }
 a[pos - 1] = ele;

 for (i = 0; i < n+1 ; i++)
 {
     cout << a[i] << " ";
 }
 return 0;
}*/

//***************************SEARCHING AN ELEMENT IN AN ARRAY******************

/*int a[7], ele, n, i;
cout << "enter the number of elements in the array";
cin >> n;
cout << "enter the contents of array";
for (i = 0; i < n; i++)
{
    cin >> a[i];
}
cout << "enter the element you want to search";
cin >> ele;
for (i = 0; i < n; i++)
{
    if (a[i] == ele)
    {
        cout << "postion of " << ele << " is " << i + 1 << endl;
        cout << "index of " << ele << " is " << i << endl;
    }
}
return 0;
}*/

//************************SORTING ELEMENT USING ARRAY****************

/*int a[9] , n ,i , j ;
cout<<"enter the number of elements in array";
cin>>n;
cout<<"enter the contents of the array";
for(i=0 ; i<n ; i++){
     cin>>a[i];
}
cout<<"elements in ascending order are:";
for (i=0 ; i<n ; i++){
    for (j=0 ; j<n-i-1 ; j++){
        if (a[j]>a[j+1]){
            int temp;
              temp = a[j+1];
              a[j+1]=a[j];
              a[j]=temp;

        }
    }
}
for(i=0 ; i<n ;i++){
    cout<<a[i]<<" ";
}

return 0;
}*/

//************************INITIALIZING 2D ARRAY IN THE PROGRAM ***************

/*   int array[3][4] = {
       {0, 1, 2, 3}, {3, 4, 5, 6}, {6, 7, 8, 9}};


   for (int i=0;i<3;i++){
       for (int j=0;j<4;j++){
           cout<<array[i][j]<<" ";
       }
   }
   return 0;
}*/

//**************POLYNOMIAL USING ARRAYS********************************

// A] CREATION USING POLYNOMIAL

//*******************REVERSE A STRING********************
/*
#include<iostream>
#include<string.h>
using namespace std;

void reverse(string str){
       for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
       }
}
int main(){
     string s= "vaishnavi";
     reverse(s);
     return 0;
}
*/

//************************CONCATINATE A STRING ************************
/*#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50], str2[50];
    cout << "enter first string";
    cin >> str1;
    cout << "enter second string";
    cin >> str2;
    int i, j;
    // strcat(str1,str2);
    //  cout<<"the string after concatenation is:"<<str1;
    for (i = 0; str1[i] != '\0'; i++)
    {
    }
    for (j = 0; str2[j] != '0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';

cout << "the string after concatenation is:" << str1;
return 0;
}*/

//****************************************LENGTH OF STRING**************
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[50];
    cout<<"enter the string :"<<endl;
    cin>>str;
   // cout<<strlen(str);      //in-built function
   int count=0;
   for (int i=0;str[i]!='\0';i++){
    count++;
   }
   cout<<"length of string is "<<count;


    return 0;
}
*/

//*******************comparing two strings**********************

/*#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "enter the first string:" << endl;
    cin >> str1;
    cout << "enter the second string:" << endl;
    cin >> str2;
    if (strcmp(str1, str2)==0)
    {
        cout << "strings are equal" << endl;
    }
    else
    {
        cout << "strings are not equal";
    }
    return 0;
}*/

//********************************palindrome or not*****************

/*#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[20], str2[20];
    int i, j, len;
    cout << "enter a string" << endl;
    cin >> str1;
    len = strlen(str1) - 1;
    for (i = 0;i<=len;i++)
    {
            str2[i]=str1[len-i];
    }
    int count=0;
    cout<<str2<<endl; 
    for(i=0;i<=len;i++){
        if (str1[i]=str2[i])
        {
            count++;
        }
    }

if (count==len)
{
    cout<<"yes";
}
else
{
    cout<<"no";
}


    return 0;
}*/

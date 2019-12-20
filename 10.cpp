#include<stdio.h>
#include<conio.h>
int main()
{
 float salary ,total;
 char gender=male;
 if(gender==male)
 {
 	total=salary+(salary*.05)+500;
 }
 else
 {
 	total=salary+(salary*.10)+500;
 }
 return 0;
}

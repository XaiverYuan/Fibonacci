#include<stdio.h>
static int arr[50];//this is used for storing value for space
static int time[50];//how many times they asked for value in i the place
int normal(int n){
  time[n]++;//to see how many times they ask value for n th number
  return n<3?1:normal(n-1)+normal(n-2);
}
int space(int n){//store value, which will be faster
  if (n<3)return 1;
  if (arr[n]){
    return arr[n];
  }
  arr[n]=space(n-1)+space(n-2);
  return arr[n];
}
int spaceX(int n){//this is the interface, some how like java public method
  arr[1]=arr[2]=1;
  return space(n);
}
int iterative(int n){//no recursive
  int a=1;
  int b=1;
  int c;
  for(int i=2;i<n;i++){
    c=a+b;
    a=b;
    b=c;
  }
  return c;
}
int main(){
  printf("%d\n",normal(44));
  for (int i=0;i<50;i++){
    printf("%2d %5d\n",i,time[i]);
  }
}

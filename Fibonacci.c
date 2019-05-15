#include<stdio.h>
#define MAX (50)
static int arr[MAX];//this is used for storing value for space
static int time[MAX];//how many times they asked for value in i the place
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
void write_time(FILE *fp){
  fprintf(fp,"index  called time\n");
  for(int i=0;i<MAX;i++){
    fprintf(fp,"%5d  %10d\n",i,time[i]);
  }
}
void write_arr(FILE *fp){
  fprintf(fp,"index  Fibonacci\n");
  for(int i=0;i<MAX;i++){
    fprintf(fp,"%5d  %10d\n",i,arr[i]);
  }
}
void show_time(){
  write_time(stdout);
}
void show_arr(){
  write_arr(stdout);
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
  printf("%d\n",spaceX(44));
  show_arr();
  show_time();
}

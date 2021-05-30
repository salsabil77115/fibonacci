#include <iostream>

using namespace std;
int fibonacci(int n){
if(n==0||n==1){return n;}
else{
    return fibonacci(n-1)+fibonacci(n-2);
}
}
void multiplication(int m1[2][2],int m2[2][2])
{
    int x = (m1[0][0] * m2[0][0])+(m1[0][1] * m2[1][0]);
    int y = (m1[0][0] * m2[0][1])+(m1[0][1] * m2[1][1]);
    int z = (m1[1][0] * m2[0][0])+(m1[1][1] * m2[1][0]);
    int w = (m1[1][0]* m2[0][1])+(m1[1][1] * m2[1][1]);

    m1[0][0] = x;
    m1[0][1] = y;
    m1[1][0] = z;
    m1[1][1] = w;
}
void power(int Fib[2][2], int n)
{
  int i;
  int M[2][2] = {{1,1},{1,0}};
    for (i = 1; i < n; i++)
      multiplication(Fib, M);
}
int Pfibonacci(int n)
{
  int Fib[2][2] = {{1,1},{1,0}};
  if (n == 0||n==1)
      return n;
  power(Fib, n-1);

  return Fib[0][0];
}
int iterationfibonacci(int n){
    int arr[n+2];
    arr[0]=0;
    arr[1]=1;
   
for(int i=2;i<=n;i++){
        arr[i] = arr[i - 1] + arr[i - 2];


}
    return arr[n];


}

int main()
{
int num=0;
cout<<"Enter number: ";
cin>>num;
cout<<"Recusion fibonacci is :"<<fibonacci(num)<<endl;
cout<<"powering fibonacci is :"<<Pfibonacci(num)<<endl;
cout<<"iteration fibonacci is :"<<iterationfibonacci(num)<<endl;;

    return 0;
}

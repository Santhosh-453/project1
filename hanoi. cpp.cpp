#include<iostream.h>
//using namespace std:
void TOH (int n, char sour,char Aux, char Des)
{
       if(n==1)
       {
       cout<<"Move Disk"<<n<<"from"<<sour<<"to"<<Des<<endl;
       return;
       }
	   TOH(n-1,sour,Des,Aux);
       cout<<"Move Disk"<<n<<"from"<<sour<<"to"<<Des<<endl;
       TOH(n-1,Aux,sour,Des);
       }
       int main()
       {
	      int n;
	      cout<<"Enter no. of disks:";
	      cin>>n;
		    TOH(n,'A','B','C');
		    return 0;


//»—д«гћ нЎ»Џ е—гнд Ён ё«Џѕ…   яжд гд 7 дћг Ћг н д«ё’ «бе—гнд »«б«Џѕ«ѕ «бЁ—ѕн… Ќ м н’б «бм дћг… ж«Ќѕ… 

#include<iostream>
using namespace std ; 
int main()
{
	   int i,j;
	for(i=1 ; i<=7 ; i=i+2)
	{
	 for(j=i ; j<=7 ; j=j+2)
		cout<<" ";
			 for(j=1 ; j<=2*i-1 ; j=j+2)
		cout<<"*";
		  cout<<endl;
	}
	 int c,k;
	for(c=5 ; c>=1 ; c=c-2)
	{
	 for(k=5 ; k>=1 ; k=k-2)
		cout<<" ";
			 for(k=1 ; k<=2*c-1 ; k=k+2)
		cout<<"*";
		  cout<<endl;
	}
	system("pause");
	return 0 ;
}

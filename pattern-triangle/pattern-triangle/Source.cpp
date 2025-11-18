//»—д«гћ нЎ»Џ ‘яб «бдћг жняжд Џѕѕ «бдћг Џѕѕ Ё—ѕн жняжд »ѕ«н е« гд «бж”Ў жбн” гд «жб «б”Ў—

#include<iostream>
using namespace std ;
int main()
{
       int i,j;
	for(i=1;i<=9;i=i+2)
	{
	 for(j=i;j<=9;j=j+2)
		cout<<" ";
			 for(j=1;j<=2*i-1;j=j+2)
		cout<<"*";
		  cout<<endl;
	}  
	system("pause");
	return 0 ;
}

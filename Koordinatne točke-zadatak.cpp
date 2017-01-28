#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() { 

//leonard
	double x1,x2,y1,y2,a,b,c,d,UT;
	cout<<"Unesene koordinate za tocku A su: ";
	cin>>x1>>y1;
	cout<<"Unesene koordinate za tocku B su: ";
	cin>>x2>>y2;
	a=(x2-x1);
	b=(y2-y1);
	c=pow(a,2);
	d=pow(b,2);
	UT=sqrt(c+d);
	cout<<"Udaljenost tocaka A i B je: "<<UT;
	cout<<endl;
		
	system("PAUSE");
	return 0;
}

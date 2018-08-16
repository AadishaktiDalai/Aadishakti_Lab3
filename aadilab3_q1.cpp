//Library
#include <iostream>
using namespace std;
int main(){
    cout <<"hello"<< endl;
    //Declaring variables of all types
    int a;
    float flt;
    char chr;
    bool blo;
    double db;
	// Initialising variables
	a=27;
	flt=2.34;
	chr='a';
	blo=true;
	db=27.1234567;
	//Displaying values
	cout<<a<<endl;
	cout<<flt<<endl;
	cout<<chr<<endl;
	cout<<blo<<endl;
	cout<<db<<endl;
	//Displaying the sizes of data types 
	cout<<"size of a =" << sizeof(a)<< endl;
	cout<<"size of flt ="<<sizeof(flt)<<endl;
	cout<<"size of chr ="<<sizeof(chr)<<endl;
	cout<<"size of blo ="<<sizeof(blo)<<endl;
	cout<<"size of db ="<<sizeof(db)<<endl;
  //Return zero
return 0;
}

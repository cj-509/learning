#include <iostream>
#include <string>

using namespace std;


//functions to covert between celcius and Farenheit
double toCelcius(double f);
double toFarenheit(double c);
int main()
{
	char input;
	double degree;	

	cout<<"=============================================="<<endl;
	cout<< "\t\t" <<"***** Welcome *****"<<endl;
	cout<<"=============================================="<<endl;
	cout<<" 	What are you converting to?"<<endl;
	cout<<"Enter 'F' for Farenheit or 'C' for Celcius: ";
	cin>>input;
	cout<<"=============================================="<<endl;
	if(input == 'F' || input == 'f'){
		cout<<"Enter your temperature in 'C': ";
		cin>>degree;
		cout<<"=============================================="<<endl;
		cout<<"\t\t"<< degree <<"°C = " << toFarenheit(degree)<<"°F"<<endl;
		cout<<"=============================================="<<endl;
	}

	else if(input == 'C' || input == 'c'){
		cout<<"Enter your temperature in '°F': ";
		cin>>degree;
		cout<<"=============================================="<<endl;
		cout<<"\t\t"<< degree <<"°F = " << toCelcius(degree)<<"°C"<<endl;
		cout<<"=============================================="<<endl;
	}
	else{
		cout<<"***********You didn't enter a valid input );***********";
	}
	return 0;
}

double toCelcius(double f){
	double resultToCelcius;
	resultToCelcius = (f - 32.0) * 5/9;
	return resultToCelcius;
}

double toFarenheit(double c){
	double resultToFarenheit;
	resultToFarenheit = (c * 9/5) + 32.0;
	return resultToFarenheit;
}
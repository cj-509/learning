#include <iostream>

using std::cout;
using std::endl;
char position[3][3] = {
	{'1', '2', '3'},
	{'4', '5', '6'},
	{'7', '8', '9'}
};
void board();

int main(){
	cout <<postion[2][0]<<endl;
	
	board();
	return 0;

}



void board(){
	cout <<"     "<<"   |   "<<"  |  "<<endl;
	cout <<"     "<<position[0][0] << "  |  "<<position[0][1] << "  |  " <<position[0][2]<<endl;
	cout <<"   __"<<"___|___"<<"__|_____"<<endl;
	cout <<"     "<<"   |   "<<"  |  "<<endl;
	cout <<"     "<<position[1][0] << "  |  "<<position[1][1] << "  |  " <<position[1][2]<<endl;
	cout <<"   __"<<"___|___"<<"__|_____"<<endl;
	cout <<"     "<<"   |   "<<"  |  "<<endl;
	cout <<"     "<<position[2][0] << "  |  "<<position[2][1] << "  |  " <<position[2][2]<<endl;
	cout <<"     "<<"   |   "<<"  |  "<<endl;
}


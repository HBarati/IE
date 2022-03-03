// e ke dar tabe Event gerefte mishavad haman damaye lahze ei mohit va taein konande state cooler va heater mibashad
//khorooji haye nemoone dar akhar code avarde shode ast


#include <iostream>
using namespace std;

int Event();

int main() {
    int e = 20;
    char PS = 'A';
    char NS;

    while(true){
        switch(PS){
            case 'A':
                e = Event();
                if(e<15){
                    NS='C';
                    cout << NS << endl;
                    cout << "Turn_on Heater"<<endl;
                    cout << "Turn_off Cooler"<<endl;
                }
                else if(e>35){
                    NS='B';
                    cout << NS << endl;
                    cout << "Turn_off Heater"<<endl;
                    cout << "Turn_on Cooler"<<endl;
                    }
                else {
                    NS='A';
                    cout << NS << endl;
                    cout << "Turn_off Heater"<<endl;
                    cout << "Turn_off Cooler"<<endl;
                }
                break;
            case 'B':
                e = Event();
                if(e<25){
                    NS='A';
                    cout << NS << endl;
                    cout << "Turn_off Heater"<<endl;
                    cout << "Turn_off Cooler"<<endl;
                    }
                else{
                    cout << NS << endl;
                    cout << "Turn_off Heater"<<endl;
                    cout << "Turn_off Cooler"<<endl;
                }
                break;
            case 'C':
                e = Event();
                if(e>30){
                    NS='A';
                    cout << NS << endl;
                    cout << "Turn_off Heater"<<endl;
                    cout << "Turn_off Cooler"<<endl;
                    }
                else{
                    cout << NS << endl;
                    cout << "Turn_off Heater"<<endl;
                    cout << "Turn_off Cooler"<<endl;
                }
                break;
        }
    PS = NS;
    }
    return 0;
}
int Event(){
    int t;
    cin >> t ; 
    return t;
}

/* Out Put example
25
A
Turn_off Heater
Turn_off Cooler
36
B
Turn_off Heater
Turn_on Cooler
40
B
Turn_off Heater
Turn_off Cooler
24
A
Turn_off Heater
Turn_off Cooler
10
C
Turn_on Heater
Turn_off Cooler
15
C
Turn_off Heater
Turn_off Cooler
25
C
Turn_off Heater
Turn_off Cooler
26
C
Turn_off Heater
Turn_off Cooler
30
C
Turn_off Heater
Turn_off Cooler
40
A
Turn_off Heater
Turn_off Cooler
*/
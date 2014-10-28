#include <iostream>

using namespace std;

void compute_time(double cap, double current_volume, double in_flow, double out_flow) {
    double time = 0.0;
    if(in_flow > cap && out_flow >cap)
        cout << "LEVEL" << endl;
    else{
        double current = current_volume;
        while(current <= cap + out_flow){
            current += in_flow;
            time++;}
        if(current - in_flow - out_flow == cap)
            cout << time << endl;
        else{
            time = 0.0;
            current = current_volume;
            while(current >= -in_flow){
                time++;
                current -= out_flow;}
            if(current + in_flow == 0)
                cout << time << endl;
            else
                cout << "LEVEL" << endl;
        }
    }
}

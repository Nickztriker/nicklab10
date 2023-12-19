#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float x;
    float y = 0;
    
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
       
        x = atof(textline.c_str());
        sum += x;
        y += pow(x,2);
        count++;
    }

    float mean = sum/count;
    float SD = sqrt((y/count)-(mean*mean));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD;
    

    return 0;
}
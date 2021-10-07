#include <iostream>
#include <math.h>
using namespace std;

float phy(float a, float b, float c){
    
    if(a == 0){
        return (sqrt(((c*c)-(b*b))));
        
    }
    else if(b == 0){
        return (sqrt(((c*c)-(a*a))));
        
    }
    else if(c == 0){
        return (sqrt(((b*b)+(a*a))));
        
    }
    else{
        return 0;
    }
}
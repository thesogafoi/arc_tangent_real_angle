#include <iostream>
#include<math.h>
    using namespace std;

 float myArcTangent(float  opp, float  ajc);
 double  radToDegree(double rad);
 double pi = 2 * acos(0.0);
 int quadrantCalculator(float  opp, float ajc);


int main()
{
    // define opposite and adjacent in trigonometry side
    int opp, ajc;

    cout << "enter ajc : ";
    cin >> ajc;
    cout << "enter opp : ";
    cin >> opp;
    
    cout << myArcTangent(opp, ajc) << endl;
    return 0;
}

float myArcTangent(float opp , float ajc) {
    // we get arc tan of radian and convert it to degree

    double atan = radToDegree(atanf((float)(opp/ajc)));
    
    // here we specify where is our point in quadrant Trigonometric circle in 2d plane (1,2,3,4) 
    // for example point (-4 , 4 )  is in second quadrant 
    short int quadrant = quadrantCalculator(opp , ajc);
    if (quadrant == 2 || quadrant == 3) {
        atan += 180;
   }
    
    return  atan;
}

int quadrantCalculator(float  opp, float ajc) {
    if (opp > 0 && ajc > 0) {
        return 1;
    }
    else if (opp > 0 && ajc < 0) {
        return 2;
    }
    else if (opp < 0 && ajc < 0) {
        return 3;
    }
    else if (opp < 0 && ajc > 0) {
        return 4;
    }
}

double radToDegree(double rad) {
    return (rad * (180 / pi));
}

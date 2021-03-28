// Задача пока проходит не все тесты, что странно. Работа ещё ведётся.


#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    int x;
    int y;
};

istream& operator >> (istream &in, Point &point){
    in>>point.x;
    in>>point.y;

    return in;
}

int main(){
    Point point1;
    Point point2;
    Point point3;
    Point point;

    cin>>point1;
    cin>>point2;
    cin>>point3;
    cin>>point;
    /*
    Реализация - считаются произведения (1, 2, 3 - вершины треугольника, 0 - точка):
    (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
    (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
    (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)
    */
    if (signbit((point1.x - point.x)*(point2.y-point1.y) - (point2.x-point1.x)*(point1.y - point.y)) == 
        signbit((point2.x - point.x)*(point3.y-point2.y) - (point3.x-point2.x)*(point2.y - point.y)) == 
        signbit((point3.x - point.x)*(point1.y-point3.y) - (point1.x-point3.x)*(point3.y - point.y))){
            cout<<"Out";
        } else{
            cout<<"In";
        }

    return 0;
}

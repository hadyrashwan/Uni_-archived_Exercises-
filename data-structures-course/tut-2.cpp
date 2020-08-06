#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;

class Shape
{
public:
    Shape(){}
    Shape(string Clr , bool fild)
    {
        Color = Clr;
        filled = fild;
    }
    bool  isfilled()
    {
        return filled;
    }
    void  setfilled()
    {
        filled =1;
    }
    void setColor(string Clr)
    {
        Color = Clr ;
    }
    string getColor()
    {
        return Color ;
    }
    double getArea();
    double getPerimeter();
    string toString();

protected:
    string Color ;
    bool filled = 0 ;
};

class Circle:public Shape
{
public:
    Circle(){}
    Circle(double rdus, string colr, bool fillld)
    {
        radius = rdus;
        Color = colr;
        filled = fillld;
    }
    void setRadius(double r)
    {
        radius = r ;
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        double rad = getRadius();
        return 3.14*(rad*rad) ;
    }
    double getPerimeter(){
    return 2*3.14*(getRadius());
    }
    void toString(){
     cout<< "im the hodz's circle and i am " << getColor();
    }
private:
    double radius;
};

class Rectangle:public Shape
{
public:
    Rectangle(){}
    Rectangle(double ws, double lth, string colr, bool fillld)
    {
        width = ws;
        length = lth;
        Color = colr;
        filled = fillld;
    }
    void setWidth(double ws)
    {
        width = ws ;
    }
    double getWidth()
    {
        return width;
    }
    void setLength(double ls)
    {
        length = ls ;
    }
    double getLength()
    {
        return length;
    }
    double getArea()
    {
        return width * length ;
    }
    double getPerimeter(){
    return (width+length)*2;
    }
    void toString(){
     cout<< "im a hodz's Rectangle and i am "<< getColor() ;
    }
private:
    double width;
    double length;

};
int main()
{
    Circle dayra;
    string CircleColor = "blue" ;
    dayra.setColor(CircleColor);
    cout<< dayra.getColor()<<" "<< dayra.isfilled()<<" before set "<< "\n";
    dayra.setfilled() ;
    cout<< dayra.isfilled()<<"\n" ;
    dayra.setRadius(5);
    Rectangle mostatel;
    mostatel.setWidth(5);
    mostatel.setLength(5);
    mostatel.setColor(CircleColor);
    cout << dayra.getArea()<< " area "<<mostatel.getArea() << "\n" ;
    cout << dayra.getPerimeter() << " prmtr " << mostatel.getPerimeter() << "\n" ;
    dayra.toString();
     cout << "\n" ;
     mostatel.toString() ;

    return 0;
}

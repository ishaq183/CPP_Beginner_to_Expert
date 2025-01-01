#include<iostream>

#define PI 3.14

using namespace std;



void menu();

void menuDecision(int);

double areaCircle(double);

double areaSquare(double);

double areaRectangle(double,double);

double areaTriangle(double,double);

bool check_for_positive(double);



int main() {



    int choice;

    char cont;



    do {

        menu();

        cin>>choice;



        menuDecision(choice);



        cout<<"Do you want to continue ? (Y/N)"<<endl;

        cin>>cont;

    } while(cont=='Y'||cont=='y');



    return 0;

}



void menu() {
    cout << "____MENU____" << endl;

    cout<<"1. Circle\n2. Square\n3. Rectangle\n4. Triangle"<<endl;
    cout<<"Enter your choice: ";

}



void menuDecision(int ch) {

    double r,a,b,h;

    switch(ch) {

    case 1:

        cout<<"Enter the radius : "<<endl;

        cin>>r;
        if(check_for_positive(r)){
            cout << "Cannot find area for zero and negative." << endl;
        }else{

            areaCircle(r);
        }

        break;

    case 2:

        cout<<"Enter a side of the square : "<<endl;

        cin>>a;
        if(check_for_positive(a)){
            cout << "Cannot find area for zero and negative." << endl;
        }else{

            areaSquare(a);
        }    

        break;

    case 3:

        cout<<"Enter the width of Rectangle: ";
        cin >> a;
        cout<<"Enter the height of Rectangle: ";
        cin >> b;
        if(check_for_positive(a)||check_for_positive(b)){
            cout << "Cannot find area for zero and negative." << endl;
        }else{

            areaRectangle(a,b);
        }    

        break;

    case 4:

        cout<<"Enter the base of the triangle : ";

        cin>>a;
        cout<<"Enter the height of triangle: ";
        cin >> h;
        if(check_for_positive(a)||check_for_positive(h)){
            cout << "Cannot find area for zero and negative." << endl;
        }else{

            areaTriangle(a,h);
        }

        break;

    default:

        cout<<"Wrong choice !"<<endl;

    }

}



double areaCircle(double r) {

    double result = PI *r *r;

    cout<<"The area of the circle is : "<<result<<endl;

    return result;

}



double areaSquare(double a) {

    double result = a* a;

    cout<<"The area of the Square is : "<<result<<endl;

    return result;

}



double areaRectangle(double a,double b) {

    double result = a* b;

    cout<<"The area of the Rectangle is : "<<result<<endl;

    return result;

}



double areaTriangle(double a,double h) {

    double result = (1/2.0)*a*h;

    cout<<"The area of the Triangle is : "<<result<<endl;

    return result;

}

bool check_for_positive(double numb){
    if(numb==0||numb<0){
        return true;
    }
    return false;
}

    

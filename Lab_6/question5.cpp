#include<iostream>
using namespace std;
class Car{
    private:
    string brand_of_car;
    string model_of_car ;
    int year_of_car;
    public:
    Car(string brand,string model,int year){
        brand_of_car = brand;
        model_of_car = model;
        year_of_car = year; 
    }
    void detail(){
        cout<<"Car Brand: "<<brand_of_car<<endl;
        cout<<"Car Model: "<<model_of_car<<endl;
        cout<<"Year: "<<year_of_car;
    }
};
int main(){
    string brand , model;
    int year;
    cout<<"Enter the brand: ";
    cin>>brand;
    cout<<"Enter the model: "; 
    cin>>model;
    cout<<"Enter the year: ";
    cin>>year;
    Car c(brand,model,year);
    c.detail();
    return 0;
}
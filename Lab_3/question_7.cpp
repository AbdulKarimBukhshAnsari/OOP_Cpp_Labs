#include<iostream>
using namespace std;

struct Product{
    char product_name[50];
    int price;
    int quantity;
};
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    Product product ;
    cout<<"Enter the name of the product: ";
    cin.get(product.product_name,50);
    cout<<"Enter the price of that product: ";
    cin>>product.price;
    cout<<"Enter the quantity of that product: ";
    cin>>product.quantity;
    int total_cost = product.price*product.quantity;
    cout<<"The total cost is found to be: $"<<total_cost;
}
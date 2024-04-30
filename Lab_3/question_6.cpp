#include<iostream>
#include<algorithm>
using namespace std;
struct Book {
    string title;
    string author;
    string genre;
    int year_of_publication;
};
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    Book book[3];
    int year_of_pub[3];
    // Data Entry
    for(int i =0;i<3;i++){
        cout<<"Enter the title of "<<i+1<<" book: ";
        cin>>book[i].title;
        cout<<"Enter the name of "<<i+1<<" book author: ";
        cin>>book[i].author;
        cout<<"Enter the genre of "<<i+1<<" book: ";
        cin>>book[i].genre;
        cout<<"Enter the year of publication of "<<i+1<<" book: ";
        cin>>book[i].year_of_publication;
        year_of_pub[i] =book[i].year_of_publication; 
    }
     cout<<"----------------------------"<<endl;
    cout<<"---Detailed Data!!!----------"<<endl;
    cout<<"------------------------------"<<endl;
    // Displaying the Data
    for(int j =0;j<3;j++){
        cout<<"Book "<<j+1<<endl;
        cout<<"Title: "<<book[j].title<<endl;
        cout<<"Author name: "<<book[j].author<<endl;
        cout<<"Genre: "<<book[j].genre<<endl;
        cout<<"Year of publication: "<<book[j].year_of_publication<<endl;
        cout<<"\n\n";
        cout<<"-----------------------------------"<<endl;
    }
    int* min_year_address = min_element(year_of_pub,year_of_pub+3); 
    int min_year = *min_year_address;
    int* result = find(begin(year_of_pub),end(year_of_pub),min_year);  // finding the index of the min year 
    int index = distance(begin(year_of_pub),result);
    cout<<"The  year of publication is of  "<<book[index].title<<" and the year of publication is : "<<min_year;

}
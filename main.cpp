#include "audiobook.h"
#include "bookshop.h"

int main(){
    string title, aName, vActor;
    cout<<"BookTitle : ";
    cin>>title;
    cout<<"Author Name : ";
    cin>>aName;
    cout<<"Voice Actor : ";
    cin>>vActor;

    AudioBook ab1(vActor, aName, title);

    ab1.addBooks();
    ab1.printDescription();


    return 0;
}
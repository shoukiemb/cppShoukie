#include "audiobook.h"
#include "bookshop.h"

BookShop::BookShop(){
    
    
    this->bookCollection = static_cast<BookShop*>(malloc(sizeof(BookShop)*(noOfBooksAdded+1)));
}

void BookShop::addBooks(){
    new(&bookCollection[noOfBooksAdded])BookShop();
    

    noOfBooksAdded++;

}

void BookShop::printing(){
    cout<<"Array Output is :"<<endl;
    
}

BookShop::~BookShop(){
    delete bookCollection;
}
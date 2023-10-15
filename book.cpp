#include "book.h"

Book::Book(){
    this->authorName = " ";
    this->title = " ";
}

void Book::setTitle(string ttl){
    this->title = ttl;
}
void Book::setAuthorName(string aName){
    this->authorName = aName;
}
string Book::getTitle(){
    return this->title;
}
string Book::getAtuhorName(){
    return this->authorName;
}

void Book::printDescription(){
    cout<<title<<endl;
    cout<<authorName<<endl;
}

void Book::addBook(){
        
        new(&bookCollection[noOfBooksAdded])Book();
        noOfBooksAdded++;
}
#pragma once
#include "library.h"
#include "bookshop.h"

class Book:public BookShop{
    protected:
        string title;
        string authorName;
    public:
        void setTitle(string ttl);
        void setAuthorName(string aName);
        string getTitle();
        string getAtuhorName();
        Book();
        virtual void printDescription();
        void addBook();
};
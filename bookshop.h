#pragma once
#include "library.h"


class BookShop {
    protected:
        BookShop *bookCollection;
       
        int noOfBooksAdded = 0;
    
    public:
        BookShop();
        void addBooks();
        void printing();
        
        ~BookShop();
};
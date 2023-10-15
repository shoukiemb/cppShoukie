#pragma once
#include "book.h"

class AudioBook: public Book{
    protected:
        string voiceActor;
    
    public:
        void setVoiceActor(string vActor);
        string getVoiceActor();
        AudioBook(string vActor, string title, string aName);
        void printDescription();
        void addBooks();
};
#include "audiobook.h"

AudioBook::AudioBook(string vActor, string title, string aName){
    this->voiceActor = vActor;
    this->title = title;
    this->authorName = aName;
}

void AudioBook::setVoiceActor(string vActor){
    this->voiceActor = vActor;
}
string AudioBook::getVoiceActor(){
    return this->voiceActor;
}
void AudioBook::addBooks(){
    new(&bookCollection[noOfBooksAdded])BookShop();
    noOfBooksAdded++;
}

void AudioBook::printDescription(){
    cout<<title<<endl;
    cout<<authorName<<endl;
    cout<<voiceActor<<endl;
    AudioBook *no;
    
}
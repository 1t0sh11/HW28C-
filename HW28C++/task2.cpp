#include <iostream>
#include "Media.h"

using namespace std;

int main() {
    Book book("Kobzar", "Taras Shevchenko", 720);
    book.show();
    cout << "\n";

    Voice_recording recording("Bohdan Stupka", 180);
    recording.show();
    cout << "\n";

    Talking_book talkingBook("Shadows of Forgotten Ancestors", "Mykhailo Kotsiubynsky", 160, "Petro Panchuk", 240, 2);
    talkingBook.show();

    return 0;
}
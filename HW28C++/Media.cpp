#include "Media.h"

Book::Book() {
    title = "Untitled";
    author = "Unknown";
    pages = 0;
}

Book::Book(string title, string author, int pages) {
    this->title = title;
    this->author = author;
    this->pages = pages;
}

Book::~Book() {}

void Book::setTitle(string title) { this->title = title; }
string Book::getTitle() const { return title; }

void Book::setAuthor(string author) { this->author = author; }
string Book::getAuthor() const { return author; }

void Book::setPages(int pages) { this->pages = pages; }
int Book::getPages() const { return pages; }

void Book::show() const {
    cout << "Title:\t\t" << title << "\n";
    cout << "Author:\t\t" << author << "\n";
    cout << "Pages:\t\t" << pages << "\n";
}

Voice_recording::Voice_recording() {
    narrator = "Unknown";
    durationMinutes = 0;
}

Voice_recording::Voice_recording(string narrator, int durationMinutes) {
    this->narrator = narrator;
    this->durationMinutes = durationMinutes;
}

Voice_recording::~Voice_recording() {}

void Voice_recording::setNarrator(string narrator) { this->narrator = narrator; }
string Voice_recording::getNarrator() const { return narrator; }

void Voice_recording::setDurationMinutes(int durationMinutes) { this->durationMinutes = durationMinutes; }
int Voice_recording::getDurationMinutes() const { return durationMinutes; }

void Voice_recording::show() const {
    cout << "Narrator:\t" << narrator << "\n";
    cout << "Duration:\t" << durationMinutes << " min\n";
}

Talking_book::Talking_book() : Book(), Voice_recording() {
    tapesCount = 1;
}

Talking_book::Talking_book(string title, string author, int pages, string narrator, int durationMinutes, int tapesCount)
    : Book(title, author, pages), Voice_recording(narrator, durationMinutes) {
    this->tapesCount = tapesCount;
}

Talking_book::~Talking_book() {}

void Talking_book::setTapesCount(int tapesCount) { this->tapesCount = tapesCount; }
int Talking_book::getTapesCount() const { return tapesCount; }

void Talking_book::show() const {
    cout << "Title:\t\t" << title << "\n";
    cout << "Author:\t\t" << author << "\n";
    cout << "Pages:\t\t" << pages << "\n";
    cout << "Narrator:\t" << narrator << "\n";
    cout << "Duration:\t" << durationMinutes << " min\n";
    cout << "Tapes / Discs:\t" << tapesCount << "\n";
}
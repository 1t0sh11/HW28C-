#pragma once

#include <iostream>
#include <string>

using namespace std;

class Book {
protected:
    string title;
    string author;
    int pages;

public:
    Book();
    Book(string title, string author, int pages);
    virtual ~Book();

    void setTitle(string title);
    string getTitle() const;

    void setAuthor(string author);
    string getAuthor() const;

    void setPages(int pages);
    int getPages() const;

    void show() const;
};

class Voice_recording {
protected:
    string narrator;
    int durationMinutes;

public:
    Voice_recording();
    Voice_recording(string narrator, int durationMinutes);
    virtual ~Voice_recording();

    void setNarrator(string narrator);
    string getNarrator() const;

    void setDurationMinutes(int durationMinutes);
    int getDurationMinutes() const;

    void show() const;
};

class Talking_book : public Book, public Voice_recording {
private:
    int tapesCount;

public:
    Talking_book();
    Talking_book(string title, string author, int pages, string narrator, int durationMinutes, int tapesCount);
    ~Talking_book();

    void setTapesCount(int tapesCount);
    int getTapesCount() const;

    void show() const;
};
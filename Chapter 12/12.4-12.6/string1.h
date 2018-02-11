#include <iostream>
#ifndef STRING1_H
#define STRING1_H
using std::ostream;
using std::istream;

class String{
private:
    char* str;
    int len;
    static int num_strings;

public:
    String(const char* s);
    String();
    String(const String &);
    ~String();
    int length() const {return len;}
    static const int CINLIM = 80;

    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;

    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    friend std::ostream & operator<<(std::ostream & os, const String & st);
    friend std::istream & operator>>(std::istream & is, String & st);
    static int HowMany();
};
#endif

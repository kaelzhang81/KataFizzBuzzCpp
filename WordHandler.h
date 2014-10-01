#pragma once

#include <string>

using namespace std;

class WordHandler
{
public:
    WordHandler(void);
    ~WordHandler(void);

    virtual string Handler(const int number) = 0;
protected:
    WordHandler *_handler;
};


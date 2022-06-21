#include <iostream>
#include <string>
using namespace std;

class Logger
{
    static Logger* instance;

    string path;

    Logger();
public:
    static Logger* GetInstance()
    {
        if (instance == nullptr)
        {
            instance = new Logger();
        }
        return instance;
    }

    void SetPath(string path);
    void WriteStringToFile(string text);
    void WriteIntegerToFile(int number);
};


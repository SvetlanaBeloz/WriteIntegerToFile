#include "Logger.h"

void Logger::WriteStringToFile(string text)
{
    FILE* file = nullptr;
    fopen_s(&file, path.c_str(), "a+");
    if (file != nullptr)
    {
        text += "\n";
        fputs(text.c_str(), file);
        fclose(file);
    }
}

void Logger::WriteIntegerToFile(int number)
{
    FILE* file = nullptr;
    fopen_s(&file, path.c_str(), "a+");
    if (file != nullptr)
    {
        auto s = std::to_string(number);
        s += "\n";
        fputs(s.c_str(), file);
        fclose(file);
    }
}

void Logger::SetPath(string path)
{
    this->path = path;
}

Logger::Logger()
{
    SetPath("C:/1/progress.txt");
}



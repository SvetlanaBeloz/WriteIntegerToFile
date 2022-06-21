#include "Logger.h"

Logger* Logger::instance;
int main()
{
    Logger* logger = Logger::GetInstance();

    logger->WriteStringToFile("PU");
    logger->WriteStringToFile("111");
    logger->WriteIntegerToFile(5);
}
#ifndef NOTIF_H
#define NOTIF_H

#include <map>
#include <string>
#include <functional>

class Notification
{
public:
    void notify(std::map<std::string, std::string> info);

    std::string call_func(std::map<std::string, std::string>);
};

#endif
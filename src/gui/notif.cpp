#include <cstdlib>
#include <map>
#include <string>
#include <functional>
#include <iostream>
#include <sstream>
#include "notif.h"

void Notification::notify(std::map<std::string, std::string> info)
{
    std::string formatted_information = Notification::call_func(info);

    std::string command = "osascript -e 'display notification " + formatted_information + "'";
    std::cout << command << std::endl;
    system(command.c_str());
};

std::string Notification::call_func(std::map<std::string, std::string> notif_dict)
{

    std::string output;
    std::string header = notif_dict["Header"];
    std::string subheader = notif_dict["SubHeader"];
    std::string content = notif_dict["Content"];

    output = "\"" + content + "\" with title \" " + header + " \" subtitle \" " + subheader + "\"";
    return output;
};
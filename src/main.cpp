#include <iostream>
#include <string>
#include <map>
#include "gui/notif.h"

int main()
{
    Notification notification = Notification();
    std::map<std::string, std::string> notif_dict;
    notif_dict["Header"] = "Hello there!";
    notif_dict["SubHeader"] = "This works!";
    notif_dict["Content"] = "Now lets limit test how much content I can put here. A couple sentences or what are we thinking when is it going to be cut off";

    notification.notify(notif_dict);

    return 0;
}
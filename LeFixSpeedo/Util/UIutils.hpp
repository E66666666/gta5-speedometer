#pragma once

#include "inc\natives.h"
#include "inc\types.h"
#include <string>

//Notification
void showNotification(std::string);
void showNotification(int&, std::string);
void removeNotification(int&);
void replaceNotification(int&, std::string);

//Subtitle
void showSubtitle(std::string, int );

//TextboxTop
void showTextboxTop(std::string, bool);

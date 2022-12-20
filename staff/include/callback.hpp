# pragma once
#ifndef SQLITE_CALLBACK_H
#define SQLITE_CALLBACK_H
#include <iostream>

int callback(void *data, int argc, char **argv, char **azColName);

#endif
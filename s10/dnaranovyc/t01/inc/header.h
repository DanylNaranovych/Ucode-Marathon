#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>

void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_printerr(const char*s);

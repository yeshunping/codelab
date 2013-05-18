// Copyright (c) 2013, The Toft Authors. All rights reserved.
// Author: Ye Shunping <yeshunping@gmail.com>

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

const char kColorPurple[] = "\033[;35m";
const char kColorYellow[] = "\033[;33m";
const char kColorGreen[] = "\033[;32m";
const char kColorEnd[] = "\033[0m";

int main() {
    fprintf(stderr, "%sTesting %s Toft Project %s Begin... %s\n",
            kColorPurple, kColorYellow,
            kColorGreen, kColorEnd);
    return 0;
}

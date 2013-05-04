// Copyright (c) 2013, The Toft Authors.
// All rights reserved.
//
// Author: Ye Shunping <yeshunping@gmail.com>

#include <string>
#include <vector>

#include "thirdparty/glog/logging.h"
#include "thirdparty/gtest/gtest.h"

using std::string;

int add(int a, int b) {
  return a + b;
}

TEST(gtest, simple) {
  int a = 10;
  int b = 20;
  int c = add(a, b);
  EXPECT_EQ(c, 30);
}

TEST(gtest, memory_leak) {
  string* str = new string();
  str->append("hello world");
  LOG(INFO) << str;
  delete str;
}

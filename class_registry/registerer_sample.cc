// Copyright (c) 2013, The Toft Authors.
// All rights reserved.
//
// Author: Ye Shunping <yeshunping@gmail.com>

#include "codelab/class_registry/animal.h"
#include "thirdparty/gflags/gflags.h"
#include "thirdparty/glog/logging.h"
#include "toft/base/string/algorithm.h"

DEFINE_string(animals, "Cat,Dog", "");

int main(int argc, char** argv) {
  google::ParseCommandLineFlags(&argc, &argv, false);
  animal::Animal* a = CREATE_ANIMAL("Cat");
  CHECK(a) << "fail to get cat";
  a->Run();

  animal::Animal* b = CREATE_ANIMAL("Dog");
  CHECK(b) << "fail to get dog";
  b->Run();

  std::vector<std::string> animals;
  toft::SplitStringKeepEmpty(FLAGS_animals, ',', &animals);
  for (size_t i = 0; i < animals.size(); ++i) {
    LOG(INFO) << "animal name:" << animals[i];
    animal::Animal* obj = CREATE_ANIMAL(animals[i]);
    CHECK(obj) << "fail to get animal object:" << obj;
    obj->Run();
  }
  return 0;
}

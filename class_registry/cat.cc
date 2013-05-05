// Copyright (c) 2013, The Toft Authors.
// All rights reserved.
//
// Author: Ye Shunping <yeshunping@gmail.com>

#include "codelab/class_registry/cat.h"
#include "thirdparty/glog/logging.h"

namespace animal {
Cat::Cat() {
}
Cat::~Cat() {
}

void Cat::Run() {
  LOG(INFO) << "cat run";
}
REGISTER_ANIMAL(Cat);

}

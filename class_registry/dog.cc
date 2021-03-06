// Copyright (c) 2013, The Toft Authors.
// All rights reserved.
//
// Author: Ye Shunping <yeshunping@gmail.com>

#include "codelab/class_registry/dog.h"
#include "thirdparty/glog/logging.h"

namespace animal {
Dog::Dog() {
}

Dog::~Dog() {
}

void Dog::Run() {
  LOG(INFO) << "dog run";
}
REGISTER_ANIMAL(Dog);

}

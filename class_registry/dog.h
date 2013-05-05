// Copyright (c) 2013, The Toft Authors.
// All rights reserved.
//
// Author: Ye Shunping <yeshunping@gmail.com>

#ifndef CODELAB_CLASS_REGISTRY_DOG_H_
#define CODELAB_CLASS_REGISTRY_DOG_H_

#include "codelab/class_registry/animal.h"

namespace animal {
class Dog : public Animal {
 public:
  Dog();
  virtual ~Dog();
  virtual void Run();
 private:
  TOFT_DECLARE_UNCOPYABLE(Dog);
};
}
#endif  // CODELAB_CLASS_REGISTRY_DOG_H_

// Copyright (c) 2013, The Toft Authors.
// All rights reserved.
//
// Author: Ye Shunping <yeshunping@gmail.com>
#ifndef CODELAB_CLASS_REGISTRY_CAT_H_
#define CODELAB_CLASS_REGISTRY_CAT_H_

#include "codelab/class_registry/animal.h"

namespace animal {
class Cat : public Animal {
 public:
  Cat();
  virtual ~Cat();
  virtual void Run();
 private:
  TOFT_DECLARE_UNCOPYABLE(Cat);
};
}
#endif  // CODELAB_CLASS_REGISTRY_CAT_H_

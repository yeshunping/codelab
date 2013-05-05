// Copyright (c) 2013, The Toft Authors.
// All rights reserved.
//
// Author: Ye Shunping <yeshunping@gmail.com>

#ifndef CODELAB_CLASS_REGISTRY_ANIMAL_H_
#define CODELAB_CLASS_REGISTRY_ANIMAL_H_

#include "toft/base/class_registry/class_registry.h"
#include "toft/base/uncopyable.h"

namespace animal {
class Animal {
 public:
  Animal();
  virtual ~Animal();
  virtual void Run() = 0;
 private:
  TOFT_DECLARE_UNCOPYABLE(Animal);
};

TOFT_CLASS_REGISTRY_DEFINE(animal_registry, Animal);

#define REGISTER_ANIMAL(class_name) \
    TOFT_CLASS_REGISTRY_REGISTER_CLASS( \
        animal::animal_registry, \
        animal::Animal, \
        #class_name, \
        class_name)
}

#define CREATE_ANIMAL(name_as_string) \
    TOFT_CLASS_REGISTRY_CREATE_OBJECT(animal::animal_registry, name_as_string)
#endif  // CODELAB_CLASS_REGISTRY_ANIMAL_H_

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

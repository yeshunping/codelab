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

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

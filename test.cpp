#include <iostream>
extern "C" {
extern void GC_init();
extern void GC_allow_register_threads();
}
void test() { std::cout << "Hello! I'm from a dll lib" << std::endl; }

class dllInitializer {
public:
  dllInitializer() {
    GC_init();
    GC_allow_register_threads();
  }
};
dllInitializer dllInitializerInstance;

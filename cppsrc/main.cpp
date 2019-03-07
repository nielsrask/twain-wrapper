/* cppsrc/main.cpp */
#include <napi.h>
#include "twain.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return exports;
}

NODE_API_MODULE(twainwrapper, InitAll)

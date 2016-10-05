#include <nan.h>
#include <node.h>
#include <iostream>
#include <string>
#include <locale>
#include <fstream>
#include <codecvt>

using namespace std;
using namespace Nan;
using namespace v8;

NAN_METHOD(passBuffer)
{
    Local<Object> bufferObj = info[0]->ToObject();
    unsigned int len = info[1]->Uint32Value();
    char* msg = node::Buffer::Data(bufferObj);
    for (int i=0; i<len; i++)
    {
      std::cout << std::hex << (int)msg[i] << " ";
    }
}

NAN_MODULE_INIT(Init) {
   Nan::Set(target, New<String>("pass_buffer").ToLocalChecked(),
        GetFunction(New<FunctionTemplate>(passBuffer)).ToLocalChecked());
}

NODE_MODULE(basic_nan, Init)

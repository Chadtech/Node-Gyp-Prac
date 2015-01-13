#include <nan.h>
#include <stdio.h>
#include <iostream>

using namespace v8;
using v8::String;

NAN_METHOD(d4NkMeM35) {
  printf("DANK MEMES\n");
  NanReturnUndefined();
}

NAN_METHOD(DANKMEMES){
  v8::String::Utf8Value param1(args[0]->ToString());
  std::string DANKMEMES = std::string(*param1);
  const char * xXxDaNkMeMeSxXx = DANKMEMES.c_str();
  printf(xXxDaNkMeMeSxXx);
  printf("\n");
  NanReturnUndefined();
}

void Init(Handle<Object> exports) {
  exports->Set(NanNew("dAnKmEmEs"), 
    NanNew<FunctionTemplate>(d4NkMeM35)->GetFunction());

  exports->Set(NanNew("DANKMEMES"), 
    NanNew<FunctionTemplate>(DANKMEMES)->GetFunction());
}

NODE_MODULE(DANKMEMES, Init); 
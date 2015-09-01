#include <iostream>
extern "C" {
#include <libavformat/avformat.h>
}

int main(int argc, const char** argv) {
  std::cout << "1" << std::endl;
  void* test = av_malloc(100);
  av_free(test);
  std::cout << "2" << std::endl;
  return 0;
}

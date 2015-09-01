cc_library(
  name = "lib",
  srcs = ["mac/lib/empty.cc"],
  data = glob(["mac/lib/*.dylib"]),
  linkopts = ["-Lmac/lib", "-lavcodec.56", "-lavdevice.56", "-lavfilter.5", "-lavformat.56", "-lavutil.54", "-lswresample.1", "-lswscale.3"],
  hdrs = glob(["mac/include/**/*.h"]),
  includes = ["mac/include"],
  visibility = ["//visibility:public"],
  linkstatic = True,
)

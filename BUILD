cc_library(
	name = "hello-add",
	hdrs = ["lib/add.h"],
	strip_include_prefix = "lib",
)

cc_binary(
    name = "hello-world",
    deps = [ 
    	":hello-add",
    	"@immer//:immer"]
    	,
    srcs = ["src/hello-world.cc"],
    copts = ["-std=c++1z",],
)

cc_test(
    name = "hello-test",
    deps = [ 
    	":hello-add",
    	"@immer//:immer",
    	"@boost//:test"]
    	,
    srcs = ["test/main.cc"],
    copts = ["-std=c++1z",],
    timeout = "short",
)

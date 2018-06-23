# bazel-hello

[![Build Status](https://travis-ci.org/bansalnvn/bazel-hello.svg?branch=master)](https://travis-ci.org/bansalnvn/bazel-hello)


## Noraml Build

This showcases how to build a single file to create a runnable application.

This BUILD file shows that we want to build a C++ binary using the ```cc_binary``` rule provided by Bazel.
The name of the binary will be ```hello-world```
In the ```cc_binary``` rule, let's name the binary ```hello-world```, and provide the required source files in the ```srcs``` attribute.
```
cc_binary(
    name = "hello-world",
    srcs = ["src/hello-world.cc"],
)
```

```
bazel build //:hello-world
```
If the build is successful, Bazel prints the following output:
```
± |master U:1 ✗| → bazel build //:hello-world
INFO: Analysed target //:hello-world (7 packages loaded).
INFO: Found 1 target...
Target //:hello-world up-to-date:
  bazel-bin/hello-world
  INFO: Elapsed time: 1.386s, Critical Path: 0.80s
  INFO: 3 processes: 2 linux-sandbox, 1 local.
  INFO: Build completed successfully, 62 total actions
```

In the run log above you can see where the executable was built so you can locate it and use it.


## Adding the submodules and then build

Adding a submodule and using that.
Here I am using immer project to be used inside my hello-world project.

add gitsubmodule

### create a directory where submodules would be located. external in this project's case.

```
adding the submodule.
git submodule  add git@github.com:bansalnvn/immer external/
```

this repo already has a bazel BUILD file which exports the immer library and visibility is defined to public.

```
in hello-world we can set the dependency as
 
    deps = [ 
    	":hello-add",
    	"@immer//:immer"]
```

Last thing we need to setup the location of the target immer in the WORKSPACE file as follows.

```
local_repository(
		name = "immer",
		path = "external/immer",
)
```

and now we should be able to use immer library in our hello world project.


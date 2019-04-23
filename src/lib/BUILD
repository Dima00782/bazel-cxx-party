cc_library(
    name = "cxx_party_lib",
    srcs = ["cxx_lib.cc"],
    hdrs = ["cxx_lib.h"],
    deps = [":person_cc_proto"],
    visibility = ["//visibility:public"],
)

cc_proto_library(
    name = "person_cc_proto",
    deps = [":person_proto"],
)

proto_library(
    name = "person_proto",
    srcs = ["person.proto"],
)

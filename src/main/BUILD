cc_library(
    name = "app",
    srcs = ["app.cc"],
    hdrs = ["app.h"],
    deps = ["//lib:cxx_party_lib"],
)

cc_binary(
    name = "main",
    srcs = [
        "main.cc"
    ],
    deps = [":app"],
)

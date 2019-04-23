cc_test(
    name = "unittest",
    srcs = [
        "cxx_lib_unittest.cc",
    ],
    deps = [
        "//lib:cxx_party_lib",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "perftest",
    srcs = ["cxx_lib_perftest.cc"],
    copts = [
        "$(STACK_FRAME_UNLIMITED)",
    ],
    linkstatic = 1,
    deps = [
        "//lib:cxx_party_lib",
        "@com_google_benchmark//:benchmark",
        "@com_google_benchmark//:benchmark_main",
    ],
)

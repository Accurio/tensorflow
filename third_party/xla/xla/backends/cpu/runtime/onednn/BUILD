# copybara:uncomment_begin(google-only)
# load("//xla:xla.bzl", "xla_cc_test")
# load("//xla/tsl/platform:rules_cc.bzl", "cc_library")
#
# package(
#     # copybara:uncomment default_applicable_licenses = ["//tensorflow:license"],
#     default_visibility = [":friends"],
#     licenses = ["notice"],
# )
#
# package_group(
#     name = "friends",
#     includes = [
#         "//xla:friends",
#     ],
# )
#
# cc_library(
#     name = "onednn_interop",
#     hdrs = ["onednn_interop.h"],
#     deps = [
#         "@com_google_absl//absl/base:core_headers",
#         "@com_google_absl//absl/status",
#         "@onednn//:mkl_dnn",
#         "//xla:util",
#         "//xla/tsl/platform:logging",
#     ],
# )
#
# cc_library(
#     name = "onednn_threadpool",
#     hdrs = ["onednn_threadpool.h"],
#     deps = [
#         ":onednn_interop",
#         "@onednn//:mkl_dnn",
#         "//xla/backends/cpu/runtime:parallel_loop_runner",
#     ],
# )
#
# xla_cc_test(
#     name = "onednn_threadpool_test",
#     srcs = ["onednn_threadpool_test.cc"],
#     deps = [
#         ":onednn_interop",
#         ":onednn_threadpool",
#         "@com_google_googletest//:gtest_main",
#         "@com_google_absl//absl/algorithm:container",
#         "@com_google_absl//absl/status",
#         "@com_google_absl//absl/status:statusor",
#         "@com_google_absl//absl/synchronization",
#         "@eigen_archive//:eigen3",
#         "@onednn//:mkl_dnn",
#         "@pthreadpool",
#         "//xla/backends/cpu/runtime:parallel_loop_runner",
#         "//xla/tsl/concurrency:async_value",
#         "//xla/tsl/lib/core:status_test_util",
#         "//xla/tsl/platform:env",
#         "//xla/tsl/platform:statusor",
#         "//xla/tsl/platform:test",
#         "//xla/tsl/platform:test_benchmark",
#         "//xla/tsl/platform:test_main",
#     ],
# )
# copybara:uncomment_end

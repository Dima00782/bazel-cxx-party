#include "benchmark/benchmark.h"
#include "lib/cxx_lib.h"

static void BM_CallSquare(benchmark::State& state) {
  for (auto _ : state) {
      Square(2);
  }
}

BENCHMARK(BM_CallSquare);

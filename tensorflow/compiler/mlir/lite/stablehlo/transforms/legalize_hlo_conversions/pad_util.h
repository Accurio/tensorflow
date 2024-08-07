/* Copyright 2023 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_COMPILER_MLIR_LITE_STABLEHLO_TRANSFORMS_LEGALIZE_HLO_CONVERSIONS_PAD_UTIL_H_
#define TENSORFLOW_COMPILER_MLIR_LITE_STABLEHLO_TRANSFORMS_LEGALIZE_HLO_CONVERSIONS_PAD_UTIL_H_

#include "mlir/IR/BuiltinAttributes.h"  // from @llvm-project
#include "mlir/Support/LLVM.h"  // from @llvm-project
#include "xla/mlir_hlo/mhlo/IR/hlo_ops.h"

namespace mlir::odml {

llvm::SmallVector<int64_t> UnrollSplat(DenseElementsAttr data);

// Gets elements corresponding to slice starts from negative padding
// values.
DenseIntElementsAttr SliceStartFromNegPadLows(mhlo::PadOp op);

// Gets elements corresponding to slice ends from negative padding
// values.
DenseIntElementsAttr SliceEndFromNegPadHighs(mhlo::PadOp op);

// Gets a copy of `data` with negative values replaced with 0.
DenseIntElementsAttr ReplaceNegsWithZero(DenseElementsAttr data);

bool AnyNegativePads(mhlo::PadOp op);

bool TrivialInterior(mhlo::PadOp op);

}  // namespace mlir::odml

#endif  // TENSORFLOW_COMPILER_MLIR_LITE_STABLEHLO_TRANSFORMS_LEGALIZE_HLO_CONVERSIONS_PAD_UTIL_H_

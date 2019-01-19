#include "caffe2/operators/experimental/c10/schemas/sparse_lengths_sum.h"
#include <ATen/core/dispatch/OpSchemaRegistration.h>
#include "caffe2/core/operator_c10wrapper.h"

using caffe2::CPUContext;

C10_DEFINE_OP_SCHEMA(caffe2::ops::SparseLengthsSum);

namespace caffe2 {
REGISTER_C10_OPERATOR_FOR_CAFFE2_DISPATCH(
    ops::SparseLengthsSum,
    NoState,
    C10SparseLengthsSum_DontUseThisOpYet)
}

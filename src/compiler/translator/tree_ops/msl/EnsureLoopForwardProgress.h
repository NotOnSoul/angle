//
// Copyright 2025 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// EnsureLoopForwardProgress is an AST traverser that ensures that loops are either finite or
// invoke side-effects.
//

#ifndef COMPILER_TRANSLATOR_TREEOPS_MSL_ENSURELOOPFORWARDPROGRESS_H_
#define COMPILER_TRANSLATOR_TREEOPS_MSL_ENSURELOOPFORWARDPROGRESS_H_

#include "common/angleutils.h"
#include "common/debug.h"

namespace sh
{
class TCompiler;
class TIntermNode;

#ifdef ANGLE_ENABLE_METAL
[[nodiscard]] bool EnsureLoopForwardProgress(TCompiler *compiler, TIntermNode *root);
#else
[[nodiscard]] ANGLE_INLINE bool EnsureLoopForwardProgress(TCompiler *compiler, TIntermNode *root)
{
    UNREACHABLE();
    return false;
}
#endif
}  // namespace sh

#endif  // COMPILER_TRANSLATOR_TREEOPS_MSL_ENSURELOOPFORWARDPROGRESS_H_

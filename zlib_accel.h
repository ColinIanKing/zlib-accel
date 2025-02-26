// Copyright (C) 2025 Intel Corporation
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <zlib.h>

enum ConfigTag {
  USE_IAA_COMPRESS,
  USE_IAA_UNCOMPRESS,
  USE_QAT_COMPRESS,
  USE_QAT_UNCOMPRESS,
  USE_ZLIB_COMPRESS,
  USE_ZLIB_UNCOMPRESS,
  IAA_PREPEND_EMPTY_BLOCK,
  LOG_LEVEL
};

enum ExecutionPath { UNDEFINED, ZLIB, QAT, IAA };

void ZEXPORT zlib_accel_set_config(ConfigTag tag, int value);

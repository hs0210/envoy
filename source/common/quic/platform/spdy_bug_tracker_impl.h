#pragma once

// NOLINT(namespace-envoy)
//
// This file is part of the QUICHE platform implementation, and is not to be
// consumed or referenced directly by other Envoy code. It serves purely as a
// porting layer for QUICHE.

#include "common/quic/platform/quic_bug_tracker_impl.h"

#define SPDY_BUG_IMPL QUIC_BUG_IMPL
#define SPDY_BUG_IF_IMPL QUIC_BUG_IF_IMPL
#define FLAGS_spdy_always_log_bugs_for_tests_impl true

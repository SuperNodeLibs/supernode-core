#pragma once

// Copyright 2017 SuperNode Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "xdr/SuperNode-types.h"
#include <vector>

namespace supernode
{

struct SCPEnvelope;
struct SCPStatement;
struct SuperNodeValue;

std::vector<Hash> getTxSetHashes(SCPEnvelope const& envelope);
std::vector<SuperNodeValue> getSuperNodeValues(SCPStatement const& envelope);
}
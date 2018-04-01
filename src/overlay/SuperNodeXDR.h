#pragma once
#include "xdr/SuperNode-ledger-entries.h"
#include "xdr/SuperNode-ledger.h"
#include "xdr/SuperNode-overlay.h"
#include "xdr/SuperNode-transaction.h"
#include "xdr/SuperNode-types.h"

namespace supernode
{

std::string xdr_printer(const PublicKey& pk);
}

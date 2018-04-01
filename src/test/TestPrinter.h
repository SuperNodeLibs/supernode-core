#pragma once

// Copyright 2017 SuperNode Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "catchup/CatchupWork.h"
#include "history/HistoryTestsUtils.h"
#include "lib/catch.hpp"
#include "xdr/SuperNode-transaction.h"
#include "xdrpp/printer.h"

namespace supernode
{

struct OfferState;
}

namespace Catch
{

template <> std::string toString(supernode::ClaimOfferAtom const& coa);

template <> std::string toString(supernode::Hash const& tr);

template <> std::string toString(supernode::OfferEntry const& oe);

template <> std::string toString(supernode::OfferState const& os);

template <> std::string toString(supernode::TransactionResult const& tr);

template <> std::string toString(supernode::CatchupRange const& cr);

template <>
std::string toString(supernode::historytestutils::CatchupPerformedWork const& cm);
}

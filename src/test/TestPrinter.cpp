// Copyright 2017 SuperNode Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "test/TestPrinter.h"
#include "test/TestMarket.h"
#include <lib/util/format.h>

namespace Catch
{

template <>
std::string
toString(supernode::ClaimOfferAtom const& coa)
{
    return xdr::xdr_to_string(coa);
}

template <>
std::string
toString(supernode::Hash const& tr)
{
    return xdr::xdr_to_string(tr);
}

template <>
std::string
toString(supernode::OfferEntry const& oe)
{
    return xdr::xdr_to_string(oe);
}

template <>
std::string
toString(supernode::OfferState const& os)
{
    return fmt::format(
        "selling: {}, buying: {}, price: {}, amount: {}, type: {}",
        xdr::xdr_to_string(os.selling), xdr::xdr_to_string(os.buying),
        xdr::xdr_to_string(os.price), os.amount,
        os.type == supernode::OfferType::PASSIVE ? "passive" : "active");
}

template <>
std::string
toString(supernode::TransactionResult const& tr)
{
    return xdr::xdr_to_string(tr);
}

template <>
std::string
toString(supernode::CatchupRange const& cr)
{
    return fmt::format("[{}..{}], applyBuckets: {}", cr.first.first(),
                       cr.first.last(), cr.second);
}

template <>
std::string
toString(supernode::historytestutils::CatchupPerformedWork const& cm)
{
    return fmt::format("{}, {}, {}, {}, {}, {}, {}, {}",
                       cm.mHistoryArchiveStatesDownloaded,
                       cm.mLedgersDownloaded, cm.mLedgersVerified,
                       cm.mLedgerChainsVerificationFailed,
                       cm.mBucketsDownloaded, cm.mBucketsApplied,
                       cm.mTransactionsDownloaded, cm.mTransactionsApplied);
}
}

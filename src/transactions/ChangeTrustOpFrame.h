#pragma once

#include "transactions/OperationFrame.h"

// Copyright 2014 SuperNode Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

namespace supernode
{
class ChangeTrustOpFrame : public OperationFrame
{
    ChangeTrustResult&
    innerResult()
    {
        return mResult.tr().changeTrustResult();
    }
    ChangeTrustOp const& mChangeTrust;

  public:
    ChangeTrustOpFrame(Operation const& op, OperationResult& res,
                       TransactionFrame& parentTx);

    bool doApply(Application& app, LedgerDelta& delta,
                 LedgerManager& ledgerManager) override;
    bool doCheckValid(Application& app) override;

    static ChangeTrustResultCode
    getInnerCode(OperationResult const& res)
    {
        return res.tr().changeTrustResult().code();
    }
};
}

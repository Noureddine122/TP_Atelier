#pragma once
#include "Transaction.h"
namespace Banque {
    class OperationR : public Transaction
    {
    public:
        OperationR(Devise* E, Compte* c);
        void Print()const override;
    private:
        static string libel;
    };
}

#pragma once
#include "Devise.h"
namespace Banque {
    class Dollar :public Devise
    {
        const static double Ratio;
    public:
        explicit Dollar(double Val);
        Dollar(const Dollar& Val);
        void afficher()const override;
        Devise* Clone() const override;
        Devise* Clone_no_convert(double val) const override;
        double value() const override;
    };
}

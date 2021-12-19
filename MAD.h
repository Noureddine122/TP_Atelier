#pragma once
#include "Devise.h"
namespace Banque {
    class MAD : public Devise
    {
        const static double Ratio;
    public:
        explicit MAD(double Val);
        MAD(const MAD& Val);
        void afficher()const override;
        Devise* Clone() const override;
        Devise* Clone_no_convert(double val) const override;
        double value() const override;
    };
}

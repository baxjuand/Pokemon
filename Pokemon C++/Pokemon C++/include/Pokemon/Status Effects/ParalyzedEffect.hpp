//
//  ParalyzedEffect.hpp
//  Pokemon C++
//
//  Created by David Bayona on 11/05/25.
//
#pragma once
#include <iostream>
#include "IStatusEffect.hpp"

using namespace std;

namespace N_Pokemon
{
    namespace N_StatusEffect
    {
        class ParalyzedEffect : public IStatusEffect
        {
        private:
            int turnsLeft;
            
        public:
            void applyEffect(Pokemon *target) override;
            string getEffectName() override;
            bool turnEndEffect(Pokemon *target) override;
            void clearEffect(Pokemon *target) override;
        };
    }

}



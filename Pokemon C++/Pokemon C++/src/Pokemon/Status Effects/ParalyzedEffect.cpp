//
//  ParalyzedEffect.cpp
//  Pokemon C++
//
//  Created by David Bayona on 11/05/25.
//
#include <iostream>
#include "ParalyzedEffect.hpp"
#include "Pokemon.hpp"
#include "StatusEffectType.hpp"

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        void ParalyzedEffect::applyEffect(Pokemon *target)
        {
            cout << target->getName() << " is paralyzed! It may not be able to move!" << endl;
            
            turnsLeft = (rand() % 3) + 1;
        }
    
        string ParalyzedEffect::getEffectName()
        {
            return "Paralyzed";
        }
    
        bool ParalyzedEffect::turnEndEffect(Pokemon *target)
        {
            if (turnsLeft <= 0)
            {
                ParalyzedEffect::clearEffect(target);
                return true;
            }
            
            turnsLeft--;
            
            int paralysisChance = rand() % 4;
            
            if (paralysisChance == 0)
            {
                cout << target->getName() << " is paralized! It can't move!" << endl;
                return false;
            }
            
            cout << target->getName() << " shakes off the paralysis momentarily and can move!" << endl;
            return true;
        }
    
        void ParalyzedEffect::clearEffect(Pokemon *target)
        {
            cout << target->getName() << " is no longer paralyzed!" << endl;
            target->clearEffect();
        }
    }
}


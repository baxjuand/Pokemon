//
//  PoisonEffect.cpp
//  Pokemon C++
//
//  Created by David Bayona on 12/05/25.
//
#include "PoisonEffect.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    namespace N_StatusEffect
    {
        
        void PoisonEffect::applyEffect(Pokemon *target)
        {
            cout << target->getName() << " is poisoned! It may not be able to move!" << endl;
        }
        
        string PoisonEffect::getEffectName()
        {
            return "Poisoned";
        }
    
        bool PoisonEffect::turnEndEffect(Pokemon *target)
        {
            hpToReduce = (target->getMaxHealth() * poisonPercentageReduction) / ticks;
            
            
            if (turnsLeft <= 0)
            {
                PoisonEffect::clearEffect(target);
                return true;
            }
            
            target->takeDamage(hpToReduce);
            
            turnsLeft--;
            
            cout << target->getName() << " receives " << hpToReduce << " damage from poison!" << endl;
            
            return false;
                                  
        }
    
        void PoisonEffect::clearEffect(Pokemon *target)
        {
            cout << target->getName() << " is no longer poisoned!" << endl;
            target->clearEffect();
        }
    }
}

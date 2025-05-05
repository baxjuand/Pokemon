//
//  Charmander.hpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#pragma once
#include "Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Charmander : public Pokemon
        {
        public:
            
            Charmander();
            
        private:
            void flameThrower(Pokemon &target);
            virtual void attack(Pokemon *target) override;
        };
    }
}


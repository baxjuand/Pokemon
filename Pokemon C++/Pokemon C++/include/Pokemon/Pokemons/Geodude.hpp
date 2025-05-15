//
//  Geodude.hpp
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
        class Geodude : public Pokemon
        {
        public:
            
            Geodude();
            
        private:
            //void rockSlide(Pokemon *target);
            void attack(Move selectedMove, Pokemon *target) override;
        };
    }
}


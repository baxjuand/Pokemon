//
//  PokemonType.hpp
//  Pokemon C++
//
//  Created by David Bayona on 12/04/25.
//

// Define the enum class for Pokemon Types

enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Grass,
    Normal,
    Rock,
    Insect,
    Flying,
    MaxValue = 0xff //Optimization for the compiler. Good optimization practice.
};

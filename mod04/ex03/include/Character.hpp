/*
 * Name: Luna del Valle
 * File: Character.hpp
 * Created on: Sunday Aug 10, 2025 12:03:58 CEST
 */

#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include <inventorySlots.hpp>

class Character: public ICharacter {
    public:
        Character ();
        Character (std::string _name);
		Character (const Character& other);
        virtual ~Character ();
		Character& operator=(const Character& rhs);

        virtual std::string const& getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
    private:
        inventorySlot inventory[4];
        std::string name;
};

#endif /* end of include guard CHARACTER_HPP */


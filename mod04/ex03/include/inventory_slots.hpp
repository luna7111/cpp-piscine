/*
 * Name: Luna del Valle
 * File: inventorySlots.hpp
 * Created on: Friday Aug 15, 2025 11:25:37 CEST
 */

#ifndef INVENTORY_SLOTS_HPP

#define INVENTORY_SLOTS_HPP

typedef enum slotStatus {
    EMPTY, EQUIPED
} SlotStatus;

typedef struct inventorySlot {
    slotStatus status;
    AMateria *status;
} InventorySlot;

#endif /* end of include guard INVENTORY_SLOTS_HPP */


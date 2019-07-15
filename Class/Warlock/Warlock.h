#pragma once

#include "Character.h"

class Mana;
class WarlockSpells;

class Warlock: public Character {
public:
    Warlock(Race* race, EquipmentDb* equipment_db, SimSettings* sim_settings, RaidControl* raid_control, const int party = -1, const int member = -1);
    ~Warlock() override;

    unsigned get_strength_modifier() const override;
    unsigned get_agility_modifier() const override;
    unsigned get_stamina_modifier() const override;
    unsigned get_intellect_modifier() const override;
    unsigned get_spirit_modifier() const override;
    double get_agi_needed_for_one_percent_phys_crit() const override;
    double get_int_needed_for_one_percent_spell_crit() const override;
    double get_mp5_from_spirit() const override;
    double global_cooldown() const override;

    unsigned get_melee_ap_per_strength() const override;
    unsigned get_melee_ap_per_agi() const override;
    unsigned get_ranged_ap_per_agi() const override;
    int get_highest_possible_armor_type() const override;
    QVector<int> get_weapon_proficiencies_for_slot(const int slot) const override;

    unsigned get_resource_level(const ResourceType) const override;
    unsigned get_max_resource_level(const ResourceType) const override;
    void gain_mana(const unsigned value) override;
    void lose_mana(const unsigned value) override;

    void increase_base_mana(const unsigned value) override;
    void decrease_base_mana(const unsigned value) override;

private:
    WarlockSpells* warlock_spells;
    Mana* mana;

    void initialize_talents() override;
    void reset_class_specific() override;
};

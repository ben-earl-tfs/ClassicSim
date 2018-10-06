#ifndef TESTCHARACTER_H
#define TESTCHARACTER_H

class EquipmentDb;

class TestCharacter {
public:
    TestCharacter();
    virtual ~TestCharacter();

    virtual void test_all() = 0;
    virtual void test_basic_properties() = 0;

    double delta(double lhs, double rhs);

protected:
    EquipmentDb* equipment_db;
};

#endif // TESTCHARACTER_H
#pragma once
#include "..\tables\AbstractTable.h"
#define START_CAPACITY 2

class ArrayTable : public AbstractTable {
    typedef struct KeyValuePair {
        string key;
        Polynom value;
    } KeyValuePair;

    KeyValuePair* arr;
    int count = 0;
    int capacity;

    int find_index(string key);

public:
    ArrayTable();
    ~ArrayTable();
    //virtual void sortTable();
    virtual void insert(std::string key, const Polynom& value); //  ����������� ������� ��� �������
    virtual Polynom& search(std::string key); //  ����������� ������� ��� ������
    virtual void remove(std::string key); //  ����������� ������� ��� ��������
    virtual void printTable();
};
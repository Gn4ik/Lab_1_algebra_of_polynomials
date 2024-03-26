#pragma once
#include "..\tables\AbstractTable.h"
#include "..\tables\myList.h"

class HashTable :
    public AbstractTable
{
    typedef struct KeyValuePair {
        string key;
        Polynom value;
    } KeyValuePair;

    typedef struct Bucket {
        unsigned long long key;
        myList<KeyValuePair> chain;
    } Bucket;

    myList<Bucket*> buckets;

    int count;

public:
    HashTable();
    ~HashTable();
    //virtual void sortTable();
    virtual void insert(std::string key, const Polynom& value); //  ����������� ������� ��� �������
    virtual Polynom& search(std::string key); //  ����������� ������� ��� ������
    virtual void remove(std::string key); //  ����������� ������� ��� ��������
    virtual void printTable();

    unsigned long long GetHash(string key);
    Node<Bucket*>* findInList(unsigned long long h);
};
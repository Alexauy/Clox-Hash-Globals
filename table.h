#ifndef clox_table_h
#define clox_table_h

#include "common.h"
#include "value.h"

//Changed the ObjString* to value for challenge 1 of chapter 20
typedef struct {
  Value key;
  Value value;
} Entry;

typedef struct {
  int count;
  int capacity;
  Entry* entries;
} Table;

void initTable(Table* table);
void freeTable(Table* table);
bool tableGet(Table* table, Value key, Value* value);  // [ch20-ex2]
bool tableSet(Table* table, Value key, Value value);  // [ch20-ex2]
bool tableDelete(Table* table, Value key);  // [ch20-ex2]
void tableAddAll(Table* from, Table* to);
ObjString* tableFindString(Table* table, const char* chars,
                           int length, uint32_t hash);

#endif

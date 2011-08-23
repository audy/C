// Austin Davis-Richardson
// harekrishna@gmail.com

#ifndef	hello
#define	hello

// FUNCTIONS DEFINED IN HOMEWORK

void loadFile(const char *fileName);
void saveFile(const char *fileName);
void findRecord(int field, const char *data);
void removeRecord(int field, const char *data);
void insertRecord(const char *fn, const char *ln, int salary, int accounts, const char *division);
void sortDataBase(int field);

// HELPER FUNCTIONS

static void swapRecords();
static void printDatabase();
static void printRecord(); 
static void removeCurrent();

#endif
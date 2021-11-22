#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

int main() {
    HashTable* ht = create_table(CAPACITY);
    ht_insert(ht, "1", "First address");
    ht_insert(ht, "2", "Second address");
    ht_insert(ht, "Hel", "Third address");
    ht_insert(ht, "Cau", "Fourth address");
    ht_insert(ht, "Cbt", "Fifth address");
    print_table(ht);
    ht_insert(ht, "Ccs", "Sixth address");
    print_search(ht, "1");
    print_search(ht, "2");
    print_search(ht, "3");
    print_search(ht, "Hel");
    print_search(ht, "Cau");  // Collision!
    print_table(ht);
    ht_delete(ht, "1");
    ht_delete(ht, "Cau");
    print_search(ht, "Ccs");
    print_table(ht);
    free_table(ht);
    return 0;
}

#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "linked_list2.h"

/* hash table structure and helper function declarations */

typedef struct hash_table_struct {

	int num_of_buckets ;		/* size of hash table     */
	struct_of_ints **table ;	/* array of head pointers */

} hash_table ;


/* Hash Table helper function declarations */
hash_table* 	create_hash_table (hash_table* table, int num_of_buckets) ;
unsigned int   	map               (hash_table* table, char* chars) ;
struct_of_ints*	find			  (hash_table* table, char* chars) ;
int            	add_to_table      (hash_table* table, char* chars) ;
int            	delete_from_table (hash_table* table, char* chars) ;
void           	print_table       (hash_table* table) ;
void           	delete_table      (hash_table* table) ;

#endif

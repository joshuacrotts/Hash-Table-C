//
//	Main method
//

#include <stdio.h>

#include "hash_table.h"

int main( int argc, char** argv )
{
	ht_hash_table* ht = ht_new();
	
	ht_insert( ht, "Key1", "Value1" ); 
	printf( "Inserting \"Key1\" and \"Value1\" into table.\n" );
	ht_insert( ht, "Key2", "Value2" );
	printf( "Inserting \"Key2\" and \"Value2\" into table.\n" );
	char* lookup = ht_search( ht, "Key1" );
	printf( "Value for Key1: %s\n", lookup );
	printf( "Size: %i\n", ht->count );
	printf( "Maximum Capacity: %i\n", ht->size );
	ht_del_hash_table( ht );
}
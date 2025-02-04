/* MEMSET.C: This program uses memset to
 * set the first four bytes of buffer to "*".
 */

#include <memory.h>
#include <stdio.h>

void main( void )
{
   char buffer[] = "This is a test of the memset function";

   printf( "Before: %s\n", buffer );
   memset( buffer, '*', 4 );
   printf( "After:  %s\n", buffer );
}

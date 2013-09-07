#define paster( n ) printf( "token" #n " = %d", token##n )
 
main()
{
    int token9 = 9;
    paster( 9 );
}
/*
等效于printf( "token" "9" " = %d", token9 );
 
$ a.exe
token9 = 9
 
 */

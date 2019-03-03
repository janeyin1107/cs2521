// testList.c - testing DLList data type
// Written by John Shepherd, March 2013

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include "DLList.h"

int main (void)
{


///////// empty list

//show the state of the list before the operation (including curr and nitems)
        printf("===============================\n");
        printf("==========DLListDelete=========\n");
        printf("===============================\n");

        printf("\n");
        printf("\n");
        printf("checking empty list......\n");
        printf ("state of the list before the operation++++++++++\n");
        FILE *f;
        f= fopen("empty","r");
        DLList emptylist = getDLList(f);   
        
        printf("--nitems %zu \n", DLListLength(emptylist));
        //indicate what operation is about to be performed
        printf("*****delete current item*****\n");
        //invoke the operation
        DLListDelete (emptylist);
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");    
        
        printf("--nitems %zu \n", DLListLength(emptylist));
        //run the validDLList() check on the list
        assert (validDLList (emptylist));
        freeDLList (emptylist);

// one node
        printf("===============================\n");
        printf("checking one node list......\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("oneline","r");
        DLList onenodelist = getDLList(f);
        putDLList (stdout, onenodelist);
        printf("--current line: %s\n", DLListCurrent(onenodelist));     
        
        printf("--nitems %zu \n", DLListLength(onenodelist));
        
        //indicate what operation is about to be performed
        printf("*****delete current item*****\n");
        //invoke the operation
        DLListDelete (onenodelist);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");    
        
        printf("--nitems %zu \n", DLListLength(onenodelist));
        //run the validDLList() check on the list
        assert (validDLList (onenodelist));
        freeDLList (onenodelist);
// ten lines with current being first
        printf("===============================\n");
        printf("checking ten node list with current being first.....\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("tenlines","r");
        DLList tennodelist = getDLList(f);
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****delete current item*****\n");
        //invoke the operation
        DLListDelete (tennodelist);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));

        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);


// ten lines with current being middle
        printf("===============================\n");
        printf("checking ten node list with current being middle.....\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("tenlines","r");
        tennodelist = getDLList(f);
        putDLList (stdout, tennodelist);
        DLListMove (tennodelist, 5);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****delete current item*****\n");
        //invoke the operation
        DLListDelete (tennodelist);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));

        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);
//


// ten lines with current being last
        printf("===============================\n");
        printf("checking ten node list with current being last.....\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("tenlines","r");
        tennodelist = getDLList(f);
        putDLList (stdout, tennodelist);
        DLListMove (tennodelist, 10);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****delete current item*****\n");
        //invoke the operation
        DLListDelete (tennodelist);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));

        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);
//




        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");




///////// empty list

//show the state of the list before the operation (including curr and nitems)
        printf("===============================\n");
        printf("==========DLListAfter=========\n");
        printf("===============================\n");
        printf("\n");
        printf("\n");
        printf("checking empty list......\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("empty","r");
        emptylist = getDLList(f);   
        
        printf("--nitems %zu \n", DLListLength(emptylist));
        //indicate what operation is about to be performed
        printf("*****insert after*****\n");
        //invoke the operation
        char *it = "this is a new line";
        DLListAfter (emptylist, it);
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, emptylist);
        printf("--current line: %s\n", DLListCurrent(emptylist));     
        
        printf("--nitems %zu \n", DLListLength(emptylist));
        //run the validDLList() check on the list
        assert (validDLList (emptylist));
        freeDLList (emptylist);

// one node
        printf("===============================\n");
        printf("checking one node list......\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("oneline","r");
        onenodelist = getDLList(f);
        putDLList (stdout, onenodelist);
        printf("--current line: %s\n", DLListCurrent(onenodelist));             
        printf("--nitems %zu \n", DLListLength(onenodelist));
        
        //indicate what operation is about to be performed
        printf("*****insert after*****\n");
        //invoke the operation
        DLListAfter (onenodelist, it);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, onenodelist);
        printf("--current line: %s\n", DLListCurrent(onenodelist));     
        
        printf("--nitems %zu \n", DLListLength(onenodelist));
        //run the validDLList() check on the list
        assert (validDLList (onenodelist));
        freeDLList (onenodelist);
        
// ten lines with empty lines with current being first
        printf("===============================\n");
        printf("checking ten node list current first.....\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("tenlines","r");
        tennodelist = getDLList(f);
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****insert after*****\n");
        //invoke the operation

        DLListAfter (tennodelist, it);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);


// ten lines with empty lines with current being middle
        printf("===============================\n");
        printf("checking ten node list with current middle....\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("tenlines","r");
        tennodelist = getDLList(f);
        DLListMove (tennodelist, 5);
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));           
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****insert after*****\n");
        //invoke the operation
        DLListAfter (tennodelist, it);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);


// ten lines with empty lines with current being last
        printf("===============================\n");
        printf("checking ten node list with current last....\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("tenlines","r");
        tennodelist = getDLList(f);
        DLListMove (tennodelist, 10);
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));            
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****insert after*****\n");
        //invoke the operation
        DLListAfter (tennodelist, it);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);



        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

/** insert an item before current item
 * new item becomes current item */
//id DLListBefore (DLList L, char *it)

///////// empty list

//show the state of the list before the operation (including curr and nitems)
        printf("===============================\n");
        printf("==========DLListBefore=========\n");
        printf("===============================\n");
        printf("\n");
        printf("\n");
        printf("checking empty list......\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("empty","r");
        emptylist = getDLList(f);    
        
        printf("--nitems %zu \n", DLListLength(emptylist));
        //indicate what operation is about to be performed
        printf("*****insert before*****\n");
        //invoke the operation
        DLListBefore(emptylist, it);
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, emptylist);
        printf("--current line: %s\n", DLListCurrent(emptylist));          
        printf("--nitems %zu \n", DLListLength(emptylist));
        //run the validDLList() check on the list
        assert (validDLList (emptylist));
        freeDLList (emptylist);
        
// one node
        printf("===============================\n");
        printf("checking one node list......\n");
        printf ("state of the list before the operation++++++++++\n");
        f= fopen("oneline","r");
        onenodelist = getDLList(f);
        putDLList (stdout, onenodelist);
        printf("--current line: %s\n", DLListCurrent(onenodelist));            
        printf("--nitems %zu \n", DLListLength(onenodelist));
        
        //indicate what operation is about to be performed
        printf("*****insert before*****\n");
        //invoke the operation
        DLListBefore(onenodelist, it);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, onenodelist);
        printf("--current line: %s\n", DLListCurrent(onenodelist));     
        
        printf("--nitems %zu \n", DLListLength(onenodelist));
        //run the validDLList() check on the list
        assert (validDLList (onenodelist));
        freeDLList (onenodelist);

// ten lines with empty lines with current being first
        printf("===============================\n");
        printf("checking ten node list with current first.....\n");
        printf ("state of the list before the operation++++++++++\n");
        
        f= fopen("tenlines","r");
             
        tennodelist = getDLList(f);
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));         
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****insert before*****\n");
        //invoke the operation
        DLListBefore(tennodelist, it);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));            
        printf("--nitems %zu \n", DLListLength(tennodelist));
              
        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);


// ten lines with empty lines with current being middle
        printf("===============================\n");
        printf("checking ten node list with current middle.....\n");
        printf ("state of the list before the operation++++++++++\n");       
        f= fopen("tenlines","r");
             
        tennodelist = getDLList(f);
        DLListMove (tennodelist, 5);
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));           
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****insert before*****\n");
        //invoke the operation
        DLListBefore(tennodelist, it);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));          
        printf("--nitems %zu \n", DLListLength(tennodelist));    
        
        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);


// ten lines with empty lines with current being last
        printf("===============================\n");
        printf("checking ten node list with current last.....\n");
        printf ("state of the list before the operation++++++++++\n");
        
        f= fopen("tenlines","r");
        
        tennodelist = getDLList(f);
        DLListMove (tennodelist, 10);
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));     
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //indicate what operation is about to be performed
        printf("*****insert before*****\n");
        //invoke the operation
        DLListBefore(tennodelist, it);
        
        //display the state of the list after the operation
        printf ("state of the list after the operation+++++++++\n");
        putDLList (stdout, tennodelist);
        printf("--current line: %s\n", DLListCurrent(tennodelist));        
        printf("--nitems %zu \n", DLListLength(tennodelist));
        
        //run the validDLList() check on the list
        assert (validDLList (tennodelist));
        freeDLList (tennodelist);
        
        printf("\n");
        printf("\n");


	
	return EXIT_SUCCESS;
}

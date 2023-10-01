/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    int   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : 
            Mai
        Age : 
            24
        Sex : 
            M
        Score : 
            99.99

        Person B
        Name : 
            Mon
        Age : 
            21
        Sex : 
            F
        Score : 
            87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points

*/

#include<stdio.h>

struct PersonInfo
{
    char name[20] ;
    int age ; 
    char sex; 
    float score ;
}typedef Pinfo;

int main(){

    Pinfo pi[2] ;

    char personN = 'A' ; 

    for (int i = 0 ; i < 2; i++ )
    {
        printf( "\nPerson %c\nName : \n" , personN ) ;
        scanf( "%19s" , pi[i].name ) ; 

        printf( "Age : \n" ) ;
        scanf( "%d" , &pi[i].age ) ;
         
        printf("Sex : \n") ;
        scanf( " %c" , &pi[i].sex ) ;

        printf("Score : \n") ;
        scanf( "%f" , &pi[i].score ) ; 
        
        personN++ ; 
    }

    personN = 'A';

    for (int i = 0; i < 2; i++ , personN++)
    {
        printf( "--| Person %c Information |--\n" , personN ) ;
        printf( "Name : %s (%c)\n" , pi[i].name , pi[i].sex ) ;
        printf( "Age : %d years old\n" , pi[i].age ) ;
        printf( "Score : %.2f points\n" , pi[i].score ) ;  
    }
        

    return 0 ; 
}
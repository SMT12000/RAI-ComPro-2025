#include<stdio.h>
#include<string.h>

int main()
{
    struct address {
        int add;
        int moo;
        char road[20];
        char district[20];
        char province[20];
    };
    
    struct university {
        char name[70];
        struct address place;
    };
    
    struct university king;

    strcpy(king.name, "King Mongkut's Institute of Technology Ladkrabang");
    king.place.add = 3;
    king.place.moo = 2;

    strcpy(king.place.road, "Chalongkrung");
    strcpy(king.place.district, "Ladkrabang");
    strcpy(king.place.province, "Bangkok");

    printf("%s\n", king.name);
    printf("Address : %d Moo %d, %s Rd.\n",
           king.place.add, king.place.moo, king.place.road);
    printf(" %s, %s\n", king.place.district, king.place.province);

    return 0;
}

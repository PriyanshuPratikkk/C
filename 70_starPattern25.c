// Star Pattern : 25
//Author : Priyanshu Kumar Sinha // Date : 1 Aug 2022

//__________1__________                 //__________11__________
//_________121_________                //_________101112______
//________23432________               //________910111213_______
//_______3456543_______             //_______891011121314_______
//______456787654______            //______789101112131415_____
//_____56789098765_____          //_____678910111213141516_____
//____6789012109876____         //____567891011121314151617____
//___789012343210987___        //___456789101112131415161718___
//__89012345654321098__       //__3455678910111213141516171819__
//_9012345678765432109_      //_234567891011121314151617181920_
//012345678909876543210     //123456789101112131415161718192021       
//_9012345678765432109_      //_234567891011121314151617181920_
//__89012345654321098__       //__3455678910111213141516171819__
//___789012343210987___        //___456789101112131415161718___
//____6789012109876____         //____567891011121314151617____
//_____56789098765_____         //_____678910111213141516_____
//______456787654______          //______789101112131415_____
//_______3456543_______          //_______891011121314_______
//________23432________          //________910111213_______
//_________121_________          //_________101112______
//__________1__________          //__________11__________

#include<stdio.h>

int main()
{
    int i,j,n=21,m=n/2+1,k=1,l=0;
    for(i=1; i<=n;i++)    
    {
        l=k-2;
        for (j=1;j<=n;j++)
        {
            if(j>=m-k+1 && j<=m+k-1 ) // 
            {
                if(j<=11)
                    l++;
                else
                    l--;

                if(l==10)
                    l=0;        
                else if(l<0)
                    l=10+l;
                    
                printf("%d",l);
            }
            else
                printf(" ");
        }


        printf("\n");

        if(i<m)
            k++;
        else
            k--;

        
    }
}
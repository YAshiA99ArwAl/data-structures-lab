#include<iostream>
using namespace std;
int main (){

    int sp1[4][3]={{3,3,3},{0,1,3},{2,2,6},{1,5,9}};
    int sp2[4][3]={{3,3,3},{3,1,5},{2,2,8},{0,3,7}};

    int sp3[30][3];
    int i=1,j=1,k=1;

    int l1=sp1[0][2];
    int l2=sp2[0][2];
    while(i<=l1 && j<=l2){
        if
            ( sp1[i][0]<sp2[j][0] || (sp1[i][0]==sp2[j][0] && sp1[i][1]<sp2[j][1]) ){
                sp3[k][0]=sp1[i][0];
                sp3[k][1]=sp1[i][1];
                sp3[k][2]=sp1[k][2];
                i++;k++;
        }

        else if   ( sp1[i][0]>sp2[j][0] || (sp1[i][0]==sp2[j][0] && sp1[i][1]>sp2[j][1]) ){
                sp3[k][0]=sp1[j][0];
                sp3[k][1]=sp1[j][1];
                sp3[k][2]=sp1[j][2];
                j++;k++;
        }
        else //same rows and columns value
        {
            sp3[k][0]=sp1[i][0];
            sp3[k][1]=sp1[i][1];
            sp3[k][2]=sp1[k][2];
                j++;i++;k++;
        }
    }

    //copy remaining elements
    while(i<=l1){
        sp3[k][0]=sp1[i][0];
                sp3[k][1]=sp1[i][1];
                sp3[k][2]=sp1[k][2];
                i++;k++;
    }
    while(j<=l2){
        sp3[k][0]=sp1[j][0];
                sp3[k][1]=sp1[j][1];
                sp3[k][2]=sp1[j][2];
                j++;k++;
    }

    sp3[0][2]=k-1;

    cout<<"addition of two sparse matrix:\n";
    cout<<"rows\tcolumns\tvalues\n";
    for(int x=0;x<=sp3[0][2];x++){
    }
    return 0;
}

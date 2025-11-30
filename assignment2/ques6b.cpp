#include<iostream>
using namespace std;

int main (){
    int sp1[4][3]={{3,3,3},{0,1,3},{2,2,6},{1,5,9}};
    int sp2[4][3]={{3,3,3},{3,1,5},{2,2,8},{0,3,7}};
    int sp3[30][3];
    int i=1, j=1, k=1;
    int l1 = sp1[0][2];
    int l2 = sp2[0][2];

    while(i <= l1 && j <= l2){
        if( sp1[i][0] < sp2[j][0] ||
           (sp1[i][0] == sp2[j][0] && sp1[i][1] < sp2[j][1]) )
        {
            sp3[k][0] = sp1[i][0];
            sp3[k][1] = sp1[i][1];
            sp3[k][2] = sp1[i][2];
            i++; k++;
        } else if( sp1[i][0] > sp2[j][0] ||
                (sp1[i][0] == sp2[j][0] && sp1[i][1] > sp2[j][1]) )
        {
            sp3[k][0] = sp2[j][0];
            sp3[k][1] = sp2[j][1];
            sp3[k][2] = sp2[j][2];
            j++; k++;
        } else {
            sp3[k][0] = sp1[i][0];
            sp3[k][1] = sp1[i][1];
            sp3[k][2] = sp1[i][2] + sp2[j][2];
            i++; j++; k++;
        }
    }

    while(i <= l1){
        sp3[k][0] = sp1[i][0];
        sp3[k][1] = sp1[i][1];
        sp3[k][2] = sp1[i][2];
        i++; k++;
    }

    while(j <= l2){
        sp3[k][0] = sp2[j][0];
        sp3[k][1] = sp2[j][1];
        sp3[k][2] = sp2[j][2];
        j++; k++;
    }

    sp3[0][0] = sp1[0][0]; 
    sp3[0][1] = sp1[0][1];  
    sp3[0][2] = k - 1;      
    
    cout << "Sparse Matrix Addition:\n";
    cout << "Row\tCol\tVal\n";
    for(int x=0; x <= sp3[0][2]; x++){
        cout << sp3[x][0] << "\t" << sp3[x][1] << "\t" << sp3[x][2] << endl;
    }
    return 0;
}

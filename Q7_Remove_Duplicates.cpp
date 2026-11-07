#include <iostream>
using namespace std;
int main() {
    int arr[8]={4, 2, 2, 7, 4, 9, 7, 1};
    int n=8,result[8],resultSize=0;
    for (int i = 0; i < n; i++){
        bool duplicate = false;
        for (int j = 0; j < resultSize;j++){
            if (arr[i]==result[j]){
                duplicate=true;
                break;
            }
        }
        if (!duplicate){
            result[resultSize]=arr[i];
            resultSize++;
        }
    }
    cout<<"After removing duplicates: ";
    for (int i=0;i<resultSize;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}

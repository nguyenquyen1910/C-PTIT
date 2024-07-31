#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
    int min_pos;
    for(int i=0;i<n-1;i++){
        min_pos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_pos]){
                min_pos=j;
            }
        }
        cout << "Buoc " << i+1 << " : ";
        swap(a[i],a[min_pos]);
        for(int j=0;j<n;j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
void insertionsort(int a[],int n){
    int key;
    printf("Buoc 0: %d\n",a[0]);
    for(int i=1;i<n;i++){
        key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        cout << "Buoc " << i << " : ";
        for(int k=0;k<=i;k++){
           cout << a[k] << " ";
        } 
        cout << endl;
    }
}
void bubblesort(int a[],int n){
    int m=1;
    for(int i=0;i<n-1;i++){
        int count=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                count=1;
            }
        }
        if(count==0){
            break;
        }
        cout << "Buoc " << m++ << " : ";
        for(int j=0;j<n;j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
void livesort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
        cout << "Buoc " << i+1 << " : ";
        for(int j=0;j<n;j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
void merge(int a[],int l,int m,int r){
    int n1=m-l+1,n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=a[i+l];
    }
    for(int i=0;i<n2;i++){
        R[i]=a[i+m+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k++]=L[i++];
        }
        else a[k++]=R[j++];
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}
void mergesort(int a[],int l,int r){
    if(l<=r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int parpatition(int a[],int l,int r){
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(a[j] <= pivot){
            ++i;
            swap(a[i],a[j]);
        }
    }
    ++i;
    swap(a[i],a[r]);
    return i;
}
void quicksort(int a[],int l,int r){
    if(l<r){
        int p=parpatition(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}
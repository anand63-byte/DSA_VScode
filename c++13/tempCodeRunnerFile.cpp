
                 res[k++]=a[i++];
                 }
            }

}
void mergesort( vector<int> &a){
    int n=a.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-n1;
    
    vector<int> v(n1),b(n2);
    for(int i=0;i<n1;i++) v[i]=a[i];
    for(int i=0;i<n-n1;i++) b[i]=a[n1+i];
mergesort(v);
mergesort(b);
merge(v,b,a);
}

int main(){
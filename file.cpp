int TinhTongCacUoc(int n)
{
    int s=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    return s;
}

bool TinhSoDep(int n)
{
    int s=0;
    while(n>0){
        int c=n%10;
        s = s+ (c*c);
        n=n/10;
    }
    int dem=0;
    for(int i=1;i<=s;i++){
        if(s%i==0){
            dem++;
        }
    }
    if(dem==2){
        return true;
    }
    else{
        return false;
    }
}

bool SoDep4Uoc(int n){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==4){
        return true;
    }
    else{
        return false;
    }
}

bool KiemTraSoNguyenTo(int n){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==2){
        return true;
    }
    else{
        return false;
    }
}

int TongNguyenTo(int n){
    int dem=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(KiemTraSoNguyenTo(i)== true && KiemTraSoNguyenTo(j)== true){
                if(i+j==n){
                    dem++;
                }
            }
        }
    }
    return dem/2;
}

int DemTuXau(char a[1000]){
    // Luu Y a[0] != ''
    int dem=0;
    string f = "";
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            f=f+a[i];
        }
        else{
            f="";
            dem++;
        }
    }
    f="";
    dem++;
    return dem;
}

void Bai3THCSMAITHUY(char a[1000]){
    // Luu Y a[0] != ''
    //bai3
    //https://thcsmaithuy.quangtri.edu.vn/thu-vien-de-thi/hoc-sinh-gioi/de-kiem-tra-hsg-tin-hoc-8-cap-huyen-nam-hoc-2018-2019.html
    int dem=0;
    char c[1000];
    string max ="";
    for(int i=0;i<strlen(a);i++){
        c[i]=a[i];
    }
    char *b = strtok(a," ");
    while(b!=NULL){
        dem++;
        if(strlen(b)>max.length()){
        max = b;
        }   
        b= strtok(NULL," ");
    }
    cout<<dem<<endl;
    char *d = strtok(c," ");
    while(d!=NULL){
        if(strlen(d)==max.length()){
            cout<<d<<","<<" ";
        }
        d= strtok(NULL," ");
    }
}

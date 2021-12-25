#include<iostream>
#include<string>
#include<vector>
using namespace std;
void binarytodecimal( string binary ){
    
    
    long long decimal = 0, base_val = 1, len = binary.length() ;
     
    for (int i = len - 1; i >= 0; i--,base_val*=2)
        if(binary[i]=='1')
            decimal += base_val;

    cout << decimal << "\n" ;
        
}


void decimaltobinary( long long decimal ){
    
   
    vector<bool> binary (64) ;
    int idx=0;

    while (decimal > 0){
        
        binary[idx] = decimal & 1;
        decimal >>= 1;
        idx++;
        
    }
    idx--;
    while(idx >= 0)
        cout << binary[idx--] ;
    cout << "\n";

}


void octaltodecimal( long long octal ){
    
    
    long long decimal = 0, base_val = 1 ;

    while(octal){
        
        decimal += ( octal % 10 ) * base_val;
        octal /= 10    ;
        base_val *= 8;
        
    }

    cout << decimal << "\n";
    
}


void decimaltooctal( long long decimal ){
    
   
    vector<int> octal (22);
    int idx = 0;

    while(decimal){
        
        octal[idx] = decimal % 8;
        decimal >>= 3;                            
        idx++;
        
    }
    idx--;
    while(idx >= 0)
        cout << octal[idx--] ;
    cout << "\n";
    
}

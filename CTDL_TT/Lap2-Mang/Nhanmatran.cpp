    #include<iostream>
    using namespace std ; 
    int main (){
        int m , n , k ; 
        cin >> m >> n >> k ; 

        int A[100][100] , B[100][100] , C[100][100] ; 
        // Ma tran A 
        for ( int i = 0 ; i < m ; i++){
            for ( int j = 0 ; j < n ; j++){
                cin >> A[i][j] ;
            }
        } 
        // Ma tran B 
        for ( int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < k ; j++){
                cin >> B[i][j] ;
            }
        }
        // Khoi tao ma tran C= 0 
        for ( int i = 0 ; i < m ; i++){
            for ( int j = 0 ; j < k ; j++){
            C[i][j] = 0 ; 
            }
        }
        // Tinh tich cua ma tran 
        for ( int i = 0 ; i < m ; i++){
            for ( int j = 0 ; j < k ; j++){
                for ( int l = 0 ; l < n ; l++){
                C[i][j] += A[i][l] * B[l][j];
                }
            }
        }
        
        for (int i = 0 ; i < m ; i++){
            for ( int j = 0 ; j < k ; j++){
                cout << C[i][j] << " " ;
            }
        cout << endl ; 
        }
        
        return 0 ; 
    }
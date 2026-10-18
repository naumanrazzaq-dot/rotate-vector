    #include <iostream>
    #include <vector>
    using namespace std;
    int main(){

        vector<int> vec={1,2,3,4,5};
        int rotate=0;
        int k=2;
            
        while(rotate<k){
            vec.insert(vec.begin(),vec.back());
                rotate++;  
                vec.pop_back(); 
            
            }
            
        
        for(auto it=vec.begin();it!=vec.end();it++){
            cout<<*(it)<<" ";
        }
    }
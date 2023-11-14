#include<bits/stdc++.h>
using namespace std;
class hashing{
    vector<list<int>> hashtable;
    int buckets;
    public:

    hashing(int size){
        buckets =size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets;
    }
    void addkey(int key){
        int index = hashvalue(key);
        hashtable[index].push_back(key);
    }

    list<int>::iterator searchkey(int key){
        int index =hashvalue(key);
        return find(hashtable[index].begin(),hashtable[index].end(),key);
    }
    void  deletekey(int key){
        int index = hashvalue(key);
    if(searchkey(key)!= hashtable[index].end()){
            hashtable[index].erase(searchkey(key));
            cout<<key<<" is deleted"<<endl;
        }else{
            cout<<"key is not found in the hashtable"<<endl;
        }
    }
};
int main(){
    hashing h(10);
    h.addkey(25);
    h.addkey(23);
    h.addkey(22);

    h.deletekey(22);
    h.deletekey(28);

    return 0;
}
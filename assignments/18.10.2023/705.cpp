class MyHashSet {
public:
    vector<int> v;
    int size;
    MyHashSet() {
      size=1e6+1;
        v.resize(size);
    }
    
    void add(int key) {
        v[key]=1;
    }
    
    void remove(int key) {
        v[key]=0;
    }
    
    bool contains(int key) {
        return v[key];
    }
};

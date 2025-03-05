
class MyHashSet {
public:
    int size = 1000001;
    vector<bool> store;
    MyHashSet() { store.resize(size); }

    void add(int key) { store[key] = true; }

    void remove(int key) { store[key] = false; }

    bool contains(int key) { return store[key]; }
};


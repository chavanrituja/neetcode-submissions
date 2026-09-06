class MyHashMap {
    private:
        static const int SIZE = 1000;
            vector<list<pair<int,int>>> buckets;

                int hash(int key) {
                        return key % SIZE;
                            }

                            public:
                                MyHashMap() {
                                        buckets.resize(SIZE);
                                            }

                                                void put(int key, int value) {
                                                        int i = hash(key);
                                                                for (auto &p : buckets[i]) {
                                                                            if (p.first == key) {
                                                                                            p.second = value;
                                                                                                            return;
                                                                                                                        }
                                                                                                                                }
                                                                                                                                        buckets[i].push_back({key, value});
                                                                                                                                            }

                                                                                                                                                int get(int key) {
                                                                                                                                                        int i = hash(key);
                                                                                                                                                                for (auto &p : buckets[i]) {
                                                                                                                                                                            if (p.first == key)
                                                                                                                                                                                            return p.second;
                                                                                                                                                                                                    }
                                                                                                                                                                                                            return -1;
                                                                                                                                                                                                                }

                                                                                                                                                                                                                    void remove(int key) {
                                                                                                                                                                                                                            int i = hash(key);
                                                                                                                                                                                                                                    buckets[i].remove_if([key](pair<int,int> p) {
                                                                                                                                                                                                                                                return p.first == key;
                                                                                                                                                                                                                                                        });
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                            };


/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
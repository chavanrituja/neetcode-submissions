class LFUCache {
    struct Node {
        int value;
        int freq;
        list<int>::iterator it;
    };

    int capacity;
    int minFreq;

    unordered_map<int, Node> mp;
    unordered_map<int, list<int>> freqList;

    void increaseFreq(int key) {
        int freq = mp[key].freq;

        freqList[freq].erase(mp[key].it);

        if (freqList[freq].empty()) {
            freqList.erase(freq);

            if (minFreq == freq)
                minFreq++;
        }

        mp[key].freq++;

        freqList[freq + 1].push_back(key);
        mp[key].it = prev(freqList[freq + 1].end());
    }

public:
    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }
    
    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        int value = mp[key].value;

        increaseFreq(key);

        return value;
    }
    
    void put(int key, int value) {
        if (capacity == 0)
            return;

        if (mp.find(key) != mp.end()) {
            mp[key].value = value;
            increaseFreq(key);
            return;
        }

        if (mp.size() == capacity) {
            int removeKey = freqList[minFreq].front();

            freqList[minFreq].pop_front();
            mp.erase(removeKey);

            if (freqList[minFreq].empty())
                freqList.erase(minFreq);
        }

        minFreq = 1;

        freqList[1].push_back(key);

        mp[key] = {
            value,
            1,
            prev(freqList[1].end())
        };
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
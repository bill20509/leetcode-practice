class OrderedStream {
public:
    OrderedStream(int n):id_(n + 1){
        
    }
    
    vector<string> insert(int idKey, string value) {
        id_[idKey] = value;
        vector<string> res;
        if(ptr_ == idKey) {
            while(ptr_ < id_.size() && !id_[ptr_].empty()){
                res.push_back(id_[ptr_]);
                ptr_++;
            }
        }
        return res;
    }
private:
    vector<string> id_;
    int ptr_ = 1;
};


/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
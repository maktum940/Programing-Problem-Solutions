

// Write your Student class here
class Student{
    private:
        int scores[5];
    public:
        void input(){
            for(int i = 0; i < 5; i++){
                cin >> scores[i];
            }
        }
        int calculateTotalScore(){
            int res = 0;
            for(int i = 0; i < 5; i++){
                res = res + scores[i];
            }
            return res;
        }
};



public:
    clock(int jam = 0, int menit = 0, int detik = 0);
    void setWaktu(int jamInput, int menitInput, int detikInput);
    int getJam();
    int getMenit();
    int getDetik();
    void displayJam();
    void tambahJam();
    void tambahMenit();
    void tambahDetik();

private:
    int jam, menit, detik;
};

Clock::Clock(int jam, int menit, int detik){
    setWaktu(jam, menit, detik);
}

void Clock::setWaktu(int jamInput, );

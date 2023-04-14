class NoDefault
{
public:
    NoDefault(int i) : n(i) {}
private:
    int n;
};

class C
{
    NoDefault ndft;
public:
    C() = default;
    C(NoDefault mNdft) : ndft(mNdft) {}
};

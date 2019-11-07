class Box {
    private:
    int l;
    int b;
    int h;
    public:
    Box() {
        l=0;
        b=0;
        h=0;
    }
    Box(int l,int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    Box(const Box &B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength() {
        return l;
    }
    int getBreadth() {
        return b;
    }
    int getHeight() {
        return h;
    }
    long long CalculateVolume() {
        return (long)l*b*h;
    }

    bool operator < (Box &B) {
        if((this->l < B.l) || (this->b < B.b && this->l==B.l) || (this->h<B.h && this->b==B.b && this->l==B.l))
            return true;
        return false;
    }
};
ostream &operator<<(ostream &out, Box &B) {
  out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return out;
};

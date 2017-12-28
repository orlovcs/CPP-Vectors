


class vecImpl{
    public:
    int x,y,z;
    vecImpl (vecImpl&& other): x{other.x}, y{other.y}, z{other.z}{}
    vecImpl(int x, int y, int z): x{x}, y{y}, z{z} {}
};

#include <math.h>

public int main()
{
    public float<32, 9> fa;
    private float<32, 9> fb, fc;
    smcinput(fa, 1);
    smcinput(fb, 1);
    smcinput(fc, 1);
    public float<32, 9> rlt;
    rlt = fa + fb + fc;
    smcoutput(rlt, 1);
    return 0;
}

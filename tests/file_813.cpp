void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<9;++i5)
                    a[49+3*i1+44*i3+45*i4+18*i5]=a[32+1*i1+11*i4+26*i5];
}
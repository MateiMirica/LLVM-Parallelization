void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<33;++i5)
                    a[8+22*i1+11*i3+26*i4+40*i5]=a[9+41*i3+28*i4+32*i5];
}
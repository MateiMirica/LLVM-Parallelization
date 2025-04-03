void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<14;++i5)
                    a[11+1*i1+8*i2]=a[16+11*i1+17*i2+30*i3+27*i4+15*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<35;++i5)
                    a[1+32*i1+11*i2+30*i3+6*i4+10*i5]=a[18+30*i1+41*i2+26*i3+20*i4+24*i5];
}
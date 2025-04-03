void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<35;++i5)
                    a[24+30*i1+2*i2+15*i3+14*i4]=a[31+16*i1+20*i2+11*i3+38*i4+26*i5];
}
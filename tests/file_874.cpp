void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<35;++i5)
                    a[15+36*i1+29*i2]=a[10+4*i1+27*i2+24*i3+12*i4+4*i5];
}
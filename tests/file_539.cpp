void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<24;++i5)
                    a[11+17*i2+3*i3+15*i4]=a[10+8*i1+27*i2+8*i3+29*i4+20*i5];
}
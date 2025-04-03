void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<11;++i5)
                    a[38+40*i1+17*i2+2*i3+29*i4+30*i5]=a[17+15*i2+16*i3+1*i4+8*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<50;++i5)
                    a[38+49*i1+36*i2+24*i4+29*i5]=a[42+11*i1];
}
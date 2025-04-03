void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<32;++i5)
                    a[37+47*i1+39*i2+18*i4+36*i5]=a[35+22*i1+29*i2+2*i4];
}
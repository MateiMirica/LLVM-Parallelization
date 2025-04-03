void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<42;++i5)
                    a[31+47*i1+32*i2+9*i3+33*i4+22*i5]=a[22+39*i1+29*i2+11*i4];
}
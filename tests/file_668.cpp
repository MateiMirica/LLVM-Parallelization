void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<15;++i5)
                    a[5+29*i1+47*i2+31*i3+39*i4+5*i5]=a[3+42*i2+34*i4];
}
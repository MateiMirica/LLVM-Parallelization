void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<35;++i5)
                    a[9+6*i1]=a[11+18*i1+39*i2+48*i3+29*i4+30*i5];
}
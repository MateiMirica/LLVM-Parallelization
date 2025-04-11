void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<31;++i5)
                    a[35+43*i1+33*i2+39*i3+39*i4+26*i5]=a[2+29*i1+25*i2+26*i3+18*i4];
}
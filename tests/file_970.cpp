void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<33;++i5)
                    a[8+40*i1+43*i2+48*i4+36*i5]=a[21+23*i1+35*i2+29*i4];
}
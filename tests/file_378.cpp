void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<25;++i5)
                    a[17+48*i1+3*i2+38*i3+4*i4+12*i5]=a[46+48*i1+1*i2+18*i3+4*i4];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<45;++i5)
                    a[27+18*i1+31*i2+48*i3+21*i4+35*i5]=a[5+15*i1+17*i2];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<38;++i5)
                    a[9+5*i2+23*i3+21*i4+15*i5]=a[18];
}
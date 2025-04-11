void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<14;++i5)
                    a[21+24*i2+41*i3+28*i5]=a[2+18*i2+23*i3];
}
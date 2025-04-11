void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<36;++i5)
                    a[1+41*i1+40*i2+43*i3+33*i4+39*i5]=a[20+18*i1+16*i2+34*i3+27*i4];
}
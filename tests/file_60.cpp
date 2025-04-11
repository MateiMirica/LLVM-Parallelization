void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<26;++i5)
                    a[36+19*i1+31*i2+6*i3+17*i4]=a[49+41*i1+33*i2+30*i3+36*i4];
}
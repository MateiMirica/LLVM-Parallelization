void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<35;++i5)
                    a[2+2*i1+12*i3]=a[4+9*i1+2*i2+36*i3+31*i4+17*i5];
}
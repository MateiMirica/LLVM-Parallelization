void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<47;++i5)
                    a[12+17*i2+36*i3]=a[46+41*i2+28*i3+17*i5];
}
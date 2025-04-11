void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<43;++i5)
                    a[21+12*i1+24*i3+11*i4+27*i5]=a[40+6*i1+41*i4+48*i5];
}
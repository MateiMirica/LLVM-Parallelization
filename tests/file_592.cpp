void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<31;++i5)
                    a[38+16*i3+46*i4+24*i5]=a[19+30*i3+42*i4];
}
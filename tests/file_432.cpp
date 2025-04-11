void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<12;++i5)
                    a[38+2*i2+18*i3+38*i5]=a[7+16*i1+20*i2+2*i3];
}
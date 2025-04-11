void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<22;++i5)
                    a[13+44*i1+36*i3+27*i4+14*i5]=a[38+27*i4];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<11;++i5)
                    a[17+8*i1+18*i3+36*i5]=a[16+2*i1+36*i4+2*i5];
}
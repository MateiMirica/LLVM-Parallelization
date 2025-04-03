void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<22;++i5)
                    a[46+24*i1+32*i2+12*i3+22*i5]=a[43+16*i1+22*i2+30*i5];
}
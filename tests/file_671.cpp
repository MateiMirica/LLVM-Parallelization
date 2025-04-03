void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<29;++i5)
                    a[2+17*i1+48*i3+38*i4+44*i5]=a[11+5*i1+2*i2+50*i5];
}
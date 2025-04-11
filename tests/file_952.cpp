void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<25;++i5)
                    a[49+41*i4+34*i5]=a[48+44*i1+36*i2+16*i3+17*i4+16*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<37;++i5)
                    a[31+10*i1+36*i3+44*i4]=a[12+46*i2+6*i3+16*i5];
}
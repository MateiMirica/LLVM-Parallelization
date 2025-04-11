void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<49;++i5)
                    a[5+48*i1+36*i3+30*i4+46*i5]=a[8+20*i1+6*i3+34*i4+4*i5];
}
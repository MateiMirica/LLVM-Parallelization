void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<11;++i5)
                    a[6+4*i1+33*i2+5*i3]=a[36+46*i1+34*i2+36*i3+6*i4+17*i5];
}
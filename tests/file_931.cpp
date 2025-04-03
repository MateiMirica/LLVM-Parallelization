void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<21;++i5)
                    a[50+45*i1+36*i2+12*i3+46*i5]=a[29+33*i1+26*i3+2*i4+44*i5];
}
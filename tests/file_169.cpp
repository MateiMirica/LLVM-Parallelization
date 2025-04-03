void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<49;++i5)
                    a[28+36*i1+45*i2+21*i3+44*i5]=a[45+17*i2+27*i3];
}
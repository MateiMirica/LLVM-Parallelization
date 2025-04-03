void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<27;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<30;++i5)
                    a[46+13*i1+17*i2+24*i3+6*i4]=a[25+41*i1+41*i2+36*i4+38*i5];
}
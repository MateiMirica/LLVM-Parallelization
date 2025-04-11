void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<28;++i5)
                    a[10+3*i1+6*i2+49*i3+26*i4]=a[33+27*i1+19*i3+34*i5];
}
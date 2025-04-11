void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<10;++i5)
                    a[10+21*i1+2*i3+17*i4]=a[43+34*i1+21*i2+6*i3+49*i4];
}
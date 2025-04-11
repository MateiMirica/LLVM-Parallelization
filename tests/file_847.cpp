void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<32;++i5)
                    a[12+29*i1+2*i4]=a[3+33*i1+13*i2+17*i3+6*i4];
}
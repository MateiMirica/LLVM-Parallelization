void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<5;++i5)
                    a[28+41*i1+26*i2+45*i3+34*i4]=a[46+2*i1+39*i2+45*i3+21*i4];
}
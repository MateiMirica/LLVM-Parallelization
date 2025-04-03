void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<9;++i5)
                    a[44+44*i1+35*i2+41*i3+21*i4+9*i5]=a[31+8*i1+2*i2+27*i3+8*i4];
}
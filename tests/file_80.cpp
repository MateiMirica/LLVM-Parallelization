void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<17;++i5)
                    a[44+21*i1+10*i2+27*i3+38*i5]=a[41+33*i1+11*i3+26*i4+20*i5];
}
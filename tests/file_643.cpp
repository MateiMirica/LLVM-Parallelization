void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<12;++i5)
                    a[29+9*i1+24*i2+20*i3+27*i4]=a[40+35*i1+49*i2+21*i3+39*i4+40*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<41;++i5)
                    a[26+2*i2+13*i3+6*i4]=a[6+19*i1+23*i2+24*i3+35*i4+28*i5];
}
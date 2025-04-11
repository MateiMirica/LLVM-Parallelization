void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<10;++i5)
                    a[2+11*i1+23*i4]=a[6+26*i1+33*i2+49*i3+12*i4+19*i5];
}
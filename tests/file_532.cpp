void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<10;++i5)
                    a[11+21*i4]=a[45+32*i1+30*i2+27*i4+49*i5];
}
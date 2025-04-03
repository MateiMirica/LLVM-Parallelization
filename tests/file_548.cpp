void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<28;++i5)
                    a[41+17*i3+6*i4]=a[45+41*i1+44*i2+17*i3+19*i4];
}
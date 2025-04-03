void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<41;++i5)
                    a[41+21*i1+14*i2+21*i3+44*i4]=a[16+16*i3+33*i4];
}
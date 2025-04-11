void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<28;++i5)
                    a[41+39*i1+40*i2+27*i3+32*i4+42*i5]=a[16+4*i4];
}
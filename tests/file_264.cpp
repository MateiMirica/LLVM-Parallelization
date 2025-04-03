void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<38;++i5)
                    a[22+13*i2+42*i4+46*i5]=a[9+32*i1+11*i2+18*i5];
}
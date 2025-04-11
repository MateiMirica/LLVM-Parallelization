void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<19;++i5)
                    a[34+12*i3+6*i4+3*i5]=a[48+42*i1+18*i2+33*i3+6*i5];
}
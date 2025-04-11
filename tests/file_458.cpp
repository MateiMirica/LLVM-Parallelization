void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<45;++i5)
                    a[12+42*i2+6*i4+39*i5]=a[17+18*i1+27*i2+42*i3+48*i5];
}
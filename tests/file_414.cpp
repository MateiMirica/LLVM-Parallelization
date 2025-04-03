void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<31;++i5)
                    a[13+38*i1+39*i2+18*i3+18*i5]=a[14+4*i1+45*i2+14*i3+10*i5];
}
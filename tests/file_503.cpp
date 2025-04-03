void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<38;++i5)
                    a[7+5*i2+40*i3+42*i4+48*i5]=a[24+2*i1+17*i2+38*i3+6*i4];
}
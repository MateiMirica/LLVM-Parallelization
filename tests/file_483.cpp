void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<25;++i5)
                    a[16+19*i1+36*i2+37*i3+49*i4+10*i5]=a[18+30*i2+18*i3+25*i4];
}
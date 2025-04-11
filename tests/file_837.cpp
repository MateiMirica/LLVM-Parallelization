void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<8;++i5)
                    a[15+4*i1+36*i3+22*i4+42*i5]=a[32+50*i1+12*i2+18*i4];
}
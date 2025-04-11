void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<50;++i5)
                    a[48+4*i2+32*i3+4*i4+42*i5]=a[15+38*i2+26*i3+24*i4+14*i5];
}
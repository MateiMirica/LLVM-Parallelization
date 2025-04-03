void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<20;++i5)
                    a[32+20*i1+31*i4+48*i5]=a[11+30*i2+29*i4+42*i5];
}
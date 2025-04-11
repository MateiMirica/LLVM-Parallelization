void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<15;++i5)
                    a[20+38*i3+24*i5]=a[41+6*i2+48*i4+32*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<9;++i5)
                    a[24+9*i2+38*i3]=a[6+14*i1+20*i2+48*i3+27*i4+5*i5];
}
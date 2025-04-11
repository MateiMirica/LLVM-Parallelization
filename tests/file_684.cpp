void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<12;++i5)
                    a[28+14*i1+48*i2+20*i3+24*i4+13*i5]=a[13+2*i1+40*i2];
}
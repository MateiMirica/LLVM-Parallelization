void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<8;++i5)
                    a[1+20*i1+14*i2+4*i4+5*i5]=a[39+33*i1+26*i2+45*i3+8*i4+45*i5];
}
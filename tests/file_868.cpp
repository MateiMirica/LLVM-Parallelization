void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<16;++i5)
                    a[31+47*i3+32*i4+12*i5]=a[4+37*i3+4*i4+32*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<16;++i5)
                    a[31+32*i1+40*i3+6*i4+20*i5]=a[34+40*i2+32*i4+48*i5];
}
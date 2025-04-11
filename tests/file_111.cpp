void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<13;++i5)
                    a[16+7*i1+48*i2+27*i3+12*i4+23*i5]=a[12+6*i2];
}
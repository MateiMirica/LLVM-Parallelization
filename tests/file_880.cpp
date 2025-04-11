void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<50;++i5)
                    a[34+5*i1+3*i2+38*i3+23*i4+28*i5]=a[19+7*i1+15*i2+40*i3+45*i4+16*i5];
}
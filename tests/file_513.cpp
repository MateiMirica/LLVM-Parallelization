void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<5;++i5)
                    a[32+9*i1+21*i3+37*i4+28*i5]=a[41+37*i1+24*i2+7*i3+23*i4+2*i5];
}
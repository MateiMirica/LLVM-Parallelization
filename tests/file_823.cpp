void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<24;++i5)
                    a[37+21*i1+3*i2]=a[32+35*i1+27*i2+37*i5];
}
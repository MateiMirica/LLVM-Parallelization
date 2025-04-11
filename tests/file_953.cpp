void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<22;++i5)
                    a[49+40*i1+14*i3]=a[18+40*i2+36*i4+40*i5];
}
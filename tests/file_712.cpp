void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<39;++i5)
                    a[44+3*i2+1*i4+18*i5]=a[19+8*i2+28*i4];
}
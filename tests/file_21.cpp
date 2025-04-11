void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<30;++i5)
                    a[15+2*i2]=a[8+40*i1+21*i2+14*i3+26*i5];
}
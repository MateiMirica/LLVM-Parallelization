void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<42;++i5)
                    a[2+50*i1+43*i2+47*i4]=a[33+24*i1+23*i2+14*i4];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<5;++i5)
                    a[31+13*i2+50*i3+15*i4+8*i5]=a[12+3*i2+24*i3+41*i4];
}
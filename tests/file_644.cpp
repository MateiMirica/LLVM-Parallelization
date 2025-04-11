void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<33;++i5)
                    a[32+4*i1+14*i2]=a[46+9*i1+13*i2+9*i3+43*i5];
}
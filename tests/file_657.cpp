void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<22;++i5)
                    a[46+33*i1+10*i2+46*i5]=a[22+10*i1+8*i2+3*i3];
}
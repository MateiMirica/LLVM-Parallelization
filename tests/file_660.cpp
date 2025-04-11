void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<27;++i5)
                    a[36+2*i2+9*i4]=a[29+11*i1+46*i2+19*i4+4*i5];
}
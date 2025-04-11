void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<41;++i5)
                    a[49+27*i1+46*i2+36*i3+22*i5]=a[23+4*i2+24*i3];
}
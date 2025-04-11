void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<27;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<35;++i5)
                    a[31+45*i1+20*i3+41*i4+4*i5]=a[16+17*i1+22*i4];
}
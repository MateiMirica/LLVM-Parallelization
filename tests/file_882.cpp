void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<38;++i5)
                    a[23]=a[29+18*i1+27*i2+8*i3+21*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<27;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<22;++i5)
                    a[31+42*i4]=a[6+27*i1+48*i2+45*i5];
}
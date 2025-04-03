void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<42;++i5)
                    a[16+6*i1]=a[21+42*i1+36*i2+25*i4+20*i5];
}
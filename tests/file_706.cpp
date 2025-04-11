void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<44;++i5)
                    a[17+27*i1+13*i2+33*i3+45*i5]=a[3+12*i1+28*i2+13*i3+35*i4+25*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<25;++i5)
                    a[8+47*i2+34*i3+4*i4+20*i5]=a[43+46*i1+13*i2+24*i4+36*i5];
}
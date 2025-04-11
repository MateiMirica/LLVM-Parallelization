void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<42;++i5)
                    a[18+43*i1+47*i3+36*i4+30*i5]=a[11+41*i1+43*i3+4*i4+36*i5];
}
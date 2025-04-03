void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<39;++i5)
                    a[47+23*i1+49*i2+47*i3+47*i4+37*i5]=a[31+49*i2+46*i3];
}
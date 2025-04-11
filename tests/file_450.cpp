void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<48;++i5)
                    a[39+48*i1+40*i2+47*i3+35*i4+42*i5]=a[5+16*i2+6*i3+30*i4];
}
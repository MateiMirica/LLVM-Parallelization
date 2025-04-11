void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<48;++i5)
                    a[11+40*i1+33*i2+14*i3+41*i4+42*i5]=a[20+47*i2+36*i3+11*i4+16*i5];
}
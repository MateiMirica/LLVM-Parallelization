void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<48;++i5)
                    a[48+21*i1+31*i4+48*i5]=a[18+41*i1+8*i2+32*i3+47*i4];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<5;++i5)
                    a[2]=a[33+16*i2+46*i4];
}
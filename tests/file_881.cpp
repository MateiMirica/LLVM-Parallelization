void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<5;++i5)
                    a[43+46*i2+42*i3+8*i5]=a[12+5*i2+4*i4+4*i5];
}
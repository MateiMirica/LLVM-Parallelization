void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<7;++i5)
                    a[14+4*i2+34*i3+46*i4]=a[19+30*i1+40*i2+42*i4+50*i5];
}
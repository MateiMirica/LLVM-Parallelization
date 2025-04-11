void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<14;++i5)
                    a[11+48*i1+21*i3+24*i4+46*i5]=a[28+34*i1+15*i3+16*i4+26*i5];
}
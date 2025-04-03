void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<23;++i5)
                    a[48+42*i2+37*i3+23*i4+42*i5]=a[1+34*i1+26*i2+3*i3+21*i4+12*i5];
}
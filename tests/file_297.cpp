void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<31;++i5)
                    a[39+48*i1+8*i2+17*i3+26*i4+18*i5]=a[44+5*i1+3*i4];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<20;++i5)
                    a[40+6*i1+17*i2+48*i3+48*i4+5*i5]=a[21+17*i2];
}
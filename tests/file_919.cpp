void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<9;++i5)
                    a[41+39*i1+39*i3+9*i4+6*i5]=a[17+13*i1+10*i3+5*i4];
}
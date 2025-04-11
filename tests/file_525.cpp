void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<12;++i5)
                    a[40+39*i1+4*i3+34*i5]=a[45+19*i1+20*i3+30*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<9;++i5)
                    a[6+11*i4]=a[4+4*i1+10*i3+35*i4+37*i5];
}
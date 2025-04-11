void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<48;++i5)
                    a[40+24*i1+7*i4]=a[16+46*i1+45*i2+49*i4+35*i5];
}
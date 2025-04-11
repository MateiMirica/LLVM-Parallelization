void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<25;++i5)
                    a[30+42*i1+44*i3+37*i4]=a[33+40*i1+21*i4+46*i5];
}
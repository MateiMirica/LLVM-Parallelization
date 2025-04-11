void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<45;++i5)
                    a[1+16*i1+45*i3+2*i4+46*i5]=a[16+37*i3+34*i5];
}
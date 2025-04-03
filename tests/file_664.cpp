void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<37;++i5)
                    a[44+42*i1+23*i2+46*i3+2*i4]=a[1+37*i1+15*i2+46*i3];
}
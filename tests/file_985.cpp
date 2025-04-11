void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<34;++i5)
                    a[9+8*i1+3*i2+23*i3+26*i4]=a[40+2*i1+19*i2+37*i3+40*i5];
}
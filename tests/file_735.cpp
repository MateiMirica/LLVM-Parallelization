void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<30;++i5)
                    a[22+35*i1+13*i2+19*i3+42*i4+46*i5]=a[21+2*i4];
}
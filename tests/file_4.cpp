void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<47;++i5)
                    a[14+18*i1+35*i3+46*i4+49*i5]=a[34+23*i1+22*i3+18*i4];
}
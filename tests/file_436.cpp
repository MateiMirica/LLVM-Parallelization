void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<44;++i5)
                    a[20+18*i2+8*i3+46*i4]=a[9+30*i2+30*i3+14*i5];
}
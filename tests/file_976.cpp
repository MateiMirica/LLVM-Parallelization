void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<30;++i5)
                    a[38+30*i1+42*i2+34*i3]=a[17+30*i1+36*i2+18*i3+20*i5];
}
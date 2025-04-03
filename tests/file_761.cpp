void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<31;++i5)
                    a[38+49*i1+45*i3+36*i4]=a[35+15*i1+22*i2+5*i3+24*i4];
}
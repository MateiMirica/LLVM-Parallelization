void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<48;++i5)
                    a[38+30*i1+11*i2+39*i3+5*i4+24*i5]=a[11+41*i2+15*i3+19*i4];
}
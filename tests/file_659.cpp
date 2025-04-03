void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<23;++i5)
                    a[3+22*i1+9*i3+30*i4+10*i5]=a[50+24*i1+11*i3+44*i4];
}
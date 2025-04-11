void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<44;++i5)
                    a[5+7*i2+17*i4]=a[38+20*i1+30*i2+30*i4+30*i5];
}
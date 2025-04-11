void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<17;++i5)
                    a[4+2*i1+16*i2+10*i4+46*i5]=a[5+42*i1+26*i3+24*i5];
}
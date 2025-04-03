void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<40;++i5)
                    a[16+20*i1+42*i2+20*i5]=a[27+26*i1+24*i4+38*i5];
}
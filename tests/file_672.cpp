void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<32;++i5)
                    a[18+16*i1+26*i2+28*i3+16*i4+26*i5]=a[47+24*i2+20*i3+16*i4+38*i5];
}
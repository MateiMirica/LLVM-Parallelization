void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<14;++i5)
                    a[14+5*i1+42*i2+2*i3]=a[5+21*i1+30*i2+24*i3+32*i5];
}
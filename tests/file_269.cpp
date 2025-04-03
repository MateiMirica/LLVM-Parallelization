void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<7;++i5)
                    a[22+30*i2+42*i3+11*i4+45*i5]=a[36+6*i1+30*i2+5*i4+30*i5];
}
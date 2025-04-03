void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<11;++i5)
                    a[32+6*i4]=a[38+1*i1+4*i2+13*i3+30*i4+3*i5];
}
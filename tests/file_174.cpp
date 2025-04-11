void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<26;++i5)
                    a[36+16*i1+46*i2]=a[13+6*i1+46*i2+10*i3+40*i4+40*i5];
}
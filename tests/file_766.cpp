void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<26;++i5)
                    a[19+39*i1+9*i3+30*i4+10*i5]=a[17];
}
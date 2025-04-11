void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<18;++i5)
                    a[26+39*i1+16*i2+30*i3+3*i4+37*i5]=a[46+7*i2];
}
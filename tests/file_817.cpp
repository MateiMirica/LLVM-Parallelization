void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<32;++i5)
                    a[12+45*i5]=a[21+30*i1+15*i2+45*i3+50*i4+50*i5];
}
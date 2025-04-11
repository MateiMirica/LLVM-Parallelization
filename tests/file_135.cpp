void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<26;++i5)
                    a[28+50*i4+22*i5]=a[39+42*i1+6*i4+26*i5];
}
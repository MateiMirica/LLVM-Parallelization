void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<36;++i5)
                    a[23+11*i3+33*i4+17*i5]=a[2+1*i4];
}
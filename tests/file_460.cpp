void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<49;++i5)
                    a[45+49*i1+40*i2+33*i3+49*i4+28*i5]=a[47+26*i1+6*i2+8*i4];
}
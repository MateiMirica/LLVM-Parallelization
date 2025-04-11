void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<34;++i5)
                    a[42+26*i1+13*i2+22*i3]=a[33+20*i1+6*i2+12*i3];
}
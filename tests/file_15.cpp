void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<49;++i5)
                    a[36+6*i1+12*i2+24*i3]=a[38+19*i1+21*i2+40*i3+46*i4+40*i5];
}
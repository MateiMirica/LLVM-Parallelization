void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<23;++i5)
                    a[4+2*i5]=a[13+30*i1+49*i3+20*i5];
}
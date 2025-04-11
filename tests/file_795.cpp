void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<15;++i5)
                    a[3+5*i3+15*i4]=a[22+33*i1+49*i2+17*i3+44*i4];
}
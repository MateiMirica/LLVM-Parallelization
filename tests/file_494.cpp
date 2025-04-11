void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<21;++i5)
                    a[50+7*i1+4*i2+6*i3]=a[17+30*i1+4*i2+50*i3+15*i4+17*i5];
}
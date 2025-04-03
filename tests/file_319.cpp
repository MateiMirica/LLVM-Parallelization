void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<21;++i5)
                    a[16+47*i2+40*i3+44*i4+12*i5]=a[11+49*i2];
}
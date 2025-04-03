void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<21;++i5)
                    a[20+7*i3+30*i4+43*i5]=a[11+26*i4];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<31;++i5)
                    a[49+31*i2+14*i3]=a[1+19*i1+46*i2+41*i3+49*i4];
}
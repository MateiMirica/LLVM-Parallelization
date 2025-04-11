void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<10;++i5)
                    a[8+14*i4+30*i5]=a[39+27*i2+38*i4+9*i5];
}
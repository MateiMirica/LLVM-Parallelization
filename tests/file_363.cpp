void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<25;++i5)
                    a[50+49*i1+43*i2+40*i3+50*i4]=a[34+41*i1+7*i4];
}
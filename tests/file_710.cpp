void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<18;++i5)
                    a[20]=a[36+49*i2+22*i3+29*i4+50*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<10;++i5)
                    a[19+40*i3+39*i4]=a[11];
}
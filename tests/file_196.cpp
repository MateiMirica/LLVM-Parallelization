void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<15;++i5)
                    a[49+46*i2+49*i3+21*i4]=a[37+7*i2+47*i3];
}
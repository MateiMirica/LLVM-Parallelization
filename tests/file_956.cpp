void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<12;++i5)
                    a[6+13*i2]=a[18+49*i1+47*i2+10*i4+10*i5];
}
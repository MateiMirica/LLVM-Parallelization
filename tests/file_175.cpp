void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<16;++i5)
                    a[16+33*i1+3*i3]=a[44+31*i1+33*i2+33*i3+7*i5];
}
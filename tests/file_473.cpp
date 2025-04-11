void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<20;++i5)
                    a[13+48*i4]=a[15+40*i3+24*i5];
}
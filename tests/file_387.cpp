void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<14;++i5)
                    a[2+14*i2+20*i3]=a[5+30*i2+28*i3+27*i4+42*i5];
}
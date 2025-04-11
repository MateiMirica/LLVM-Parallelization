void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<38;++i5)
                    a[31+4*i1+6*i3]=a[33+6*i1+20*i3+24*i5];
}
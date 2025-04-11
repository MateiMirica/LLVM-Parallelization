void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<42;++i5)
                    a[30+13*i1+40*i3+8*i4+42*i5]=a[33+21*i1+16*i3+20*i4+22*i5];
}
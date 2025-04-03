void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<23;++i5)
                    a[7+20*i1+46*i3+42*i5]=a[30+8*i2+10*i3+10*i5];
}
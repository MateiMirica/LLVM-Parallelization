void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<44;++i5)
                    a[31+20*i3+15*i5]=a[19];
}
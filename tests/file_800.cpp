void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<24;++i5)
                    a[2+42*i1+27*i3+2*i4+20*i5]=a[3+24*i2+7*i3+24*i5];
}
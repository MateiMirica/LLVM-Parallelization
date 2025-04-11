void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<7;++i5)
                    a[12+34*i2+12*i3+7*i4+46*i5]=a[3+10*i2+13*i4];
}
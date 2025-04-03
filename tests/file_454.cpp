void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<42;++i5)
                    a[8+31*i1+9*i3+15*i4]=a[36+42*i1+5*i2+40*i3+32*i4+43*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<17;++i5)
                    a[43+12*i2+45*i3+43*i5]=a[4+13*i2+36*i3];
}
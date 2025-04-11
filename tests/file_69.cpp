void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<43;++i5)
                    a[2+22*i1+13*i3+34*i4+14*i5]=a[47+12*i1+40*i2+39*i3+2*i4+18*i5];
}
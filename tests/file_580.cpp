void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<35;++i5)
                    a[47+19*i1+14*i2+42*i3+1*i4]=a[10+43*i1+48*i2+1*i4];
}
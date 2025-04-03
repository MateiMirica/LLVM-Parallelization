void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<13;++i5)
                    a[8+25*i1+27*i2+1*i5]=a[50+31*i1+31*i2+19*i3];
}
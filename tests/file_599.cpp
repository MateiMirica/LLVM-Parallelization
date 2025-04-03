void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<12;++i5)
                    a[41+40*i1+43*i2+48*i3+26*i4]=a[36+2*i2+37*i3+19*i4];
}
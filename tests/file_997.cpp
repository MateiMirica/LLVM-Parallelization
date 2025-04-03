void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<7;++i5)
                    a[47+2*i2]=a[48+37*i1+38*i2+6*i4+37*i5];
}
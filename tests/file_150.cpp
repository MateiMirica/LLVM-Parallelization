void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<27;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<45;++i5)
                    a[42+15*i1+49*i2+16*i4+46*i5]=a[29+33*i4];
}
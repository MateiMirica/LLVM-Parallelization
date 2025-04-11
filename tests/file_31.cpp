void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<46;++i5)
                    a[4+33*i1+32*i2+46*i3+40*i4+42*i5]=a[49+12*i1+13*i3];
}
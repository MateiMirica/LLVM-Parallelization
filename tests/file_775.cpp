void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<13;++i5)
                    a[8+1*i1+8*i2]=a[4+12*i1+38*i2+39*i3+20*i4+34*i5];
}
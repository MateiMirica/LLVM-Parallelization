void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<14;++i5)
                    a[2+8*i1+7*i2+22*i3]=a[45+49*i2+24*i4+48*i5];
}
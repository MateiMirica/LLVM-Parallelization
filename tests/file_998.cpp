void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<21;++i5)
                    a[20+16*i1+39*i3+6*i5]=a[43+18*i2+33*i3+14*i4+22*i5];
}
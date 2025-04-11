void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<31;++i5)
                    a[20+18*i2+8*i3+12*i4+22*i5]=a[47+48*i2+4*i5];
}
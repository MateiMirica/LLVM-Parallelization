void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<42;++i5)
                    a[20+22*i2+30*i3+28*i5]=a[47+8*i1+12*i3];
}
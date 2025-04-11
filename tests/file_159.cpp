void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<31;++i5)
                    a[37+46*i3+11*i4+11*i5]=a[47+25*i3+3*i4];
}
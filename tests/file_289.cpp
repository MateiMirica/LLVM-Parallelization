void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<16;++i5)
                    a[21+19*i2+15*i3+23*i4+48*i5]=a[48+49*i2+39*i3+19*i4];
}
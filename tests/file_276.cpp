void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<14;++i5)
                    a[22+33*i1+37*i3+34*i4]=a[26+46*i1+11*i2+49*i3+50*i4+41*i5];
}
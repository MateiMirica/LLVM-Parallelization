void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<5;++i5)
                    a[5+20*i4+1*i5]=a[47+48*i1+5*i2+17*i3+17*i4+4*i5];
}
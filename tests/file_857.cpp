void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<41;++i5)
                    a[37+45*i1+5*i3+28*i4+38*i5]=a[48+35*i1+5*i3+36*i5];
}
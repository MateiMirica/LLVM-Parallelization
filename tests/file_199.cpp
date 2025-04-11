void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<25;++i5)
                    a[34+44*i1+46*i2+41*i3+26*i4+48*i5]=a[13+14*i1+1*i3+38*i4+38*i5];
}
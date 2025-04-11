void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<36;++i5)
                    a[48+2*i2+12*i4]=a[29+48*i1+9*i2+38*i3+35*i4+26*i5];
}
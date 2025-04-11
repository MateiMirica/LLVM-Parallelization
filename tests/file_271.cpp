void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<17;++i5)
                    a[10+1*i1+34*i4]=a[31+11*i2+38*i3+48*i4+45*i5];
}
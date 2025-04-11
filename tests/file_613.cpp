void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<12;++i5)
                    a[4+18*i3]=a[48+45*i1+28*i2+24*i3+14*i4+33*i5];
}
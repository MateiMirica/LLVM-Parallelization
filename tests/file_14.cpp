void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<12;++i5)
                    a[18+34*i1+17*i2+22*i3+42*i4+45*i5]=a[6+33*i1+11*i2+3*i3+13*i4+1*i5];
}
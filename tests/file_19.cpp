void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<26;++i5)
                    a[39+22*i1+14*i2+19*i3+13*i4+42*i5]=a[46+4*i2+15*i3+39*i4+34*i5];
}
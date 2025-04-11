void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<18;++i5)
                    a[27+36*i1+34*i3]=a[5+31*i1+45*i2+49*i3+10*i4];
}
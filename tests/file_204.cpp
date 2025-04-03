void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<44;++i5)
                    a[28+45*i1+25*i2+40*i3+40*i4+19*i5]=a[27+18*i1+18*i2+39*i3+5*i4];
}
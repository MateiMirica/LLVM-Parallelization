void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<24;++i5)
                    a[1+42*i1+16*i2+37*i3+48*i4+18*i5]=a[15+5*i1];
}
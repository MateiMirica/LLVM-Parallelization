void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<8;++i5)
                    a[36+34*i1+16*i2+20*i3]=a[17+30*i2+32*i3+36*i4+36*i5];
}
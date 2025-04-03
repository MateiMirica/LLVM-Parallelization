void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<21;++i5)
                    a[44+22*i1+34*i2+14*i5]=a[5+22*i1+42*i4];
}
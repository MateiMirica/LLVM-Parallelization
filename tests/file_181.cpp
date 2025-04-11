void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<28;++i5)
                    a[41+32*i1+36*i2+45*i4+43*i5]=a[6+8*i1];
}
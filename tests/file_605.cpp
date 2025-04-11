void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<28;++i5)
                    a[23+9*i1+34*i4]=a[33+38*i1+25*i2+45*i4];
}
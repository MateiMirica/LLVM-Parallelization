void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<15;++i5)
                    a[8+25*i3+23*i4]=a[45+36*i1+43*i2+43*i3+42*i4+43*i5];
}
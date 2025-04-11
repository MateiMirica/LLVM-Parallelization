void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<6;++i5)
                    a[47+13*i3]=a[35+8*i1+19*i2+18*i3+13*i4+25*i5];
}
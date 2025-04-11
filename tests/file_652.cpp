void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<11;++i5)
                    a[1+22*i1+42*i2+9*i3+8*i5]=a[44+14*i1+46*i2+13*i3+36*i5];
}
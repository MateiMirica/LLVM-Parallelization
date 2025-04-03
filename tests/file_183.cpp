void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<37;++i5)
                    a[37+42*i1+47*i2+45*i3+25*i4+44*i5]=a[31+40*i1];
}
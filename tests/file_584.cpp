void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<32;++i5)
                    a[8+28*i1+19*i2+13*i3+6*i4]=a[30+32*i1+40*i2+47*i3+48*i4+32*i5];
}
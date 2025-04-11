void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<20;++i5)
                    a[34+13*i1+50*i2+21*i3+25*i4+34*i5]=a[27+9*i1+47*i3+1*i4+16*i5];
}
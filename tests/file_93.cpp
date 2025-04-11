void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<44;++i5)
                    a[17+35*i1+10*i3+6*i5]=a[28+43*i1+28*i2+20*i3+42*i5];
}
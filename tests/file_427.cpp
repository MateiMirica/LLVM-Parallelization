void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<31;++i5)
                    a[41+47*i2+32*i3+6*i5]=a[14+44*i1+43*i2+10*i3+42*i4+30*i5];
}
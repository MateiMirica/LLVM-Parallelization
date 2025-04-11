void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<29;++i5)
                    a[24+9*i2+43*i4+34*i5]=a[33+2*i1+15*i2+6*i3+29*i4+28*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<25;++i5)
                    a[35+44*i1+48*i2+6*i3+28*i4+37*i5]=a[15+2*i2+10*i4];
}
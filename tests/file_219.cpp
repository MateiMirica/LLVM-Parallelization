void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<29;++i5)
                    a[15+23*i1+37*i2+5*i3+43*i4+32*i5]=a[12+4*i2+39*i4];
}
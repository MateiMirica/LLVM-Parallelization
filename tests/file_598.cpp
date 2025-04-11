void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<48;++i5)
                    a[11+25*i1+5*i2+45*i3+48*i4+2*i5]=a[3+8*i1+2*i2+25*i4];
}
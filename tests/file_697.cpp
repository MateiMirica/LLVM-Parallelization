void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<5;++i5)
                    a[11+1*i1+5*i2+13*i3+6*i4+14*i5]=a[48+32*i1+45*i2+38*i3+49*i4+3*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<18;++i5)
                    a[14+21*i1+3*i4]=a[22+32*i1+48*i2+22*i3+5*i4+49*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<13;++i5)
                    a[17+2*i1+14*i2]=a[35+43*i1+48*i2+19*i4+26*i5];
}
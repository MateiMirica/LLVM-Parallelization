void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<34;++i5)
                    a[41+19*i1+8*i2+14*i3+22*i4+16*i5]=a[4+41*i1+48*i3+44*i4];
}
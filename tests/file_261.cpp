void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<35;++i5)
                    a[4+5*i1+10*i2+28*i4+4*i5]=a[21+37*i1+8*i3+10*i4+42*i5];
}
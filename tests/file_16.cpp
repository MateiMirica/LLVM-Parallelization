void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<34;++i5)
                    a[13+47*i1+49*i2+44*i3+16*i4+15*i5]=a[39+25*i1+49*i2+2*i3+10*i4];
}
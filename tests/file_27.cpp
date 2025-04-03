void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<44;++i5)
                    a[42+3*i1+19*i3+34*i5]=a[45+29*i1+8*i2+5*i3+10*i4];
}
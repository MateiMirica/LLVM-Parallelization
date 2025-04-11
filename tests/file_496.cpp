void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<6;++i5)
                    a[6+15*i2+13*i3]=a[50+5*i1+50*i2+45*i3+44*i4];
}
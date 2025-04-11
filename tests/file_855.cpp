void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<11;++i5)
                    a[12+45*i1+29*i3+45*i5]=a[47+9*i1+12*i2+29*i3+12*i4];
}
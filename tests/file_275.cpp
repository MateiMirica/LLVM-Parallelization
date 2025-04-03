void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<48;++i5)
                    a[5+18*i1+1*i2+2*i3]=a[32+31*i1+5*i2+46*i4+34*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<7;++i5)
                    a[18+30*i1+23*i3+1*i4+16*i5]=a[47+16*i1+36*i2+41*i3+45*i4+22*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<35;++i5)
                    a[22+5*i3+31*i4+4*i5]=a[37+8*i1+20*i2+9*i3+3*i4+14*i5];
}
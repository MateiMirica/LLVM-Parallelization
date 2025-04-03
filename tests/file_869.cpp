void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<10;++i5)
                    a[49+34*i1+31*i2+5*i3+49*i5]=a[28+1*i1+2*i2+5*i3+1*i4];
}
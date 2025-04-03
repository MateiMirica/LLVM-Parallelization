void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<11;++i5)
                    a[39+14*i1+8*i5]=a[35+14*i1+48*i3+24*i5];
}
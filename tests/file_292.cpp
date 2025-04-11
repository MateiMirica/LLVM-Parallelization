void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<16;++i5)
                    a[22+34*i1+20*i2+11*i4+34*i5]=a[1+10*i1+30*i2+50*i3+31*i4+8*i5];
}
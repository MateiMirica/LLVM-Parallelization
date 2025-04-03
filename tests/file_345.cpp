void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<19;++i5)
                    a[10+5*i1+8*i2+16*i4]=a[39+31*i1+42*i3+16*i4+26*i5];
}
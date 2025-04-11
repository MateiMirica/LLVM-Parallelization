void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<43;++i5)
                    a[29+26*i1+10*i3+16*i4]=a[44+20*i3+44*i5];
}
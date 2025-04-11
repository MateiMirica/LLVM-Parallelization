void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<35;++i5)
                    a[35+32*i2+7*i4]=a[49+49*i1+50*i2+35*i3+40*i4+13*i5];
}
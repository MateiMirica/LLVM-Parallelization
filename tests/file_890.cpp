void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<17;++i5)
                    a[6]=a[29+35*i1+45*i2+7*i4+1*i5];
}
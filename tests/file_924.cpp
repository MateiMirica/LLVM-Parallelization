void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<21;++i5)
                    a[20+16*i4]=a[39+31*i3+21*i4];
}
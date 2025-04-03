void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<39;++i5)
                    a[20+8*i1+9*i2]=a[39+8*i1+23*i2+8*i3+4*i4+50*i5];
}
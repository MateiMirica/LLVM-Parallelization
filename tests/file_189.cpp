void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<10;++i5)
                    a[38+32*i1+9*i2+45*i3+43*i4+8*i5]=a[16+20*i1+13*i2+29*i3+7*i4];
}
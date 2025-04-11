void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<48;++i5)
                    a[1+18*i1]=a[22+4*i1+40*i3];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<34;++i5)
                    a[22+18*i1+20*i3]=a[3+20*i3+38*i4+40*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<46;++i5)
                    a[10+17*i3]=a[21+28*i1+32*i2+40*i3+12*i4+9*i5];
}
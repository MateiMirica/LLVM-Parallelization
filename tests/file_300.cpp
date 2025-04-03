void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<46;++i5)
                    a[29+49*i1+26*i2+15*i3+33*i4+22*i5]=a[35+17*i1];
}
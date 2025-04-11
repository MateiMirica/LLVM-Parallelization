void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<39;++i5)
                    a[34+33*i4]=a[9+19*i1+40*i2+16*i3+47*i4];
}
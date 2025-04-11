void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<15;++i5)
                    a[13+47*i2+16*i3+32*i4+20*i5]=a[34+45*i2+30*i3+14*i5];
}
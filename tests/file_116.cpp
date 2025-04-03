void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<40;++i5)
                    a[21+12*i1+42*i2+6*i3+12*i4]=a[34+24*i1+26*i2+18*i3+8*i5];
}
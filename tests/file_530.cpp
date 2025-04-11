void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<38;++i5)
                    a[35+9*i3+18*i5]=a[18+22*i1+19*i3+8*i5];
}
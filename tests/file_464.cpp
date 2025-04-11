void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<41;++i5)
                    a[27+23*i1+25*i2+9*i3+8*i4+18*i5]=a[42+1*i2];
}
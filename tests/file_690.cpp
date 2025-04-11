void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<30;++i5)
                    a[20+10*i1+45*i2+17*i3+50*i5]=a[43+7*i2+25*i3+6*i4];
}
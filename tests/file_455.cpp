void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<5;++i5)
                    a[43+19*i1+7*i3+35*i4+14*i5]=a[14+7*i1+10*i2+1*i3+47*i4+20*i5];
}
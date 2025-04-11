void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<5;++i5)
                    a[46+16*i1+18*i2+12*i3+47*i4+25*i5]=a[12+2*i1+7*i2+3*i4+1*i5];
}
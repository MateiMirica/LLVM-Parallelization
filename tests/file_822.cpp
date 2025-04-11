void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<31;++i5)
                    a[26+1*i4]=a[38+3*i1+7*i2+28*i4+25*i5];
}
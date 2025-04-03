void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<40;++i5)
                    a[27+34*i3+22*i4]=a[32+25*i1+10*i2+44*i3+35*i4+45*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<17;++i5)
                    a[11+10*i2+15*i4]=a[39+9*i1+14*i2+33*i3+22*i4+19*i5];
}
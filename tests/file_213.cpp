void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<26;++i5)
                    a[11+7*i1+19*i2+43*i3+42*i4+33*i5]=a[23+12*i2];
}
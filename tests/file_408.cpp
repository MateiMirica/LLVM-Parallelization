void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<40;++i5)
                    a[8+42*i1+41*i2+23*i3+1*i4]=a[1+10*i1+21*i2+15*i3+17*i4];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<36;++i5)
                    a[11+15*i1+42*i4+36*i5]=a[26+21*i1+50*i2+10*i4+42*i5];
}
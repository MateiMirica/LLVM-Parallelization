void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<44;++i5)
                    a[17+4*i2+33*i4]=a[26+20*i2+28*i3+50*i4+4*i5];
}
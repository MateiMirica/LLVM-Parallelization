void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<10;++i5)
                    a[22+33*i1+34*i3+50*i4+22*i5]=a[14+24*i1+7*i4];
}
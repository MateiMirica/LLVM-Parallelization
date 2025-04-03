void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<27;++i5)
                    a[18+9*i1+5*i3]=a[29+19*i1+21*i2+21*i3+28*i4+2*i5];
}
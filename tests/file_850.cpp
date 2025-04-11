void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<19;++i5)
                    a[1+48*i1+22*i2+22*i3+46*i4+21*i5]=a[18+7*i2+13*i3+19*i4];
}
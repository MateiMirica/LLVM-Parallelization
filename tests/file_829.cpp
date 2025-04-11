void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<14;++i5)
                    a[2+21*i1+15*i2+41*i4+48*i5]=a[27+21*i1+7*i2+46*i3+21*i4+2*i5];
}
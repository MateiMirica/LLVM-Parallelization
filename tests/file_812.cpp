void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<36;++i5)
                    a[29+1*i1+32*i2+44*i3]=a[42+43*i1+26*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<41;++i5)
                    a[10+26*i1+32*i2+43*i3+28*i4+19*i5]=a[49+9*i2+8*i3];
}
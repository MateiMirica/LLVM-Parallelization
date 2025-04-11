void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<22;++i5)
                    a[30+25*i1+28*i2+44*i3+24*i4]=a[29+29*i3];
}
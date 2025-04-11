void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<15;++i5)
                    a[7+21*i1+38*i2+44*i3+41*i4+40*i5]=a[45+12*i1+22*i2+14*i3];
}
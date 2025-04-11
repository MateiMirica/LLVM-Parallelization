void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<38;++i5)
                    a[35+17*i1+2*i2+43*i3+27*i4+50*i5]=a[28+33*i1+23*i3+37*i4+10*i5];
}
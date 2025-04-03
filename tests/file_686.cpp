void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<27;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<5;++i5)
                    a[7+18*i1+36*i2+30*i3+5*i4+33*i5]=a[22+37*i1+43*i2+30*i3+36*i4];
}
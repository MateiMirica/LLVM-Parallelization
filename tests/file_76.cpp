void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<12;++i5)
                    a[10+18*i2+3*i3+9*i4]=a[35+13*i1+37*i2+8*i3+29*i4+19*i5];
}
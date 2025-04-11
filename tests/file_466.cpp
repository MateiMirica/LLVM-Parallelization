void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<21;++i5)
                    a[27+37*i1+16*i2+48*i3+16*i4+6*i5]=a[12+11*i1+44*i3+22*i4+34*i5];
}
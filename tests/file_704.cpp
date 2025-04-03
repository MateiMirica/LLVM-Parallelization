void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<23;++i5)
                    a[26+8*i1+45*i2+36*i3+44*i4+2*i5]=a[29+44*i1+19*i2+38*i3+22*i4+4*i5];
}
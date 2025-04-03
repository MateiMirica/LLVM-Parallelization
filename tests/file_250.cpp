void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<23;++i5)
                    a[47+34*i3+22*i5]=a[16+8*i1+6*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<7;++i5)
                    a[42+46*i1+23*i3+46*i4+12*i5]=a[43+1*i1+9*i3+36*i4];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<6;++i5)
                    a[48+29*i1+1*i3+44*i5]=a[20+36*i3];
}
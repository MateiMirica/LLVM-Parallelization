void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<49;++i5)
                    a[27+4*i1+11*i3+36*i4+10*i5]=a[4+45*i3];
}
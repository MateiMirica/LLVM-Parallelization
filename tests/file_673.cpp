void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<19;++i5)
                    a[26+10*i1+2*i3+46*i5]=a[13+48*i2+30*i3+18*i5];
}
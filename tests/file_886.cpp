void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<24;++i5)
                    a[8+9*i2+20*i3+11*i4+10*i5]=a[1+18*i1+1*i2+30*i3+49*i4];
}
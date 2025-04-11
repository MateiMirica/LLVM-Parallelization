void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<19;++i5)
                    a[17+18*i1+8*i2+44*i3+4*i5]=a[36+20*i1+44*i2+30*i3+22*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<39;++i5)
                    a[7+40*i1+48*i2+4*i5]=a[44+18*i3+2*i4+44*i5];
}
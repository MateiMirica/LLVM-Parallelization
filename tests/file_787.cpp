void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<7;++i5)
                    a[11+10*i2]=a[36+32*i1+16*i4+38*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<44;++i5)
                    a[36+14*i1+48*i2+24*i4+44*i5]=a[47+24*i1+30*i2+46*i3+40*i4];
}
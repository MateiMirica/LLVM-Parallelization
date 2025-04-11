void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<40;++i5)
                    a[29+9*i1+44*i2+9*i3+40*i5]=a[8+11*i1+36*i2+31*i3];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<9;++i5)
                    a[5+31*i1+34*i3+30*i4]=a[10+8*i4+5*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<30;++i5)
                    a[35+5*i1+34*i4]=a[39+49*i1+19*i2+46*i4];
}
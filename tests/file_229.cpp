void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<36;++i5)
                    a[12+22*i1+22*i4+48*i5]=a[47+30*i2+50*i5];
}
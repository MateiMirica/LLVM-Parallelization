void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<30;++i5)
                    a[34+15*i1+22*i2+4*i3]=a[23+45*i1+49*i2+37*i3+49*i4+9*i5];
}
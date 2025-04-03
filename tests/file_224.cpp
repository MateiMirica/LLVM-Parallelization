void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<5;++i5)
                    a[35+9*i1+24*i3+21*i4]=a[22+30*i1+36*i3+15*i4+43*i5];
}
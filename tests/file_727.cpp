void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<30;++i5)
                    a[21+9*i1+20*i2+43*i3+26*i4]=a[35+4*i1+10*i2+25*i3];
}
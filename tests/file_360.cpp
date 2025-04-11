void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<50;++i5)
                    a[11+26*i1+41*i2+48*i3+3*i4+3*i5]=a[48+50*i1+2*i2+45*i5];
}
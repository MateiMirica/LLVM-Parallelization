void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<44;++i5)
                    a[47+50*i1+21*i2+15*i4+48*i5]=a[40+48*i1+33*i2+32*i3+25*i4+32*i5];
}
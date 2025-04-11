void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<44;++i5)
                    a[42+37*i1+44*i2+28*i3+50*i4]=a[31+15*i1+16*i2+25*i3];
}
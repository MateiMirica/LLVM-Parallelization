void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<24;++i5)
                    a[20+19*i2+47*i4]=a[31+30*i1+25*i2+24*i3+50*i4+24*i5];
}
void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<6;++i5)
                    a[2+20*i2+50*i3+38*i4+43*i5]=a[18+10*i2+18*i4+15*i5];
}
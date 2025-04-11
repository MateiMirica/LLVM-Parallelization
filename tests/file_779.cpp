void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<45;++i5)
                    a[22+1*i1+6*i2+20*i3+50*i5]=a[27+45*i1+26*i2+6*i3+8*i4+14*i5];
}
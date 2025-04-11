void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<49;++i5)
                    a[19+1*i1+10*i2+38*i3+24*i5]=a[48+21*i1+38*i2+42*i3+2*i5];
}
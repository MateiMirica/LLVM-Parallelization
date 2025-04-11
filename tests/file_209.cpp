void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<6;++i5)
                    a[12+2*i1+2*i2+14*i4+1*i5]=a[35+42*i1+31*i2+14*i3+25*i4+34*i5];
}
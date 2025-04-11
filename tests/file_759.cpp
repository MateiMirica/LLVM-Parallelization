void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<13;++i5)
                    a[41+30*i2+8*i3+22*i4]=a[47+43*i2+40*i3+34*i4+12*i5];
}
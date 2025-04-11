void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<30;++i5)
                    a[25+31*i1+44*i2+1*i3+38*i4+44*i5]=a[22+11*i1+32*i2+43*i3+10*i4+8*i5];
}
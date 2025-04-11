void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<6;++i5)
                    a[2+33*i1+48*i2+13*i4+24*i5]=a[25+36*i1+25*i4+36*i5];
}
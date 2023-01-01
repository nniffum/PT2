#ifndef COIN_H
#define COIN_H

class Coin 
{
  private:
    int value;      

  public:
    Coin();
    int getValue() const;
    void setValue(int v);
    ~Coin();
};

#endif

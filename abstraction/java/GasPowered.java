
public interface GasPowered{
  // interestingly, we have three methods that
  // all manipulate the gas tank, but there are
  // no variables to represent the amount of gas
  // nor the tank size.  These details are left
  // to implementors


  public void fillTank();
  public float getGasAmount();
  public void useGas();  
}


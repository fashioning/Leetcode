//=====================================
// sony.h
//=====================================
#ifndef HEADER_SONY
#define HEADER_SONY
//-------------------------------------
class CreateSony;       // or #include"createsony.h" (注意前向声明)
//-------------------------------------
class Sony{
public:
  virtual void adjustVolume() = 0;
  virtual void switchChannel() = 0;
  virtual ~Sony(){}
};//-------------------------
Sony* createSonyInch29(CreateSony*);
Sony* createSonyInch43(CreateSony*);
//-------------------------------------
#endif  // HEADER_SONY

 
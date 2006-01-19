#ifndef ALIJETHEADER_H
#define ALIJETHEADER_H
 
/* Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice                               */
 
 
//---------------------------------------------------------------------
// Jet header base class 
// Stores a comment which describes the jet analysis
// Author: jgcn@mda.cinvestav.mx
//---------------------------------------------------------------------
 
#include <TNamed.h>
#include <TString.h>
 
class AliJetHeader : public TNamed
{
 public:
 
  AliJetHeader(const char* name);
  AliJetHeader();
  virtual ~AliJetHeader() { }

  // Getters
  virtual TString GetComment() const {return fComment;} 
  virtual Float_t GetJetEtaMax() const {return fJetEtaMax;}
  virtual Float_t GetJetEtaMin() const {return fJetEtaMin;}  
  
  // Setters
  virtual void SetComment(const char* com) {fComment=TString(com);}
  virtual void SetJetEtaMax(Float_t eta= 0.5) {fJetEtaMax = eta;}
  virtual void SetJetEtaMin(Float_t eta= -0.5) {fJetEtaMin = eta;}  
  

  // others
  
protected:
  TString fComment; // a comment 
  Float_t fJetEtaMax; // maximum eta for the jet
  Float_t fJetEtaMin; // minimum eta for the jet
  
  ClassDef(AliJetHeader,1)
};
 
#endif

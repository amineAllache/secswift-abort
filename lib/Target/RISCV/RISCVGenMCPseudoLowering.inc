/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Pseudo-instruction MC lowering Source Fragment                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

bool RISCVAsmPrinter::
emitPseudoExpansionLowering(MCStreamer &OutStreamer,
                            const MachineInstr *MI) {
  switch (MI->getOpcode()) {
  default: return false;
  case RISCV::PseudoBR: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JAL);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: imm20
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoBRIND: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    lowerOperand(MI->getOperand(1), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoBRINDNonX7: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    lowerOperand(MI->getOperand(1), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoBRINDX7: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    lowerOperand(MI->getOperand(1), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoCALLIndirect: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X1));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoCALLIndirectNonX7: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X1));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoRET: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: rs1
    TmpInst.addOperand(MCOperand::createReg(RISCV::X1));
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoReadVL: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRS);
    // Operand: rd
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(3104));
    // Operand: rs1
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoReadVLENB: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRS);
    // Operand: rd
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(3106));
    // Operand: rs1
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoTAILIndirect: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::PseudoTAILIndirectNonX7: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::JALR);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::ReadFFLAGS: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRS);
    // Operand: rd
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(1));
    // Operand: rs1
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::ReadFRM: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRS);
    // Operand: rd
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(2));
    // Operand: rs1
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::SwapFRMImm: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRWI);
    // Operand: rd
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(2));
    // Operand: rs1
    lowerOperand(MI->getOperand(1), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::WriteFFLAGS: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRW);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(1));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::WriteFRM: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRW);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(2));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::WriteFRMImm: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRWI);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(2));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  case RISCV::WriteVXRMImm: {
    MCInst TmpInst;
    MCOperand MCOp;
    TmpInst.setOpcode(RISCV::CSRRWI);
    // Operand: rd
    TmpInst.addOperand(MCOperand::createReg(RISCV::X0));
    // Operand: imm12
    TmpInst.addOperand(MCOperand::createImm(10));
    // Operand: rs1
    lowerOperand(MI->getOperand(0), MCOp);
    TmpInst.addOperand(MCOp);
    EmitToStreamer(OutStreamer, TmpInst);
    break;
  }
  }
  return true;
}


#ifndef LOONGSIM_ISA_INSTR_HPP
#define LOONGSIM_ISA_INSTR_HPP
#include <isa_term.hpp>

namespace loongsim::isa::instr
{
    class Instr
    {
    public:
        Instr(loongsim::isa::isa_term::addr32_t pc,
              loongsim::isa::isa_term::InstrType type,
              loongsim::isa::isa_term::InstrName name,
              loongsim::isa::isa_term::PrivilegeLevel privilegeLevel,
              loongsim::isa::isa_term::reg_t rd,
              loongsim::isa::isa_term::reg_t rj,
              loongsim::isa::isa_term::reg_t rk,
              loongsim::isa::isa_term::reg_t ra,
              loongsim::isa::isa_term::imm_t imm);
        ~Instr();

        loongsim::isa::isa_term::addr32_t getPc();
        loongsim::isa::isa_term::InstrType getType();
        loongsim::isa::isa_term::InstrName getName();
        loongsim::isa::isa_term::PrivilegeLevel getPrivilegeLevel();
        loongsim::isa::isa_term::reg_t getRd();
        loongsim::isa::isa_term::reg_t getRj();
        loongsim::isa::isa_term::reg_t getRk();
        loongsim::isa::isa_term::reg_t getRa();
        loongsim::isa::isa_term::imm_t getImm();

    private:
        loongsim::isa::isa_term::addr32_t pc_;
        loongsim::isa::isa_term::InstrType type_;
        loongsim::isa::isa_term::InstrName name_;
        loongsim::isa::isa_term::PrivilegeLevel privilegeLevel_;
        loongsim::isa::isa_term::reg_t rd_;
        loongsim::isa::isa_term::reg_t rj_;
        loongsim::isa::isa_term::reg_t rk_;
        loongsim::isa::isa_term::reg_t ra_;
        loongsim::isa::isa_term::imm_t imm_;
    };
}

#endif // LOONGSIM_ISA_INSTR_HPP
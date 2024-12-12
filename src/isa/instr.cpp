#include <instr.hpp>

namespace loongsim::isa::instr{
    Instr::Instr(loongsim::isa::isa_term::addr32_t pc,
                 loongsim::isa::isa_term::InstrType type,
                 loongsim::isa::isa_term::InstrName name,
                 loongsim::isa::isa_term::PrivilegeLevel privilegeLevel,
                 loongsim::isa::isa_term::reg_t rd,
                 loongsim::isa::isa_term::reg_t rj,
                 loongsim::isa::isa_term::reg_t rk,
                 loongsim::isa::isa_term::reg_t ra,
                 loongsim::isa::isa_term::imm_t imm)
        : pc_(pc), type_(type), name_(name), privilegeLevel_(privilegeLevel), rd_(rd), rj_(rj), rk_(rk), ra_(ra), imm_(imm)
    {
    }

    Instr::~Instr()
    {
    }

    loongsim::isa::isa_term::addr32_t Instr::getPc()
    {
        return pc_;
    }

    loongsim::isa::isa_term::InstrType Instr::getType()
    {
        return type_;
    }

    loongsim::isa::isa_term::InstrName Instr::getName()
    {
        return name_;
    }

    loongsim::isa::isa_term::PrivilegeLevel Instr::getPrivilegeLevel()
    {
        return privilegeLevel_;
    }

    loongsim::isa::isa_term::reg_t Instr::getRd()
    {
        return rd_;
    }

    loongsim::isa::isa_term::reg_t Instr::getRj()
    {
        return rj_;
    }

    loongsim::isa::isa_term::reg_t Instr::getRk()
    {
        return rk_;
    }

    loongsim::isa::isa_term::reg_t Instr::getRa()
    {
        return ra_;
    }

    loongsim::isa::isa_term::imm_t Instr::getImm()
    {
        return imm_;
    }
}
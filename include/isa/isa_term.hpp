#ifndef LOONGSIM_ISA_ISA_TERM_HPP
#define LOONGSIM_ISA_ISA_TERM_HPP
#include <cstdint>

namespace loongsim::isa::isa_term{
    enum class InstrType
    {
        R2,    // 原 2R -> 两个寄存器操作
        R3,    // 原 3R -> 三个寄存器操作
        R4,    // 原 4R -> 四个寄存器操作
        R2I8,  // 原 2RI8 -> 两个寄存器 + 8位立即数
        R2I12, // 原 2RI12 -> 两个寄存器 + 12位立即数
        R2I14, // 原 2RI14 -> 两个寄存器 + 14位立即数
        R2I16, // 原 2RI16 -> 两个寄存器 + 16位立即数
        R1I21, // 原 1RI21 -> 一个寄存器 + 21位立即数
        I26    // 原 I26 -> 26位立即数
    };

    enum class PrivilegeLevel
    {
        PLV0,
        PLV1,
        PLV2,
        PLV3
    };

    enum class InstrName
    {
        // 算术运算指令
        ADD_W,
        SUB_W,
        ADDI_W,
        ADD_D,
        SUB_D,
        ADDI_D,
        SLT,
        SLTU,
        SLTI,
        SLTUI,
        AND,
        OR,
        NOR,
        XOR,
        ANDN,
        ORN,
        ANDI,
        ORI,
        XORI,
        MUL_W,
        MULH_W,
        MULH_WU,
        DIV_W,
        DIV_WU,
        MOD_W,
        MOD_WU,
        MUL_D,
        MULH_D,
        MULH_DU,
        DIV_D,
        DIV_DU,
        MOD_D,
        MOD_DU,
        PCADDI,
        PCADDU12I,
        PCADDU18I,
        LU12I_W,
        LU32I_D,
        LU52I_D,
        ADDU16I_D,

        // 移位运算指令
        SLL_W,
        SRL_W,
        SRA_W,
        ROTR_W,
        SLLI_W,
        SRLI_W,
        SRAI_W,
        ROTRI_W,
        SLL_D,
        SRL_D,
        SRA_D,
        ROTR_D,
        SLLI_D,
        SRLI_D,
        SRAI_D,
        ROTRI_D,

        // 位域操作指令
        EXT_W_B,
        EXT_W_H,
        CLO_W,
        CLO_D,
        SLZ_W,
        CLZ_D,
        CTO_W,
        CTO_D,
        CTZ_W,
        CTZ_D,
        BYTEPICK_W,
        BYTEPICK_D,
        BSTRINS_W,
        BSTRINS_D,
        BSTRPICK_W,
        BSTRPICK_D,
        REVB_2H,
        REVB_4H,
        REVB_2W,
        REVB_D,
        REVH_2W,
        REVH_D,
        BITREV_4B,
        BITREV_8B,
        BITREV_W,
        BITREV_D,
        MASKEQZ,
        MASKNEZ,

        // 分支转移指令
        BEQ,
        BNE,
        BLT,
        BGE,
        BLTU,
        BGEU,
        BEQZ,
        BNEZ,
        B,
        BL,
        JIRL,

        // 访存读写指令
        LD_B,
        LD_BU,
        LD_H,
        LD_HU,
        LD_W,
        LD_WU,
        LD_D,
        ST_B,
        ST_H,
        ST_W,
        ST_D,
        LDX_B,
        LDX_BU,
        LDX_H,
        LDX_HU,
        LDX_W,
        LDX_WU,
        LDX_D,
        STX_B,
        STX_H,
        STX_W,
        STX_D,
        LDPTR_W,
        LDPTR_D,
        STPTR_W,
        STPTR_D,
        PRELD,
        PRELDX,

        // 原子操作指令
        LL_W,
        SC_W,
        LL_D,
        SC_D,
        AMSWAP_W,
        AMSWAP_D,
        AMADD_W,
        AMADD_D,
        AMAND_W,
        AMAND_D,
        AMOR_W,
        AMOR_D,
        AMXOR_W,
        AMXOR_D,
        AMMAX_W,
        AMMAX_D,
        AMMIN_W,
        AMMIN_D,

        // 栅障指令
        IBAR,
        DBAR,

        // 特殊指令
        SYSCALL,
        BREAK,
        CPUCFG,
        NOP,
        IDLE,
        ERTN,
        DBCL,
        RDTIMEL_W,
        RDTIMEH_W,
        RDTIME_D,
        ASRTLE_D,
        ASRTGT_D,

        // 特权指令
        CSRRD,
        CSRWR,
        CSRXCHG,
        IOCSRRD_B,
        IOCSRRD_H,
        IOCSRRD_W,
        IOCSRRD_D,
        IOCSRWR_B,
        IOCSRWR_H,
        IOCSRWR_W,
        IOCSRWR_D,
        CACOP,
        TLBP,
        TLBRD,
        TLBWR,
        TLBFILL,
        TLBCLR,
        TLBFLUSH,
        INVTLB,
        LDDIR,
        LDPTE
    };

    typedef int32_t imm_t;
    typedef int8_t reg_t;
    typedef int32_t addr32_t;
}
#endif //LOONGSIM_ISA_ISA_TERM_HPP
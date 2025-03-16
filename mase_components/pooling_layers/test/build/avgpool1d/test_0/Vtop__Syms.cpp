// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_avgpool1d);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_avgpool1d.configure(this, name(), "avgpool1d", "avgpool1d", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_avgpool1d__unnamedblk1.configure(this, name(), "avgpool1d.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_avgpool1d__unnamedblk1__unnamedblk2.configure(this, name(), "avgpool1d.unnamedblk1.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_avgpool1d__unnamedblk1__unnamedblk2__unnamedblk3.configure(this, name(), "avgpool1d.unnamedblk1.unnamedblk2.unnamedblk3", "unnamedblk3", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_avgpool1d);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_in_0", &(TOP.data_in_0), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_in_0_ready", &(TOP.data_in_0_ready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_in_0_valid", &(TOP.data_in_0_valid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_out_0", &(TOP.data_out_0), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,2 ,31,0 ,6,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_out_0_ready", &(TOP.data_out_0_ready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_out_0_valid", &(TOP.data_out_0_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_IN_0_PARALLELISM_DIM_0", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_IN_0_PARALLELISM_DIM_0))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_IN_0_PARALLELISM_DIM_1", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_IN_0_PARALLELISM_DIM_1))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_IN_0_PRECISION_0", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_IN_0_PRECISION_0))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_IN_0_PRECISION_1", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_IN_0_PRECISION_1))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_IN_0_TENSOR_SIZE_DIM_0", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_IN_0_TENSOR_SIZE_DIM_0))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_IN_0_TENSOR_SIZE_DIM_1", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_IN_0_TENSOR_SIZE_DIM_1))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_OUT_0_PARALLELISM_DIM_0", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_OUT_0_PARALLELISM_DIM_0))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_OUT_0_PARALLELISM_DIM_1", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_OUT_0_PARALLELISM_DIM_1))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_OUT_0_PRECISION_0", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_OUT_0_PRECISION_0))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_OUT_0_PRECISION_1", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_OUT_0_PRECISION_1))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_OUT_0_TENSOR_SIZE_DIM_0", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_OUT_0_TENSOR_SIZE_DIM_0))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"DATA_OUT_0_TENSOR_SIZE_DIM_1", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__DATA_OUT_0_TENSOR_SIZE_DIM_1))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"INPLACE", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__INPLACE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"KERNEL_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__KERNEL_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"PADDING", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__PADDING))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"STRIDE", const_cast<void*>(static_cast<const void*>(&(TOP.avgpool1d__DOT__STRIDE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"clk", &(TOP.avgpool1d__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"data_in_0", &(TOP.avgpool1d__DOT__data_in_0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"data_in_0_ready", &(TOP.avgpool1d__DOT__data_in_0_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"data_in_0_valid", &(TOP.avgpool1d__DOT__data_in_0_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"data_out_0", &(TOP.avgpool1d__DOT__data_out_0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,6,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"data_out_0_ready", &(TOP.avgpool1d__DOT__data_out_0_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"data_out_0_valid", &(TOP.avgpool1d__DOT__data_out_0_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_avgpool1d.varInsert(__Vfinal,"rst", &(TOP.avgpool1d__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_avgpool1d__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.avgpool1d__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_avgpool1d__unnamedblk1__unnamedblk2.varInsert(__Vfinal,"base_idx", &(TOP.avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_avgpool1d__unnamedblk1__unnamedblk2.varInsert(__Vfinal,"result", &(TOP.avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result), false, VLVT_REAL,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0);
        __Vscope_avgpool1d__unnamedblk1__unnamedblk2__unnamedblk3.varInsert(__Vfinal,"j", &(TOP.avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
    }
}

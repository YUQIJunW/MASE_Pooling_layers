// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rst,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(data_in_0_valid,0,0);
    VL_OUT8(data_in_0_ready,0,0);
    VL_OUT8(data_out_0_valid,0,0);
    VL_IN8(data_out_0_ready,0,0);
    CData/*0:0*/ avgpool1d__DOT__rst;
    CData/*0:0*/ avgpool1d__DOT__clk;
    CData/*0:0*/ avgpool1d__DOT__data_in_0_valid;
    CData/*0:0*/ avgpool1d__DOT__data_in_0_ready;
    CData/*0:0*/ avgpool1d__DOT__data_out_0_valid;
    CData/*0:0*/ avgpool1d__DOT__data_out_0_ready;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ avgpool1d__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx;
    IData/*31:0*/ avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VL_IN(data_in_0[8],31,0);
    VL_OUT(data_out_0[7],31,0);
    VlUnpacked<IData/*31:0*/, 8> avgpool1d__DOT__data_in_0;
    VlUnpacked<IData/*31:0*/, 7> avgpool1d__DOT__data_out_0;
    double avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_IN_0_PRECISION_0 = 0x00000020U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_IN_0_PRECISION_1 = 3U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_IN_0_TENSOR_SIZE_DIM_0 = 8U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_IN_0_TENSOR_SIZE_DIM_1 = 1U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_IN_0_PARALLELISM_DIM_0 = 8U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_IN_0_PARALLELISM_DIM_1 = 1U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__PADDING = 0U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__KERNEL_SIZE = 2U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__STRIDE = 1U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_OUT_0_PRECISION_0 = 0x00000020U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_OUT_0_PRECISION_1 = 3U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_OUT_0_TENSOR_SIZE_DIM_0 = 8U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_OUT_0_TENSOR_SIZE_DIM_1 = 1U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_OUT_0_PARALLELISM_DIM_0 = 7U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__DATA_OUT_0_PARALLELISM_DIM_1 = 1U;
    static constexpr IData/*31:0*/ avgpool1d__DOT__INPLACE = 0U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

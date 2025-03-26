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
    CData/*0:0*/ max_pool2d__DOT__rst;
    CData/*0:0*/ max_pool2d__DOT__clk;
    CData/*0:0*/ max_pool2d__DOT__data_in_0_valid;
    CData/*0:0*/ max_pool2d__DOT__data_in_0_ready;
    CData/*0:0*/ max_pool2d__DOT__data_out_0_valid;
    CData/*0:0*/ max_pool2d__DOT__data_out_0_ready;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ max_pool2d__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ max_pool2d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ max_pool2d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__max_val;
    IData/*31:0*/ max_pool2d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__m;
    IData/*31:0*/ max_pool2d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__n;
    IData/*31:0*/ max_pool2d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__row;
    IData/*31:0*/ max_pool2d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__col;
    IData/*31:0*/ max_pool2d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__index;
    IData/*31:0*/ __VactIterCount;
    VL_IN(data_in_0[16],31,0);
    VL_OUT(data_out_0[4],31,0);
    VlUnpacked<IData/*31:0*/, 16> max_pool2d__DOT__data_in_0;
    VlUnpacked<IData/*31:0*/, 4> max_pool2d__DOT__data_out_0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_IN_0_PRECISION_0 = 0x00000020U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_IN_0_PRECISION_1 = 3U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_IN_0_TENSOR_SIZE_DIM_0 = 8U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_IN_0_TENSOR_SIZE_DIM_1 = 1U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_IN_0_PARALLELISM_DIM_0 = 0x00000010U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_IN_0_PARALLELISM_DIM_1 = 1U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_IN_0_WIDTH = 4U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_IN_0_HEIGHT = 4U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_OUT_0_WIDTH = 2U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_OUT_0_HEIGHT = 2U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__PADDING = 0U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__KERNEL_WIDTH = 2U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__KERNEL_HEIGHT = 2U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__STRIDE = 2U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_OUT_0_PRECISION_0 = 0x00000020U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_OUT_0_PRECISION_1 = 3U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_OUT_0_TENSOR_SIZE_DIM_0 = 8U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_OUT_0_TENSOR_SIZE_DIM_1 = 1U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_OUT_0_PARALLELISM_DIM_0 = 4U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__DATA_OUT_0_PARALLELISM_DIM_1 = 1U;
    static constexpr IData/*31:0*/ max_pool2d__DOT__INPLACE = 0U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

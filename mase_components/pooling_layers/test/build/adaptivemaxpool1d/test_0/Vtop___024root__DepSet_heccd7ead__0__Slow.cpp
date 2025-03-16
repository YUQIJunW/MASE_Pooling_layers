// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 2U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 3U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 2U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 3U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 2U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 3U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__i = 3U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/root/mase-project/mase/src/mase_components/pooling_layers/rtl/adaptivemaxpool1d.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_in_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_out_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->data_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->data_in_0_ready = VL_RAND_RESET_I(1);
    vlSelf->data_out_0_valid = VL_RAND_RESET_I(1);
    vlSelf->data_out_0_ready = VL_RAND_RESET_I(1);
    vlSelf->adaptivemaxpool1d__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->adaptivemaxpool1d__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->adaptivemaxpool1d__DOT__data_in_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->adaptivemaxpool1d__DOT__data_out_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->adaptivemaxpool1d__DOT__data_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->adaptivemaxpool1d__DOT__data_in_0_ready = VL_RAND_RESET_I(1);
    vlSelf->adaptivemaxpool1d__DOT__data_out_0_valid = VL_RAND_RESET_I(1);
    vlSelf->adaptivemaxpool1d__DOT__data_out_0_ready = VL_RAND_RESET_I(1);
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx = 0;
    vlSelf->adaptivemaxpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->adaptivemaxpool1d__DOT____Vlvbound_h9a12e006__1 = VL_RAND_RESET_I(32);
}

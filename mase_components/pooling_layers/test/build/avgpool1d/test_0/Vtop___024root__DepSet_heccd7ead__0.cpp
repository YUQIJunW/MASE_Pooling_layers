// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ avgpool1d__DOT____Vlvbound_hf20a2f4f__0;
    avgpool1d__DOT____Vlvbound_hf20a2f4f__0 = 0;
    // Body
    vlSelf->avgpool1d__DOT__rst = vlSelf->rst;
    vlSelf->avgpool1d__DOT__clk = vlSelf->clk;
    vlSelf->avgpool1d__DOT__data_in_0_valid = vlSelf->data_in_0_valid;
    vlSelf->avgpool1d__DOT__data_out_0_ready = vlSelf->data_out_0_ready;
    vlSelf->data_out_0_valid = vlSelf->data_in_0_valid;
    vlSelf->data_in_0_ready = vlSelf->data_out_0_ready;
    vlSelf->avgpool1d__DOT__data_in_0[7U] = vlSelf->data_in_0
        [7U];
    vlSelf->avgpool1d__DOT__data_in_0[6U] = vlSelf->data_in_0
        [6U];
    vlSelf->avgpool1d__DOT__data_in_0[5U] = vlSelf->data_in_0
        [5U];
    vlSelf->avgpool1d__DOT__data_in_0[4U] = vlSelf->data_in_0
        [4U];
    vlSelf->avgpool1d__DOT__data_in_0[3U] = vlSelf->data_in_0
        [3U];
    vlSelf->avgpool1d__DOT__data_in_0[2U] = vlSelf->data_in_0
        [2U];
    vlSelf->avgpool1d__DOT__data_in_0[1U] = vlSelf->data_in_0
        [1U];
    vlSelf->avgpool1d__DOT__data_in_0[0U] = vlSelf->data_in_0
        [0U];
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx = 0U;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result = 0.0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx)]));
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & ((IData)(1U) 
                                                   + vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx))]));
    avgpool1d__DOT____Vlvbound_hf20a2f4f__0 = VL_RTOI_I_D(
                                                          (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
                                                           / 2.0));
    vlSelf->avgpool1d__DOT__data_out_0[0U] = avgpool1d__DOT____Vlvbound_hf20a2f4f__0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx = 1U;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result = 0.0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx)]));
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & ((IData)(1U) 
                                                   + vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx))]));
    avgpool1d__DOT____Vlvbound_hf20a2f4f__0 = VL_RTOI_I_D(
                                                          (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
                                                           / 2.0));
    vlSelf->avgpool1d__DOT__data_out_0[1U] = avgpool1d__DOT____Vlvbound_hf20a2f4f__0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx = 2U;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result = 0.0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx)]));
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & ((IData)(1U) 
                                                   + vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx))]));
    avgpool1d__DOT____Vlvbound_hf20a2f4f__0 = VL_RTOI_I_D(
                                                          (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
                                                           / 2.0));
    vlSelf->avgpool1d__DOT__data_out_0[2U] = avgpool1d__DOT____Vlvbound_hf20a2f4f__0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx = 3U;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result = 0.0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx)]));
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & ((IData)(1U) 
                                                   + vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx))]));
    avgpool1d__DOT____Vlvbound_hf20a2f4f__0 = VL_RTOI_I_D(
                                                          (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
                                                           / 2.0));
    vlSelf->avgpool1d__DOT__data_out_0[3U] = avgpool1d__DOT____Vlvbound_hf20a2f4f__0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx = 4U;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result = 0.0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx)]));
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & ((IData)(1U) 
                                                   + vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx))]));
    avgpool1d__DOT____Vlvbound_hf20a2f4f__0 = VL_RTOI_I_D(
                                                          (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
                                                           / 2.0));
    vlSelf->avgpool1d__DOT__data_out_0[4U] = avgpool1d__DOT____Vlvbound_hf20a2f4f__0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx = 5U;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result = 0.0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx)]));
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & ((IData)(1U) 
                                                   + vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx))]));
    avgpool1d__DOT____Vlvbound_hf20a2f4f__0 = VL_RTOI_I_D(
                                                          (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
                                                           / 2.0));
    vlSelf->avgpool1d__DOT__data_out_0[5U] = avgpool1d__DOT____Vlvbound_hf20a2f4f__0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx = 6U;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result = 0.0;
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx)]));
    vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
        = (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
           + VL_ITOR_D_I(32, vlSelf->data_in_0[(7U 
                                                & ((IData)(1U) 
                                                   + vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__base_idx))]));
    avgpool1d__DOT____Vlvbound_hf20a2f4f__0 = VL_RTOI_I_D(
                                                          (vlSelf->avgpool1d__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result 
                                                           / 2.0));
    vlSelf->avgpool1d__DOT__data_out_0[6U] = avgpool1d__DOT____Vlvbound_hf20a2f4f__0;
    vlSelf->avgpool1d__DOT__data_out_0_valid = vlSelf->data_out_0_valid;
    vlSelf->avgpool1d__DOT__data_in_0_ready = vlSelf->data_in_0_ready;
    vlSelf->data_out_0[6U] = vlSelf->avgpool1d__DOT__data_out_0
        [6U];
    vlSelf->data_out_0[5U] = vlSelf->avgpool1d__DOT__data_out_0
        [5U];
    vlSelf->data_out_0[4U] = vlSelf->avgpool1d__DOT__data_out_0
        [4U];
    vlSelf->data_out_0[3U] = vlSelf->avgpool1d__DOT__data_out_0
        [3U];
    vlSelf->data_out_0[2U] = vlSelf->avgpool1d__DOT__data_out_0
        [2U];
    vlSelf->data_out_0[1U] = vlSelf->avgpool1d__DOT__data_out_0
        [1U];
    vlSelf->data_out_0[0U] = vlSelf->avgpool1d__DOT__data_out_0
        [0U];
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/root/mase-project/mase/src/mase_components/pooling_layers/rtl/avgpool1d.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/root/mase-project/mase/src/mase_components/pooling_layers/rtl/avgpool1d.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/root/mase-project/mase/src/mase_components/pooling_layers/rtl/avgpool1d.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->data_in_0_valid & 0xfeU))) {
        Verilated::overWidthError("data_in_0_valid");}
    if (VL_UNLIKELY((vlSelf->data_out_0_ready & 0xfeU))) {
        Verilated::overWidthError("data_out_0_ready");}
}
#endif  // VL_DEBUG

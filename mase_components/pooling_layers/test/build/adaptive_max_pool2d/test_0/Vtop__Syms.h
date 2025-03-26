// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_adaptive_max_pool2d;
    VerilatedScope __Vscope_adaptive_max_pool2d__unnamedblk1;
    VerilatedScope __Vscope_adaptive_max_pool2d__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_adaptive_max_pool2d__unnamedblk1__unnamedblk2__unnamedblk3;
    VerilatedScope __Vscope_adaptive_max_pool2d__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4;
    VerilatedScope __Vscope_adaptive_max_pool2d__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4__unnamedblk5;
    VerilatedScope __Vscope_adaptive_max_pool2d__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4__unnamedblk5__unnamedblk6;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

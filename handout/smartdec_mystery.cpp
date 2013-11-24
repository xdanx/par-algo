
int64_t g1;

void func_0x14d(int64_t rdi, int32_t esi, int32_t edx, int64_t rcx);

void func_0x161(int64_t rdi, int32_t esi, int32_t edx, int64_t rcx);

void func_0x178(int64_t rdi, int32_t esi, int32_t edx, int64_t rcx);

void func_0x12f(int64_t rdi, int32_t esi, int32_t edx, int64_t rcx) {
    int64_t rcx1;
    int64_t rsp2;
    int64_t rsp3;
    int64_t rsp4;
    int64_t rsp5;
    int64_t rax6;
    int64_t rsp7;
    int64_t rax8;

    rcx1 = g1;
    rsp2 = rsp3 - 8;
    func_0x14d(rsp3 + 0x6f0, 0x200, 0, rcx1);
    rsp4 = rsp5 - 8;
    rax6 = (int64_t)func_0x161(rsp5 + 0x4f0, 0, 10, rcx1);
    rax8 = (int64_t)func_0x178(rsp7 + 0x6f0, 0, 10, rcx1);
    __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
    __asm__("cvtsi2sd	xmm0, edx")
    __asm__("addsd	xmm0, [rip + 0x0]:128")
    __asm__("cvttsd2si	eax, xmm0")
    __asm__("cvtsi2sd	xmm0, eax")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
}

uint64_t func_0x29f();

uint64_t func_0x2d2();

uint64_t func_0x30f();

uint64_t func_0x348();

uint64_t func_0x377();

uint64_t func_0x3d3();

uint64_t func_0x406();

uint64_t func_0x518();

uint64_t func_0x559();

uint64_t func_0x587();

uint64_t func_0x5cc();

uint64_t func_0x5ec();

/* .LC7 */
uint64_t LC7;

void func_0x6db(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

uint64_t func_0x268() {
    int64_t rsp1;
    int64_t rsp2;
    int64_t rax3;
    int64_t rsp4;
    int64_t rsp5;
    int64_t rax6;
    int64_t rsp7;
    int64_t rsp8;
    int64_t rax9;
    int64_t rsp10;
    int64_t rsp11;
    int64_t rax12;
    int64_t rsp13;
    int64_t rsp14;
    int64_t rax15;
    int32_t eax16;
    int64_t rdi17;
    int64_t rsp18;
    int64_t rsp19;
    int64_t rax20;
    int64_t rsp21;
    int64_t rsp22;
    int64_t rax23;
    int32_t* rdx24;
    int32_t* rbx25;
    uint32_t eax26;
    int64_t rcx27;
    int1_t zf28;
    int32_t* rcx29;
    int32_t* rcx30;
    int32_t* rbp31;
    int64_t rdx32;
    int64_t rbx33;
    uint32_t eax34;
    int64_t rsi35;
    int1_t zf36;
    int32_t* rsi37;
    uint64_t rcx38;
    int64_t rbp39;
    int1_t zf40;
    uint64_t rcx41;
    int64_t rax42;
    int64_t rax43;
    int64_t rax44;
    int64_t rax45;
    int64_t rax46;
    uint64_t rax47;
    uint64_t v48;

    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("movsd_sse	[rsp + 0xc0]:128, xmm0")
    __asm__("movsd_sse	[rsp + 0xc8]:128, xmm1")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("movsd_sse	xmm1, [rsp + 0xa8]:128")
    __asm__("mulsd	xmm0, xmm5")
    __asm__("mulsd	xmm1, xmm5")
    rsp1 = rsp2 - 8;
    rax3 = (int64_t)func_0x29f();
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movsd_sse	[rsp + 0x78]:128, xmm0")
    __asm__("movsd_sse	[rsp + 0x80]:128, xmm1")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("movsd_sse	xmm1, [rsp + 0xa8]:128")
    __asm__("mulsd	xmm0, xmm4")
    __asm__("mulsd	xmm1, xmm4")
    rsp4 = rsp5 - 8;
    rax6 = (int64_t)func_0x2d2();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movsd_sse	[rsp + 0x90]:128, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x88]:128, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    rsp7 = rsp8 - 8;
    rax9 = (int64_t)func_0x30f();
    __asm__("movsd_sse	xmm4, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	[rsp + 0x60]:128, xmm1")
    do {
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm3, [rsp + 0x80]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x78]:128")
        __asm__("movsd_sse	[rsp]:128, xmm4")
        rsp10 = rsp11 - 8;
        rax12 = (int64_t)func_0x348();
        __asm__("movsd_sse	xmm3, [rsp + 0x90]:128")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x88]:128")
        rsp13 = rsp14 - 8;
        rax15 = (int64_t)func_0x377();
        __asm__("addsd	xmm1, [rsp + 0x50]:128")
        __asm__("movsd_sse	xmm5, [rsp + 0x48]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        eax16 = 0xb71b0;
        __asm__("addsd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
        do {
            --eax16;
            __asm__("mulsd	xmm1, xmm4")
        } while (eax16 != 0);
        __asm__("movapd	xmm0, xmm1")
        rdi17 = rsp18 + 0xd8;
        __asm__("movsd_sse	[rsp]:128, xmm4")
        __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
        __asm__("movsd_sse	[rsp + 0x30]:128, xmm1")
        rsp19 = rsp18 - 8;
        rax20 = (int64_t)func_0x3d3();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x68]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0xd0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm2")
        __asm__("movsd_sse	xmm2, [rsp + 0xd8]:128")
        __asm__("movsd_sse	[rsp + 0x70]:128, xmm2")
        rsp21 = rsp22 - 8;
        rax23 = (int64_t)func_0x406();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        rdx24 = rbx25;
        __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        do {
            ++rdx24;
            eax26 = (uint32_t)(rcx27 + 0xfffffffffefefeff) & (uint32_t)~*rdx24 & 0x80808080;
        } while (eax26 == 0);
        zf28 = (int1_t)((eax26 & 0x8080) == 0);
        if (zf28) {
        }
        rcx29 = (int32_t*)((int64_t)rdx24 + 2);
        if (zf28) {
            rdx24 = rcx29;
        }
        rcx30 = rbp31;
        rdx32 = (int64_t)rdx24 - (3 + (int1_t)"intrinsic"()) - rbx33;
        do {
            ++rcx30;
            eax34 = (uint32_t)(rsi35 + 0xfffffffffefefeff) & (uint32_t)~*rcx30 & 0x80808080;
        } while (eax34 == 0);
        __asm__("movsd_sse	xmm2, [rsp + 0x70]:128")
        zf36 = (int1_t)((eax34 & 0x8080) == 0);
        __asm__("addsd	xmm2, [rsp + 0x48]:128")
        if (zf36) {
        }
        rsi37 = (int32_t*)((int64_t)rcx30 + 2);
        if (zf36) {
            rcx30 = rsi37;
        }
        rcx38 = (uint64_t)((int64_t)rcx30 - (3 + (int1_t)"intrinsic"()) - rbp39);
        __asm__("addsd	xmm2, xmm0")
        if ("intrinsic"()) {
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rdx")
        }
        __asm__("addsd	xmm2, xmm0")
        zf40 = (int1_t)(rcx38 == 0);
        __asm__("subsd	xmm2, [rip + 0x0]:128")
        if ("intrinsic"()) {
            zf40 = (int1_t)((rcx38 >> 1 | rcx41) == 0);
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rcx")
        }
        __asm__("addsd	xmm0, xmm2")
        __asm__("subsd	xmm0, [rip + 0x0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("ucomisd	xmm0, [rip + 0x0]:128")
    } while (1 && (uint1_t)!zf40);
    __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("addsd	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax42 = (int64_t)func_0x518();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax43 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax44 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax45 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax46 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax47 = v48 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax47 != 0) {
        func_0x6db(rdi17, rsi37, rdx32, rcx38);
    } else {
        return rax47;
    }
}

uint64_t func_0x3d3() {
    int64_t rsp1;
    int64_t rsp2;
    int64_t rax3;
    int32_t* rdx4;
    int32_t* rbx5;
    uint32_t eax6;
    int64_t rcx7;
    int1_t zf8;
    int32_t* rcx9;
    int32_t* rcx10;
    int32_t* rbp11;
    int64_t rdx12;
    int64_t rbx13;
    uint32_t eax14;
    int64_t rsi15;
    int1_t zf16;
    int32_t* rsi17;
    uint64_t rcx18;
    int64_t rbp19;
    int1_t zf20;
    uint64_t rcx21;
    int64_t rsp22;
    int64_t rsp23;
    int64_t rax24;
    int64_t rsp25;
    int64_t rsp26;
    int64_t rax27;
    int32_t eax28;
    int64_t rdi29;
    int64_t rsp30;
    int64_t rax31;
    int64_t rax32;
    int64_t rax33;
    int64_t rax34;
    int64_t rax35;
    int64_t rax36;
    uint64_t rax37;
    uint64_t v38;

    while (1) {
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x68]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0xd0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm2")
        __asm__("movsd_sse	xmm2, [rsp + 0xd8]:128")
        __asm__("movsd_sse	[rsp + 0x70]:128, xmm2")
        rsp1 = rsp2 - 8;
        rax3 = (int64_t)func_0x406();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        rdx4 = rbx5;
        __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        do {
            ++rdx4;
            eax6 = (uint32_t)(rcx7 + 0xfffffffffefefeff) & (uint32_t)~*rdx4 & 0x80808080;
        } while (eax6 == 0);
        zf8 = (int1_t)((eax6 & 0x8080) == 0);
        if (zf8) {
        }
        rcx9 = (int32_t*)((int64_t)rdx4 + 2);
        if (zf8) {
            rdx4 = rcx9;
        }
        rcx10 = rbp11;
        rdx12 = (int64_t)rdx4 - (3 + (int1_t)"intrinsic"()) - rbx13;
        do {
            ++rcx10;
            eax14 = (uint32_t)(rsi15 + 0xfffffffffefefeff) & (uint32_t)~*rcx10 & 0x80808080;
        } while (eax14 == 0);
        __asm__("movsd_sse	xmm2, [rsp + 0x70]:128")
        zf16 = (int1_t)((eax14 & 0x8080) == 0);
        __asm__("addsd	xmm2, [rsp + 0x48]:128")
        if (zf16) {
        }
        rsi17 = (int32_t*)((int64_t)rcx10 + 2);
        if (zf16) {
            rcx10 = rsi17;
        }
        rcx18 = (uint64_t)((int64_t)rcx10 - (3 + (int1_t)"intrinsic"()) - rbp19);
        __asm__("addsd	xmm2, xmm0")
        if ("intrinsic"()) {
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rdx")
        }
        __asm__("addsd	xmm2, xmm0")
        zf20 = (int1_t)(rcx18 == 0);
        __asm__("subsd	xmm2, [rip + 0x0]:128")
        if ("intrinsic"()) {
            zf20 = (int1_t)((rcx18 >> 1 | rcx21) == 0);
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rcx")
        }
        __asm__("addsd	xmm0, xmm2")
        __asm__("subsd	xmm0, [rip + 0x0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("ucomisd	xmm0, [rip + 0x0]:128")
        if (!(1 && (uint1_t)!zf20)) 
            break;
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm3, [rsp + 0x80]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x78]:128")
        __asm__("movsd_sse	[rsp]:128, xmm4")
        rsp22 = rsp23 - 8;
        rax24 = (int64_t)func_0x348();
        __asm__("movsd_sse	xmm3, [rsp + 0x90]:128")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x88]:128")
        rsp25 = rsp26 - 8;
        rax27 = (int64_t)func_0x377();
        __asm__("addsd	xmm1, [rsp + 0x50]:128")
        __asm__("movsd_sse	xmm5, [rsp + 0x48]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        eax28 = 0xb71b0;
        __asm__("addsd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
        do {
            --eax28;
            __asm__("mulsd	xmm1, xmm4")
        } while (eax28 != 0);
        __asm__("movapd	xmm0, xmm1")
        rdi29 = rsp30 + 0xd8;
        __asm__("movsd_sse	[rsp]:128, xmm4")
        __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
        __asm__("movsd_sse	[rsp + 0x30]:128, xmm1")
        rax31 = (int64_t)func_0x3d3();
    }
    __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("addsd	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax32 = (int64_t)func_0x518();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax33 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax34 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax35 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax36 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax37 = v38 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax37 != 0) {
        func_0x6db(rdi29, rsi17, rdx12, rcx18);
    } else {
        return rax37;
    }
}

uint64_t func_0x518() {
    int64_t rax1;
    int64_t rax2;
    int64_t rax3;
    int64_t rax4;
    uint64_t rax5;
    uint64_t v6;
    int64_t rdi7;
    int64_t rsi8;
    int64_t rdx9;
    int64_t rcx10;

    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax1 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax2 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax3 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax4 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax5 = v6 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax5 != 0) {
        func_0x6db(rdi7, rsi8, rdx9, rcx10);
    } else {
        return rax5;
    }
}

int64_t g2;

void func_0x6d1(int32_t edi);

int64_t g3;

void func_0x6c0(int64_t rdi) {
    int64_t rax1;
    int64_t rsp2;
    int64_t rsp3;
    int64_t rsp4;
    int64_t rsp5;
    int64_t rcx6;
    int64_t rsp7;
    int64_t rsp8;
    int64_t rsp9;
    int64_t rsp10;
    int64_t rax11;
    int64_t rsp12;
    int64_t rax13;

    g2 = rax1;
    rsp2 = rsp3 - 8;
    func_0x6d1(0);
    rsp4 = rsp5 - 8;
    func_0x12f(rsp5 + 0x4f0, 0x200, 0, g3);
    rcx6 = g1;
    rsp7 = rsp8 - 8;
    func_0x14d(rsp8 + 0x6f0, 0x200, 0, rcx6);
    rsp9 = rsp10 - 8;
    rax11 = (int64_t)func_0x161(rsp10 + 0x4f0, 0, 10, rcx6);
    rax13 = (int64_t)func_0x178(rsp12 + 0x6f0, 0, 10, rcx6);
    __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
    __asm__("cvtsi2sd	xmm0, edx")
    __asm__("addsd	xmm0, [rip + 0x0]:128")
    __asm__("cvttsd2si	eax, xmm0")
    __asm__("cvtsi2sd	xmm0, eax")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
}

signed char g4;

void func_0x6ab(int32_t edi);

void func_0x104(int64_t rdi, int32_t esi, int32_t edx) {
    int64_t rsp1;
    int64_t rsp2;
    int32_t eax3;
    int64_t rsp4;
    int64_t rsp5;
    int64_t rax6;
    int64_t rsp7;
    int64_t rsp8;
    int64_t rcx9;
    int64_t rsp10;
    int64_t rsp11;
    int64_t rsp12;
    int64_t rsp13;
    int64_t rax14;
    int64_t rsp15;
    int64_t rax16;

    if (g4 == 0) {
        rsp1 = rsp2 - 8;
        eax3 = (int32_t)func_0x6ab(0);
        if (eax3 == 0) 
            goto addr_0x111_4;
    } else {
        addr_0x111_4:
        rsp4 = rsp2 - 8;
        func_0x12f(rsp2 + 0x4f0, 0x200, 0, g3);
        goto addr_0x12f_5;
    }
    rsp5 = rsp2 - 8;
    rax6 = (int64_t)func_0x6c0(rsp2 + 0xe8);
    g2 = rax6;
    rsp7 = rsp8 - 8;
    func_0x6d1(0);
    goto addr_0x111_4;
    addr_0x12f_5:
    rcx9 = g1;
    rsp10 = rsp11 - 8;
    func_0x14d(rsp11 + 0x6f0, 0x200, 0, rcx9);
    rsp12 = rsp13 - 8;
    rax14 = (int64_t)func_0x161(rsp13 + 0x4f0, 0, 10, rcx9);
    rax16 = (int64_t)func_0x178(rsp15 + 0x6f0, 0, 10, rcx9);
    __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
    __asm__("cvtsi2sd	xmm0, edx")
    __asm__("addsd	xmm0, [rip + 0x0]:128")
    __asm__("cvttsd2si	eax, xmm0")
    __asm__("cvtsi2sd	xmm0, eax")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
}

void func_0x14d(int64_t rdi, int32_t esi, int32_t edx, int64_t rcx) {
    int64_t rsp1;
    int64_t rsp2;
    int64_t rcx3;
    int64_t rax4;
    int64_t rsp5;
    int64_t rcx6;
    int64_t rax7;

    rsp1 = rsp2 - 8;
    rax4 = (int64_t)func_0x161(rsp2 + 0x4f0, 0, 10, rcx3);
    rax7 = (int64_t)func_0x178(rsp5 + 0x6f0, 0, 10, rcx6);
    __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
    __asm__("cvtsi2sd	xmm0, edx")
    __asm__("addsd	xmm0, [rip + 0x0]:128")
    __asm__("cvttsd2si	eax, xmm0")
    __asm__("cvtsi2sd	xmm0, eax")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
}

uint64_t func_0x29f() {
    int64_t rsp1;
    int64_t rsp2;
    int64_t rax3;
    int64_t rsp4;
    int64_t rsp5;
    int64_t rax6;
    int64_t rsp7;
    int64_t rsp8;
    int64_t rax9;
    int64_t rsp10;
    int64_t rsp11;
    int64_t rax12;
    int32_t eax13;
    int64_t rdi14;
    int64_t rsp15;
    int64_t rsp16;
    int64_t rax17;
    int64_t rsp18;
    int64_t rsp19;
    int64_t rax20;
    int32_t* rdx21;
    int32_t* rbx22;
    uint32_t eax23;
    int64_t rcx24;
    int1_t zf25;
    int32_t* rcx26;
    int32_t* rcx27;
    int32_t* rbp28;
    int64_t rdx29;
    int64_t rbx30;
    uint32_t eax31;
    int64_t rsi32;
    int1_t zf33;
    int32_t* rsi34;
    uint64_t rcx35;
    int64_t rbp36;
    int1_t zf37;
    uint64_t rcx38;
    int64_t rax39;
    int64_t rax40;
    int64_t rax41;
    int64_t rax42;
    int64_t rax43;
    uint64_t rax44;
    uint64_t v45;

    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movsd_sse	[rsp + 0x78]:128, xmm0")
    __asm__("movsd_sse	[rsp + 0x80]:128, xmm1")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("movsd_sse	xmm1, [rsp + 0xa8]:128")
    __asm__("mulsd	xmm0, xmm4")
    __asm__("mulsd	xmm1, xmm4")
    rsp1 = rsp2 - 8;
    rax3 = (int64_t)func_0x2d2();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movsd_sse	[rsp + 0x90]:128, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x88]:128, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    rsp4 = rsp5 - 8;
    rax6 = (int64_t)func_0x30f();
    __asm__("movsd_sse	xmm4, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	[rsp + 0x60]:128, xmm1")
    do {
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm3, [rsp + 0x80]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x78]:128")
        __asm__("movsd_sse	[rsp]:128, xmm4")
        rsp7 = rsp8 - 8;
        rax9 = (int64_t)func_0x348();
        __asm__("movsd_sse	xmm3, [rsp + 0x90]:128")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x88]:128")
        rsp10 = rsp11 - 8;
        rax12 = (int64_t)func_0x377();
        __asm__("addsd	xmm1, [rsp + 0x50]:128")
        __asm__("movsd_sse	xmm5, [rsp + 0x48]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        eax13 = 0xb71b0;
        __asm__("addsd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
        do {
            --eax13;
            __asm__("mulsd	xmm1, xmm4")
        } while (eax13 != 0);
        __asm__("movapd	xmm0, xmm1")
        rdi14 = rsp15 + 0xd8;
        __asm__("movsd_sse	[rsp]:128, xmm4")
        __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
        __asm__("movsd_sse	[rsp + 0x30]:128, xmm1")
        rsp16 = rsp15 - 8;
        rax17 = (int64_t)func_0x3d3();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x68]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0xd0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm2")
        __asm__("movsd_sse	xmm2, [rsp + 0xd8]:128")
        __asm__("movsd_sse	[rsp + 0x70]:128, xmm2")
        rsp18 = rsp19 - 8;
        rax20 = (int64_t)func_0x406();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        rdx21 = rbx22;
        __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        do {
            ++rdx21;
            eax23 = (uint32_t)(rcx24 + 0xfffffffffefefeff) & (uint32_t)~*rdx21 & 0x80808080;
        } while (eax23 == 0);
        zf25 = (int1_t)((eax23 & 0x8080) == 0);
        if (zf25) {
        }
        rcx26 = (int32_t*)((int64_t)rdx21 + 2);
        if (zf25) {
            rdx21 = rcx26;
        }
        rcx27 = rbp28;
        rdx29 = (int64_t)rdx21 - (3 + (int1_t)"intrinsic"()) - rbx30;
        do {
            ++rcx27;
            eax31 = (uint32_t)(rsi32 + 0xfffffffffefefeff) & (uint32_t)~*rcx27 & 0x80808080;
        } while (eax31 == 0);
        __asm__("movsd_sse	xmm2, [rsp + 0x70]:128")
        zf33 = (int1_t)((eax31 & 0x8080) == 0);
        __asm__("addsd	xmm2, [rsp + 0x48]:128")
        if (zf33) {
        }
        rsi34 = (int32_t*)((int64_t)rcx27 + 2);
        if (zf33) {
            rcx27 = rsi34;
        }
        rcx35 = (uint64_t)((int64_t)rcx27 - (3 + (int1_t)"intrinsic"()) - rbp36);
        __asm__("addsd	xmm2, xmm0")
        if ("intrinsic"()) {
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rdx")
        }
        __asm__("addsd	xmm2, xmm0")
        zf37 = (int1_t)(rcx35 == 0);
        __asm__("subsd	xmm2, [rip + 0x0]:128")
        if ("intrinsic"()) {
            zf37 = (int1_t)((rcx35 >> 1 | rcx38) == 0);
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rcx")
        }
        __asm__("addsd	xmm0, xmm2")
        __asm__("subsd	xmm0, [rip + 0x0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("ucomisd	xmm0, [rip + 0x0]:128")
    } while (1 && (uint1_t)!zf37);
    __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("addsd	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax39 = (int64_t)func_0x518();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax40 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax41 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax42 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax43 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax44 = v45 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax44 != 0) {
        func_0x6db(rdi14, rsi34, rdx29, rcx35);
    } else {
        return rax44;
    }
}

uint64_t func_0x406() {
    int32_t* rdx1;
    int32_t* rbx2;
    uint32_t eax3;
    int64_t rcx4;
    int1_t zf5;
    int32_t* rcx6;
    int32_t* rcx7;
    int32_t* rbp8;
    int64_t rdx9;
    int64_t rbx10;
    uint32_t eax11;
    int64_t rsi12;
    int1_t zf13;
    int32_t* rsi14;
    uint64_t rcx15;
    int64_t rbp16;
    int1_t zf17;
    uint64_t rcx18;
    int64_t rsp19;
    int64_t rsp20;
    int64_t rax21;
    int64_t rsp22;
    int64_t rsp23;
    int64_t rax24;
    int32_t eax25;
    int64_t rdi26;
    int64_t rsp27;
    int64_t rax28;
    int64_t rax29;
    int64_t rax30;
    int64_t rax31;
    int64_t rax32;
    int64_t rax33;
    int64_t rax34;
    uint64_t rax35;
    uint64_t v36;

    while (1) {
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        rdx1 = rbx2;
        __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        do {
            ++rdx1;
            eax3 = (uint32_t)(rcx4 + 0xfffffffffefefeff) & (uint32_t)~*rdx1 & 0x80808080;
        } while (eax3 == 0);
        zf5 = (int1_t)((eax3 & 0x8080) == 0);
        if (zf5) {
        }
        rcx6 = (int32_t*)((int64_t)rdx1 + 2);
        if (zf5) {
            rdx1 = rcx6;
        }
        rcx7 = rbp8;
        rdx9 = (int64_t)rdx1 - (3 + (int1_t)"intrinsic"()) - rbx10;
        do {
            ++rcx7;
            eax11 = (uint32_t)(rsi12 + 0xfffffffffefefeff) & (uint32_t)~*rcx7 & 0x80808080;
        } while (eax11 == 0);
        __asm__("movsd_sse	xmm2, [rsp + 0x70]:128")
        zf13 = (int1_t)((eax11 & 0x8080) == 0);
        __asm__("addsd	xmm2, [rsp + 0x48]:128")
        if (zf13) {
        }
        rsi14 = (int32_t*)((int64_t)rcx7 + 2);
        if (zf13) {
            rcx7 = rsi14;
        }
        rcx15 = (uint64_t)((int64_t)rcx7 - (3 + (int1_t)"intrinsic"()) - rbp16);
        __asm__("addsd	xmm2, xmm0")
        if ("intrinsic"()) {
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rdx")
        }
        __asm__("addsd	xmm2, xmm0")
        zf17 = (int1_t)(rcx15 == 0);
        __asm__("subsd	xmm2, [rip + 0x0]:128")
        if ("intrinsic"()) {
            zf17 = (int1_t)((rcx15 >> 1 | rcx18) == 0);
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rcx")
        }
        __asm__("addsd	xmm0, xmm2")
        __asm__("subsd	xmm0, [rip + 0x0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("ucomisd	xmm0, [rip + 0x0]:128")
        if (!(1 && (uint1_t)!zf17)) 
            break;
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm3, [rsp + 0x80]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x78]:128")
        __asm__("movsd_sse	[rsp]:128, xmm4")
        rsp19 = rsp20 - 8;
        rax21 = (int64_t)func_0x348();
        __asm__("movsd_sse	xmm3, [rsp + 0x90]:128")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x88]:128")
        rsp22 = rsp23 - 8;
        rax24 = (int64_t)func_0x377();
        __asm__("addsd	xmm1, [rsp + 0x50]:128")
        __asm__("movsd_sse	xmm5, [rsp + 0x48]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        eax25 = 0xb71b0;
        __asm__("addsd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
        do {
            --eax25;
            __asm__("mulsd	xmm1, xmm4")
        } while (eax25 != 0);
        __asm__("movapd	xmm0, xmm1")
        rdi26 = rsp27 + 0xd8;
        __asm__("movsd_sse	[rsp]:128, xmm4")
        __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
        __asm__("movsd_sse	[rsp + 0x30]:128, xmm1")
        rax28 = (int64_t)func_0x3d3();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x68]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0xd0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm2")
        __asm__("movsd_sse	xmm2, [rsp + 0xd8]:128")
        __asm__("movsd_sse	[rsp + 0x70]:128, xmm2")
        rax29 = (int64_t)func_0x406();
    }
    __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("addsd	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax30 = (int64_t)func_0x518();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax31 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax32 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax33 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax34 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax35 = v36 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax35 != 0) {
        func_0x6db(rdi26, rsi14, rdx9, rcx15);
    } else {
        return rax35;
    }
}

uint64_t func_0x348() {
    int64_t rsp1;
    int64_t rsp2;
    int64_t rax3;
    int32_t eax4;
    int64_t rdi5;
    int64_t rsp6;
    int64_t rax7;
    int64_t rax8;
    int32_t* rdx9;
    int32_t* rbx10;
    uint32_t eax11;
    int64_t rcx12;
    int1_t zf13;
    int32_t* rcx14;
    int32_t* rcx15;
    int32_t* rbp16;
    int64_t rdx17;
    int64_t rbx18;
    uint32_t eax19;
    int64_t rsi20;
    int1_t zf21;
    int32_t* rsi22;
    uint64_t rcx23;
    int64_t rbp24;
    int1_t zf25;
    uint64_t rcx26;
    int64_t rax27;
    int64_t rax28;
    int64_t rax29;
    int64_t rax30;
    int64_t rax31;
    int64_t rax32;
    uint64_t rax33;
    uint64_t v34;

    while (1) {
        __asm__("movsd_sse	xmm3, [rsp + 0x90]:128")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x88]:128")
        rsp1 = rsp2 - 8;
        rax3 = (int64_t)func_0x377();
        __asm__("addsd	xmm1, [rsp + 0x50]:128")
        __asm__("movsd_sse	xmm5, [rsp + 0x48]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        eax4 = 0xb71b0;
        __asm__("addsd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
        do {
            --eax4;
            __asm__("mulsd	xmm1, xmm4")
        } while (eax4 != 0);
        __asm__("movapd	xmm0, xmm1")
        rdi5 = rsp6 + 0xd8;
        __asm__("movsd_sse	[rsp]:128, xmm4")
        __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
        __asm__("movsd_sse	[rsp + 0x30]:128, xmm1")
        rax7 = (int64_t)func_0x3d3();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x68]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0xd0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm2")
        __asm__("movsd_sse	xmm2, [rsp + 0xd8]:128")
        __asm__("movsd_sse	[rsp + 0x70]:128, xmm2")
        rax8 = (int64_t)func_0x406();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        rdx9 = rbx10;
        __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        do {
            ++rdx9;
            eax11 = (uint32_t)(rcx12 + 0xfffffffffefefeff) & (uint32_t)~*rdx9 & 0x80808080;
        } while (eax11 == 0);
        zf13 = (int1_t)((eax11 & 0x8080) == 0);
        if (zf13) {
        }
        rcx14 = (int32_t*)((int64_t)rdx9 + 2);
        if (zf13) {
            rdx9 = rcx14;
        }
        rcx15 = rbp16;
        rdx17 = (int64_t)rdx9 - (3 + (int1_t)"intrinsic"()) - rbx18;
        do {
            ++rcx15;
            eax19 = (uint32_t)(rsi20 + 0xfffffffffefefeff) & (uint32_t)~*rcx15 & 0x80808080;
        } while (eax19 == 0);
        __asm__("movsd_sse	xmm2, [rsp + 0x70]:128")
        zf21 = (int1_t)((eax19 & 0x8080) == 0);
        __asm__("addsd	xmm2, [rsp + 0x48]:128")
        if (zf21) {
        }
        rsi22 = (int32_t*)((int64_t)rcx15 + 2);
        if (zf21) {
            rcx15 = rsi22;
        }
        rcx23 = (uint64_t)((int64_t)rcx15 - (3 + (int1_t)"intrinsic"()) - rbp24);
        __asm__("addsd	xmm2, xmm0")
        if ("intrinsic"()) {
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rdx")
        }
        __asm__("addsd	xmm2, xmm0")
        zf25 = (int1_t)(rcx23 == 0);
        __asm__("subsd	xmm2, [rip + 0x0]:128")
        if ("intrinsic"()) {
            zf25 = (int1_t)((rcx23 >> 1 | rcx26) == 0);
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rcx")
        }
        __asm__("addsd	xmm0, xmm2")
        __asm__("subsd	xmm0, [rip + 0x0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("ucomisd	xmm0, [rip + 0x0]:128")
        if (!(1 && (uint1_t)!zf25)) 
            break;
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm3, [rsp + 0x80]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x78]:128")
        __asm__("movsd_sse	[rsp]:128, xmm4")
        rax27 = (int64_t)func_0x348();
    }
    __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("addsd	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax28 = (int64_t)func_0x518();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax29 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax30 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax31 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax32 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax33 = v34 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax33 != 0) {
        func_0x6db(rdi5, rsi22, rdx17, rcx23);
    } else {
        return rax33;
    }
}

uint64_t func_0x559() {
    int64_t rax1;
    int64_t rax2;
    int64_t rax3;
    uint64_t rax4;
    uint64_t v5;
    int64_t rdi6;
    int64_t rsi7;
    int64_t rdx8;
    int64_t rcx9;

    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax1 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax2 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax3 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax4 = v5 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax4 != 0) {
        func_0x6db(rdi6, rsi7, rdx8, rcx9);
    } else {
        return rax4;
    }
}

void func_0x6d1(int32_t edi) {
    int64_t rsp1;
    int64_t rsp2;
    int64_t rcx3;
    int64_t rsp4;
    int64_t rsp5;
    int64_t rsp6;
    int64_t rsp7;
    int64_t rax8;
    int64_t rsp9;
    int64_t rax10;

    rsp1 = rsp2 - 8;
    func_0x12f(rsp2 + 0x4f0, 0x200, 0, g3);
    rcx3 = g1;
    rsp4 = rsp5 - 8;
    func_0x14d(rsp5 + 0x6f0, 0x200, 0, rcx3);
    rsp6 = rsp7 - 8;
    rax8 = (int64_t)func_0x161(rsp7 + 0x4f0, 0, 10, rcx3);
    rax10 = (int64_t)func_0x178(rsp9 + 0x6f0, 0, 10, rcx3);
    __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
    __asm__("cvtsi2sd	xmm0, edx")
    __asm__("addsd	xmm0, [rip + 0x0]:128")
    __asm__("cvttsd2si	eax, xmm0")
    __asm__("cvtsi2sd	xmm0, eax")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
}

void func_0x161(int64_t rdi, int32_t esi, int32_t edx, int64_t rcx) {
    int64_t rsp1;
    int64_t rcx2;
    int64_t rax3;

    rax3 = (int64_t)func_0x178(rsp1 + 0x6f0, 0, 10, rcx2);
    __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
    __asm__("cvtsi2sd	xmm0, edx")
    __asm__("addsd	xmm0, [rip + 0x0]:128")
    __asm__("cvttsd2si	eax, xmm0")
    __asm__("cvtsi2sd	xmm0, eax")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
}

uint64_t func_0x2d2() {
    int64_t rsp1;
    int64_t rsp2;
    int64_t rax3;
    int64_t rsp4;
    int64_t rsp5;
    int64_t rax6;
    int64_t rsp7;
    int64_t rsp8;
    int64_t rax9;
    int32_t eax10;
    int64_t rdi11;
    int64_t rsp12;
    int64_t rsp13;
    int64_t rax14;
    int64_t rsp15;
    int64_t rsp16;
    int64_t rax17;
    int32_t* rdx18;
    int32_t* rbx19;
    uint32_t eax20;
    int64_t rcx21;
    int1_t zf22;
    int32_t* rcx23;
    int32_t* rcx24;
    int32_t* rbp25;
    int64_t rdx26;
    int64_t rbx27;
    uint32_t eax28;
    int64_t rsi29;
    int1_t zf30;
    int32_t* rsi31;
    uint64_t rcx32;
    int64_t rbp33;
    int1_t zf34;
    uint64_t rcx35;
    int64_t rax36;
    int64_t rax37;
    int64_t rax38;
    int64_t rax39;
    int64_t rax40;
    uint64_t rax41;
    uint64_t v42;

    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movsd_sse	[rsp + 0x90]:128, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x88]:128, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    rsp1 = rsp2 - 8;
    rax3 = (int64_t)func_0x30f();
    __asm__("movsd_sse	xmm4, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	[rsp + 0x60]:128, xmm1")
    do {
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm3, [rsp + 0x80]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x78]:128")
        __asm__("movsd_sse	[rsp]:128, xmm4")
        rsp4 = rsp5 - 8;
        rax6 = (int64_t)func_0x348();
        __asm__("movsd_sse	xmm3, [rsp + 0x90]:128")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x88]:128")
        rsp7 = rsp8 - 8;
        rax9 = (int64_t)func_0x377();
        __asm__("addsd	xmm1, [rsp + 0x50]:128")
        __asm__("movsd_sse	xmm5, [rsp + 0x48]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        eax10 = 0xb71b0;
        __asm__("addsd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
        do {
            --eax10;
            __asm__("mulsd	xmm1, xmm4")
        } while (eax10 != 0);
        __asm__("movapd	xmm0, xmm1")
        rdi11 = rsp12 + 0xd8;
        __asm__("movsd_sse	[rsp]:128, xmm4")
        __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
        __asm__("movsd_sse	[rsp + 0x30]:128, xmm1")
        rsp13 = rsp12 - 8;
        rax14 = (int64_t)func_0x3d3();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x68]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0xd0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm2")
        __asm__("movsd_sse	xmm2, [rsp + 0xd8]:128")
        __asm__("movsd_sse	[rsp + 0x70]:128, xmm2")
        rsp15 = rsp16 - 8;
        rax17 = (int64_t)func_0x406();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        rdx18 = rbx19;
        __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        do {
            ++rdx18;
            eax20 = (uint32_t)(rcx21 + 0xfffffffffefefeff) & (uint32_t)~*rdx18 & 0x80808080;
        } while (eax20 == 0);
        zf22 = (int1_t)((eax20 & 0x8080) == 0);
        if (zf22) {
        }
        rcx23 = (int32_t*)((int64_t)rdx18 + 2);
        if (zf22) {
            rdx18 = rcx23;
        }
        rcx24 = rbp25;
        rdx26 = (int64_t)rdx18 - (3 + (int1_t)"intrinsic"()) - rbx27;
        do {
            ++rcx24;
            eax28 = (uint32_t)(rsi29 + 0xfffffffffefefeff) & (uint32_t)~*rcx24 & 0x80808080;
        } while (eax28 == 0);
        __asm__("movsd_sse	xmm2, [rsp + 0x70]:128")
        zf30 = (int1_t)((eax28 & 0x8080) == 0);
        __asm__("addsd	xmm2, [rsp + 0x48]:128")
        if (zf30) {
        }
        rsi31 = (int32_t*)((int64_t)rcx24 + 2);
        if (zf30) {
            rcx24 = rsi31;
        }
        rcx32 = (uint64_t)((int64_t)rcx24 - (3 + (int1_t)"intrinsic"()) - rbp33);
        __asm__("addsd	xmm2, xmm0")
        if ("intrinsic"()) {
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rdx")
        }
        __asm__("addsd	xmm2, xmm0")
        zf34 = (int1_t)(rcx32 == 0);
        __asm__("subsd	xmm2, [rip + 0x0]:128")
        if ("intrinsic"()) {
            zf34 = (int1_t)((rcx32 >> 1 | rcx35) == 0);
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rcx")
        }
        __asm__("addsd	xmm0, xmm2")
        __asm__("subsd	xmm0, [rip + 0x0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("ucomisd	xmm0, [rip + 0x0]:128")
    } while (1 && (uint1_t)!zf34);
    __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("addsd	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax36 = (int64_t)func_0x518();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax37 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax38 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax39 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax40 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax41 = v42 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax41 != 0) {
        func_0x6db(rdi11, rsi31, rdx26, rcx32);
    } else {
        return rax41;
    }
}

void func_0x6ab(int32_t edi) {
    int32_t eax1;
    int64_t rsp2;
    int64_t rsp3;
    int64_t rax4;
    int64_t rsp5;
    int64_t rsp6;
    int64_t rsp7;
    int64_t rcx8;
    int64_t rsp9;
    int64_t rsp10;
    int64_t rsp11;
    int64_t rsp12;
    int64_t rax13;
    int64_t rsp14;
    int64_t rax15;

    if (eax1 != 0) {
        rsp2 = rsp3 - 8;
        rax4 = (int64_t)func_0x6c0(rsp3 + 0xe8);
        g2 = rax4;
        rsp5 = rsp6 - 8;
        func_0x6d1(0);
    }
    rsp7 = rsp3 - 8;
    func_0x12f(rsp3 + 0x4f0, 0x200, 0, g3);
    rcx8 = g1;
    rsp9 = rsp10 - 8;
    func_0x14d(rsp10 + 0x6f0, 0x200, 0, rcx8);
    rsp11 = rsp12 - 8;
    rax13 = (int64_t)func_0x161(rsp12 + 0x4f0, 0, 10, rcx8);
    rax15 = (int64_t)func_0x178(rsp14 + 0x6f0, 0, 10, rcx8);
    __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
    __asm__("cvtsi2sd	xmm0, edx")
    __asm__("addsd	xmm0, [rip + 0x0]:128")
    __asm__("cvttsd2si	eax, xmm0")
    __asm__("cvtsi2sd	xmm0, eax")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
}

uint64_t func_0x377() {
    int32_t eax1;
    int64_t rdi2;
    int64_t rsp3;
    int64_t rax4;
    int64_t rax5;
    int32_t* rdx6;
    int32_t* rbx7;
    uint32_t eax8;
    int64_t rcx9;
    int1_t zf10;
    int32_t* rcx11;
    int32_t* rcx12;
    int32_t* rbp13;
    int64_t rdx14;
    int64_t rbx15;
    uint32_t eax16;
    int64_t rsi17;
    int1_t zf18;
    int32_t* rsi19;
    uint64_t rcx20;
    int64_t rbp21;
    int1_t zf22;
    uint64_t rcx23;
    int64_t rax24;
    int64_t rax25;
    int64_t rax26;
    int64_t rax27;
    int64_t rax28;
    int64_t rax29;
    int64_t rax30;
    uint64_t rax31;
    uint64_t v32;

    while (1) {
        __asm__("addsd	xmm1, [rsp + 0x50]:128")
        __asm__("movsd_sse	xmm5, [rsp + 0x48]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        eax1 = 0xb71b0;
        __asm__("addsd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
        do {
            --eax1;
            __asm__("mulsd	xmm1, xmm4")
        } while (eax1 != 0);
        __asm__("movapd	xmm0, xmm1")
        rdi2 = rsp3 + 0xd8;
        __asm__("movsd_sse	[rsp]:128, xmm4")
        __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
        __asm__("movsd_sse	[rsp + 0x30]:128, xmm1")
        rax4 = (int64_t)func_0x3d3();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x68]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0xd0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm2")
        __asm__("movsd_sse	xmm2, [rsp + 0xd8]:128")
        __asm__("movsd_sse	[rsp + 0x70]:128, xmm2")
        rax5 = (int64_t)func_0x406();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        rdx6 = rbx7;
        __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        do {
            ++rdx6;
            eax8 = (uint32_t)(rcx9 + 0xfffffffffefefeff) & (uint32_t)~*rdx6 & 0x80808080;
        } while (eax8 == 0);
        zf10 = (int1_t)((eax8 & 0x8080) == 0);
        if (zf10) {
        }
        rcx11 = (int32_t*)((int64_t)rdx6 + 2);
        if (zf10) {
            rdx6 = rcx11;
        }
        rcx12 = rbp13;
        rdx14 = (int64_t)rdx6 - (3 + (int1_t)"intrinsic"()) - rbx15;
        do {
            ++rcx12;
            eax16 = (uint32_t)(rsi17 + 0xfffffffffefefeff) & (uint32_t)~*rcx12 & 0x80808080;
        } while (eax16 == 0);
        __asm__("movsd_sse	xmm2, [rsp + 0x70]:128")
        zf18 = (int1_t)((eax16 & 0x8080) == 0);
        __asm__("addsd	xmm2, [rsp + 0x48]:128")
        if (zf18) {
        }
        rsi19 = (int32_t*)((int64_t)rcx12 + 2);
        if (zf18) {
            rcx12 = rsi19;
        }
        rcx20 = (uint64_t)((int64_t)rcx12 - (3 + (int1_t)"intrinsic"()) - rbp21);
        __asm__("addsd	xmm2, xmm0")
        if ("intrinsic"()) {
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rdx")
        }
        __asm__("addsd	xmm2, xmm0")
        zf22 = (int1_t)(rcx20 == 0);
        __asm__("subsd	xmm2, [rip + 0x0]:128")
        if ("intrinsic"()) {
            zf22 = (int1_t)((rcx20 >> 1 | rcx23) == 0);
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rcx")
        }
        __asm__("addsd	xmm0, xmm2")
        __asm__("subsd	xmm0, [rip + 0x0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("ucomisd	xmm0, [rip + 0x0]:128")
        if (!(1 && (uint1_t)!zf22)) 
            break;
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm3, [rsp + 0x80]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x78]:128")
        __asm__("movsd_sse	[rsp]:128, xmm4")
        rax24 = (int64_t)func_0x348();
        __asm__("movsd_sse	xmm3, [rsp + 0x90]:128")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x88]:128")
        rax25 = (int64_t)func_0x377();
    }
    __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("addsd	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax26 = (int64_t)func_0x518();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax27 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax28 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax29 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax30 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax31 = v32 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax31 != 0) {
        func_0x6db(rdi2, rsi19, rdx14, rcx20);
    } else {
        return rax31;
    }
}

uint64_t func_0x587() {
    int64_t rax1;
    int64_t rax2;
    uint64_t rax3;
    uint64_t v4;
    int64_t rdi5;
    int64_t rsi6;
    int64_t rdx7;
    int64_t rcx8;

    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax1 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax2 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax3 = v4 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax3 != 0) {
        func_0x6db(rdi5, rsi6, rdx7, rcx8);
    } else {
        return rax3;
    }
}

void func_0x178(int64_t rdi, int32_t esi, int32_t edx, int64_t rcx)
{
    __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
    __asm__("cvtsi2sd	xmm0, edx")
    __asm__("addsd	xmm0, [rip + 0x0]:128")
    __asm__("cvttsd2si	eax, xmm0")
    __asm__("cvtsi2sd	xmm0, eax")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
}

uint64_t func_0x30f()
{
    int64_t rsp1;
    int64_t rsp2;
    int64_t rax3;
    int64_t rsp4;
    int64_t rsp5;
    int64_t rax6;
    int32_t eax7;
    int64_t rdi8;
    int64_t rsp9;
    int64_t rsp10;
    int64_t rax11;
    int64_t rsp12;
    int64_t rsp13;
    int64_t rax14;
    int32_t* rdx15;
    int32_t* rbx16;
    uint32_t eax17;
    int64_t rcx18;
    int1_t zf19;
    int32_t* rcx20;
    int32_t* rcx21;
    int32_t* rbp22;
    int64_t rdx23;
    int64_t rbx24;
    uint32_t eax25;
    int64_t rsi26;
    int1_t zf27;
    int32_t* rsi28;
    uint64_t rcx29;
    int64_t rbp30;
    int1_t zf31;
    uint64_t rcx32;
    int64_t rax33;
    int64_t rax34;
    int64_t rax35;
    int64_t rax36;
    int64_t rax37;
    uint64_t rax38;
    uint64_t v39;

    __asm__("movsd_sse	xmm4, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	[rsp + 0x60]:128, xmm1")
    do {
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm3, [rsp + 0x80]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x78]:128")
        __asm__("movsd_sse	[rsp]:128, xmm4")
        rsp1 = rsp2 - 8;
        rax3 = (int64_t)func_0x348();
        __asm__("movsd_sse	xmm3, [rsp + 0x90]:128")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm0, [rsp + 0x58]:128")
        __asm__("movsd_sse	xmm1, [rsp + 0x60]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0x88]:128")
        rsp4 = rsp5 - 8;
        rax6 = (int64_t)func_0x377();
        __asm__("addsd	xmm1, [rsp + 0x50]:128")
        __asm__("movsd_sse	xmm5, [rsp + 0x48]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        eax7 = 0xb71b0;
        __asm__("addsd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x50]:128, xmm1")
        __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
        do {
            --eax7;
            __asm__("mulsd	xmm1, xmm4")
        } while (eax7 != 0);
        __asm__("movapd	xmm0, xmm1")
        rdi8 = rsp9 + 0xd8;
        __asm__("movsd_sse	[rsp]:128, xmm4")
        __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
        __asm__("movsd_sse	[rsp + 0x30]:128, xmm1")
        rsp10 = rsp9 - 8;
        rax11 = (int64_t)func_0x3d3();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        __asm__("movsd_sse	xmm0, [rsp + 0x68]:128")
        __asm__("movsd_sse	xmm2, [rsp + 0xd0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("movsd_sse	[rsp + 0x48]:128, xmm2")
        __asm__("movsd_sse	xmm2, [rsp + 0xd8]:128")
        __asm__("movsd_sse	[rsp + 0x70]:128, xmm2")
        rsp12 = rsp13 - 8;
        rax14 = (int64_t)func_0x406();
        __asm__("movsd_sse	xmm1, [rsp + 0x30]:128")
        rdx15 = rbx16;
        __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
        __asm__("movsd_sse	xmm4, [rsp]:128")
        do {
            ++rdx15;
            eax17 = (uint32_t)(rcx18 + 0xfffffffffefefeff) & (uint32_t)~*rdx15 & 0x80808080;
        } while (eax17 == 0);
        zf19 = (int1_t)((eax17 & 0x8080) == 0);
        if (zf19) {
        }
        rcx20 = (int32_t*)((int64_t)rdx15 + 2);
        if (zf19) {
            rdx15 = rcx20;
        }
        rcx21 = rbp22;
        rdx23 = (int64_t)rdx15 - (3 + (int1_t)"intrinsic"()) - rbx24;
        do {
            ++rcx21;
            eax25 = (uint32_t)(rsi26 + 0xfffffffffefefeff) & (uint32_t)~*rcx21 & 0x80808080;
        } while (eax25 == 0);
        __asm__("movsd_sse	xmm2, [rsp + 0x70]:128")
        zf27 = (int1_t)((eax25 & 0x8080) == 0);
        __asm__("addsd	xmm2, [rsp + 0x48]:128")
        if (zf27) {
        }
        rsi28 = (int32_t*)((int64_t)rcx21 + 2);
        if (zf27) {
            rcx21 = rsi28;
        }
        rcx29 = (uint64_t)((int64_t)rcx21 - (3 + (int1_t)"intrinsic"()) - rbp30);
        __asm__("addsd	xmm2, xmm0")
        if ("intrinsic"()) {
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rdx")
        }
        __asm__("addsd	xmm2, xmm0")
        zf31 = (int1_t)(rcx29 == 0);
        __asm__("subsd	xmm2, [rip + 0x0]:128")
        if ("intrinsic"()) {
            zf31 = (int1_t)((rcx29 >> 1 | rcx32) == 0);
            __asm__("cvtsi2sd	xmm0, rax")
            __asm__("addsd	xmm0, xmm0")
        } else {
            __asm__("cvtsi2sd	xmm0, rcx")
        }
        __asm__("addsd	xmm0, xmm2")
        __asm__("subsd	xmm0, [rip + 0x0]:128")
        __asm__("addsd	xmm0, xmm1")
        __asm__("ucomisd	xmm0, [rip + 0x0]:128")
    } while (1 && (uint1_t)!zf31);
    __asm__("movsd_sse	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("addsd	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax33 = (int64_t)func_0x518();
    __asm__("movsd_sse	xmm2, [rsp + 0xc0]:128")
    __asm__("movapd	xmm8, xmm1")
    __asm__("xorpd	xmm1, xmm1")
    __asm__("addsd	xmm2, [rip + 0x0]:128")
    __asm__("movapd	xmm7, xmm0")
    __asm__("movsd_sse	xmm3, [rsp + 0xc8]:128")
    __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm8")
    rax34 = (int64_t)func_0x559();
    __asm__("movsd_sse	xmm8, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("movapd	xmm4, xmm0")
    __asm__("movapd	xmm6, xmm1")
    __asm__("movapd	xmm3, xmm8")
    __asm__("movapd	xmm2, xmm7")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movsd_sse	[rsp + 0x30]:128, xmm6")
    rax35 = (int64_t)func_0x587();
    __asm__("movapd	xmm7, xmm1")
    __asm__("movsd_sse	[rsp + 0x58]:128, xmm0")
    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("movsd_sse	xmm0, [rsp + 0xa0]:128")
    __asm__("subsd	xmm1, [rip + 0x0]:128")
    __asm__("movsd_sse	[rsp + 0x20]:128, xmm7")
    __asm__("xorpd	xmm1, [rsp + 0xb0]:128")
    __asm__("mulsd	xmm0, xmm1")
    __asm__("mulsd	xmm1, [rsp + 0xa8]:128")
    rax36 = (int64_t)func_0x5cc();
    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax37 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax38 = v39 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax38 != 0) {
        func_0x6db(rdi8, rsi28, rdx23, rcx29);
    } else {
        return rax38;
    }
}

/*
 *
 */
uint64_t func_0x5cc() 
{
    int64_t rax1;
    uint64_t rax2;
    uint64_t v3;
    int64_t rdi4;
    int64_t rsi5;
    int64_t rdx6;
    int64_t rcx7;

    __asm__("movsd_sse	xmm6, [rsp + 0x30]:128")
    __asm__("movsd_sse	xmm4, [rsp]:128")
    __asm__("movapd	xmm2, xmm0")
    __asm__("movapd	xmm3, xmm1")
    __asm__("movapd	xmm0, xmm4")
    __asm__("movapd	xmm1, xmm6")
    rax1 = (int64_t)func_0x5ec();
    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax2 = v3 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax2 != 0) {
        func_0x6db(rdi4, rsi5, rdx6, rcx7);
    } else {
        return rax2;
    }
}

void func_0x6db(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
}

uint64_t func_0x5ec() 
{
    uint64_t rax1;
    uint64_t v2;
    int64_t rdi3;
    int64_t rsi4;
    int64_t rdx5;
    int64_t rcx6;

    __asm__("movsd_sse	xmm7, [rsp + 0x20]:128")
    __asm__("addsd	xmm0, [rsp + 0x58]:128")
    __asm__("movsd_sse	xmm5, [rsp + 0x10]:128")
    __asm__("addsd	xmm1, xmm7")
    __asm__("movsd_sse	xmm2, [rsp + 0x50]:128")
    rax1 = v2 ^ LC7;
    __asm__("subsd	xmm5, xmm0")
    __asm__("subsd	xmm2, xmm1")
    __asm__("movapd	xmm0, xmm5")
    __asm__("movapd	xmm1, xmm2")
    if (rax1 != 0) 
	{
        func_0x6db(rdi3, rsi4, rdx5, rcx6);
    } 
	else 
	{
        return rax1;
    }
}

/* __cxa_atexit */
void cxa_atexit() 
{
    int64_t rsp1;
    int64_t rsp2;

    rsp1 = rsp2 - 8 - 8 - 0x908 + 8;
    __asm__("movsd_sse	[rsp + 0xa0]:128, xmm0")
    __asm__("movsd_sse	[rsp + 0xa8]:128, xmm1")
    func_0x104(rsp1 + 0xe8, 0, 0);
}

void func_0x1d3() 
{
    int1_t zf1;
    int64_t rax2;

    __asm__("movsd_sse	xmm1, [rsp + 0x98]:128")
    __asm__("andpd	xmm1, xmm0")
    __asm__("andnpd	xmm0, xmm2")
    __asm__("orpd	xmm0, xmm1")
    __asm__("movsd_sse	[rsp + 0x98]:128, xmm0")
    if (zf1) 
	{
        __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
        __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
        __asm__("movsd_sse	xmm4, [rip + 0x0]:128")
        __asm__("movsd_sse	xmm5, [rip + 0x0]:128")
        __asm__("movsd_sse	[rsp + 0x68]:128, xmm0")
        __asm__("movapd	[rsp + 0xb0]:128, xmm2")
    } 
	else 
	{
        __asm__("cvtsi2sd	xmm4, edx")
        __asm__("movsd_sse	xmm0, [rip + 0x0]:128")
        __asm__("movsd_sse	xmm2, [rip + 0x0]:128")
        __asm__("movapd	xmm5, xmm0")
        __asm__("movsd_sse	[rsp + 0x68]:128, xmm0")
        __asm__("movapd	[rsp + 0xb0]:128, xmm2")
        __asm__("addsd	xmm5, xmm4")
        __asm__("subsd	xmm4, xmm0")
        __asm__("xorpd	xmm5, xmm2")
        __asm__("xorpd	xmm4, xmm2")
    }
    __asm__("movsd_sse	xmm3, [rsp + 0xa8]:128")
    __asm__("movsd_sse	xmm2, [rsp + 0xa0]:128")
    __asm__("movapd	xmm1, xmm3")
    __asm__("movsd_sse	[rsp]:128, xmm4")
    __asm__("movapd	xmm0, xmm2")
    __asm__("movsd_sse	[rsp + 0x10]:128, xmm5")
    rax2 = (int64_t)func_0x268();
}















































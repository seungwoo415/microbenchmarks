
control_conditional:	file format mach-o arm64

Disassembly of section __TEXT,__text:

00000001000033e0 <_main>:
1000033e0: d10183ff    	sub	sp, sp, #96
1000033e4: a9057bfd    	stp	x29, x30, [sp, #80]
1000033e8: 910143fd    	add	x29, sp, #80
1000033ec: b81fc3bf    	stur	wzr, [x29, #-4]
1000033f0: b81f83a0    	stur	w0, [x29, #-8]
1000033f4: f81f03a1    	stur	x1, [x29, #-16]
1000033f8: d2800080    	mov	x0, #4
1000033fc: 940001c5    	bl	0x100003b10 <_pin_cpu>
100003400: 94000088    	bl	0x100003620 <_init_kpc>
100003404: d5033f9f    	dsb	sy
100003408: d5033fdf    	isb
10000340c: d53af008    	mrs	x8, S3_2_C15_C0_0
100003410: d5033fdf    	isb
100003414: d5033f9f    	dsb	sy
100003418: f81e03a8    	stur	x8, [x29, #-32]
10000341c: d5033f9f    	dsb	sy
100003420: d5033fdf    	isb
100003424: d281a808    	mov	x8, #3392
100003428: f2a00068    	movk	x8, #3, lsl #16
10000342c: f90013e8    	str	x8, [sp, #32]
100003430: d2800028    	mov	x8, #1
100003434: f9000fe8    	str	x8, [sp, #24]
100003438: f9000bff    	str	xzr, [sp, #16]
10000343c: f90007ff    	str	xzr, [sp, #8]
100003440: d503201f    	nop
100003444: d503201f    	nop
100003448: d503201f    	nop
10000344c: f9000bff    	str	xzr, [sp, #16]
100003450: 14000001    	b	0x100003454 <_main+0x74>
100003454: f9400be8    	ldr	x8, [sp, #16]
100003458: f94013e9    	ldr	x9, [sp, #32]
10000345c: eb090108    	subs	x8, x8, x9
100003460: 1a9f37e8    	cset	w8, hs
100003464: 37000328    	tbnz	w8, #0, 0x1000034c8 <_main+0xe8>
100003468: 14000001    	b	0x10000346c <_main+0x8c>
10000346c: f9400fe8    	ldr	x8, [sp, #24]
100003470: f1000108    	subs	x8, x8, #0
100003474: 1a9f17e8    	cset	w8, eq
100003478: 37000108    	tbnz	w8, #0, 0x100003498 <_main+0xb8>
10000347c: 14000001    	b	0x100003480 <_main+0xa0>
100003480: f9000fff    	str	xzr, [sp, #24]
100003484: f9400be9    	ldr	x9, [sp, #16]
100003488: f94007e8    	ldr	x8, [sp, #8]
10000348c: 8b090108    	add	x8, x8, x9
100003490: f90007e8    	str	x8, [sp, #8]
100003494: 14000008    	b	0x1000034b4 <_main+0xd4>
100003498: d2800028    	mov	x8, #1
10000349c: f9000fe8    	str	x8, [sp, #24]
1000034a0: f9400be9    	ldr	x9, [sp, #16]
1000034a4: f94007e8    	ldr	x8, [sp, #8]
1000034a8: eb090108    	subs	x8, x8, x9
1000034ac: f90007e8    	str	x8, [sp, #8]
1000034b0: 14000001    	b	0x1000034b4 <_main+0xd4>
1000034b4: 14000001    	b	0x1000034b8 <_main+0xd8>
1000034b8: f9400be8    	ldr	x8, [sp, #16]
1000034bc: 91000508    	add	x8, x8, #1
1000034c0: f9000be8    	str	x8, [sp, #16]
1000034c4: 17ffffe4    	b	0x100003454 <_main+0x74>
1000034c8: d503201f    	nop
1000034cc: d503201f    	nop
1000034d0: d503201f    	nop
1000034d4: d5033f9f    	dsb	sy
1000034d8: d5033fdf    	isb
1000034dc: d5033f9f    	dsb	sy
1000034e0: d5033fdf    	isb
1000034e4: d53af008    	mrs	x8, S3_2_C15_C0_0
1000034e8: d5033fdf    	isb
1000034ec: d5033f9f    	dsb	sy
1000034f0: f81e83a8    	stur	x8, [x29, #-24]
1000034f4: f85e83a8    	ldur	x8, [x29, #-24]
1000034f8: f85e03a9    	ldur	x9, [x29, #-32]
1000034fc: eb090108    	subs	x8, x8, x9
100003500: f90017e8    	str	x8, [sp, #40]
100003504: f94017e8    	ldr	x8, [sp, #40]
100003508: 910003e9    	mov	x9, sp
10000350c: f9000128    	str	x8, [x9]
100003510: 90000000    	adrp	x0, 0x100003000 <_main+0x130>
100003514: 9135d000    	add	x0, x0, #3444
100003518: 94000211    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
10000351c: f9400fe8    	ldr	x8, [sp, #24]
100003520: 910003e9    	mov	x9, sp
100003524: f9000128    	str	x8, [x9]
100003528: 90000000    	adrp	x0, 0x100003000 <_main+0x148>
10000352c: 9135e800    	add	x0, x0, #3450
100003530: 9400020b    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003534: 52800000    	mov	w0, #0
100003538: 94000206    	bl	0x100003d50 <_pthread_set_qos_class_self_np+0x100003d50>

000000010000353c <_configure_kpc>:
10000353c: a9bf7bfd    	stp	x29, x30, [sp, #-16]!
100003540: 910003fd    	mov	x29, sp
100003544: b0000021    	adrp	x1, 0x100008000 <_configure_kpc+0x1c>
100003548: 9101a021    	add	x1, x1, #104
10000354c: d2800048    	mov	x8, #2
100003550: f2a00048    	movk	x8, #2, lsl #16
100003554: f9000028    	str	x8, [x1]
100003558: b0000028    	adrp	x8, 0x100008000 <_configure_kpc+0x30>
10000355c: f9400508    	ldr	x8, [x8, #8]
100003560: 52800060    	mov	w0, #3
100003564: d63f0100    	blr	x8
100003568: 71000008    	subs	w8, w0, #0
10000356c: 1a9f17e8    	cset	w8, eq
100003570: 370000c8    	tbnz	w8, #0, 0x100003588 <_configure_kpc+0x4c>
100003574: 14000001    	b	0x100003578 <_configure_kpc+0x3c>
100003578: 90000000    	adrp	x0, 0x100003000 <_configure_kpc+0x3c>
10000357c: 91361000    	add	x0, x0, #3460
100003580: 940001f7    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003584: 14000025    	b	0x100003618 <_configure_kpc+0xdc>
100003588: b0000028    	adrp	x8, 0x100008000 <_configure_kpc+0x60>
10000358c: f9400908    	ldr	x8, [x8, #16]
100003590: 52800020    	mov	w0, #1
100003594: d63f0100    	blr	x8
100003598: 71000008    	subs	w8, w0, #0
10000359c: 1a9f17e8    	cset	w8, eq
1000035a0: 370000c8    	tbnz	w8, #0, 0x1000035b8 <_configure_kpc+0x7c>
1000035a4: 14000001    	b	0x1000035a8 <_configure_kpc+0x6c>
1000035a8: 90000000    	adrp	x0, 0x100003000 <_configure_kpc+0x6c>
1000035ac: 91366c00    	add	x0, x0, #3483
1000035b0: 940001eb    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
1000035b4: 14000019    	b	0x100003618 <_configure_kpc+0xdc>
1000035b8: b0000028    	adrp	x8, 0x100008000 <_configure_kpc+0x90>
1000035bc: f9400d08    	ldr	x8, [x8, #24]
1000035c0: 52800060    	mov	w0, #3
1000035c4: d63f0100    	blr	x8
1000035c8: 71000008    	subs	w8, w0, #0
1000035cc: 1a9f17e8    	cset	w8, eq
1000035d0: 370000c8    	tbnz	w8, #0, 0x1000035e8 <_configure_kpc+0xac>
1000035d4: 14000001    	b	0x1000035d8 <_configure_kpc+0x9c>
1000035d8: 90000000    	adrp	x0, 0x100003000 <_configure_kpc+0x9c>
1000035dc: 9136e800    	add	x0, x0, #3514
1000035e0: 940001df    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
1000035e4: 1400000d    	b	0x100003618 <_configure_kpc+0xdc>
1000035e8: b0000028    	adrp	x8, 0x100008000 <_configure_kpc+0xc0>
1000035ec: f9401108    	ldr	x8, [x8, #32]
1000035f0: 52800060    	mov	w0, #3
1000035f4: d63f0100    	blr	x8
1000035f8: 71000008    	subs	w8, w0, #0
1000035fc: 1a9f17e8    	cset	w8, eq
100003600: 370000c8    	tbnz	w8, #0, 0x100003618 <_configure_kpc+0xdc>
100003604: 14000001    	b	0x100003608 <_configure_kpc+0xcc>
100003608: 90000000    	adrp	x0, 0x100003000 <_configure_kpc+0xcc>
10000360c: 91374c00    	add	x0, x0, #3539
100003610: 940001d3    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003614: 14000001    	b	0x100003618 <_configure_kpc+0xdc>
100003618: a8c17bfd    	ldp	x29, x30, [sp], #16
10000361c: d65f03c0    	ret

0000000100003620 <_init_kpc>:
100003620: d100c3ff    	sub	sp, sp, #48
100003624: a9027bfd    	stp	x29, x30, [sp, #32]
100003628: 910083fd    	add	x29, sp, #32
10000362c: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0xc>
100003630: 9137cc00    	add	x0, x0, #3571
100003634: 52800021    	mov	w1, #1
100003638: 940001c0    	bl	0x100003d38 <_pthread_set_qos_class_self_np+0x100003d38>
10000363c: f81f83a0    	stur	x0, [x29, #-8]
100003640: f85f83a8    	ldur	x8, [x29, #-8]
100003644: f1000108    	subs	x8, x8, #0
100003648: 1a9f07e8    	cset	w8, ne
10000364c: 37000128    	tbnz	w8, #0, 0x100003670 <_init_kpc+0x50>
100003650: 14000001    	b	0x100003654 <_init_kpc+0x34>
100003654: f85f83a8    	ldur	x8, [x29, #-8]
100003658: 910003e9    	mov	x9, sp
10000365c: f9000128    	str	x8, [x9]
100003660: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x40>
100003664: 9138d800    	add	x0, x0, #3638
100003668: 940001bd    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
10000366c: 14000109    	b	0x100003a90 <_init_kpc+0x470>
100003670: f85f83a0    	ldur	x0, [x29, #-8]
100003674: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x54>
100003678: 91390821    	add	x1, x1, #3650
10000367c: 940001b2    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
100003680: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x74>
100003684: f9001500    	str	x0, [x8, #40]
100003688: f9401508    	ldr	x8, [x8, #40]
10000368c: f1000108    	subs	x8, x8, #0
100003690: 1a9f07e8    	cset	w8, ne
100003694: 370001a8    	tbnz	w8, #0, 0x1000036c8 <_init_kpc+0xa8>
100003698: 14000001    	b	0x10000369c <_init_kpc+0x7c>
10000369c: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x90>
1000036a0: f9401508    	ldr	x8, [x8, #40]
1000036a4: 910003e9    	mov	x9, sp
1000036a8: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x88>
1000036ac: 9139094a    	add	x10, x10, #3650
1000036b0: f900012a    	str	x10, [x9]
1000036b4: f9000528    	str	x8, [x9, #8]
1000036b8: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x98>
1000036bc: 91394c00    	add	x0, x0, #3667
1000036c0: 940001a7    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
1000036c4: 140000f3    	b	0x100003a90 <_init_kpc+0x470>
1000036c8: f85f83a0    	ldur	x0, [x29, #-8]
1000036cc: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0xac>
1000036d0: 91397021    	add	x1, x1, #3676
1000036d4: 9400019c    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
1000036d8: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0xcc>
1000036dc: f9000900    	str	x0, [x8, #16]
1000036e0: f9400908    	ldr	x8, [x8, #16]
1000036e4: f1000108    	subs	x8, x8, #0
1000036e8: 1a9f07e8    	cset	w8, ne
1000036ec: 370001a8    	tbnz	w8, #0, 0x100003720 <_init_kpc+0x100>
1000036f0: 14000001    	b	0x1000036f4 <_init_kpc+0xd4>
1000036f4: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0xe8>
1000036f8: f9400908    	ldr	x8, [x8, #16]
1000036fc: 910003e9    	mov	x9, sp
100003700: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0xe0>
100003704: 9139714a    	add	x10, x10, #3676
100003708: f900012a    	str	x10, [x9]
10000370c: f9000528    	str	x8, [x9, #8]
100003710: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0xf0>
100003714: 91394c00    	add	x0, x0, #3667
100003718: 94000191    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
10000371c: 140000dd    	b	0x100003a90 <_init_kpc+0x470>
100003720: f85f83a0    	ldur	x0, [x29, #-8]
100003724: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x104>
100003728: 9139cc21    	add	x1, x1, #3699
10000372c: 94000186    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
100003730: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x124>
100003734: f9000d00    	str	x0, [x8, #24]
100003738: f9400d08    	ldr	x8, [x8, #24]
10000373c: f1000108    	subs	x8, x8, #0
100003740: 1a9f07e8    	cset	w8, ne
100003744: 370001a8    	tbnz	w8, #0, 0x100003778 <_init_kpc+0x158>
100003748: 14000001    	b	0x10000374c <_init_kpc+0x12c>
10000374c: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x140>
100003750: f9400d08    	ldr	x8, [x8, #24]
100003754: 910003e9    	mov	x9, sp
100003758: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x138>
10000375c: 9139cd4a    	add	x10, x10, #3699
100003760: f900012a    	str	x10, [x9]
100003764: f9000528    	str	x8, [x9, #8]
100003768: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x148>
10000376c: 91394c00    	add	x0, x0, #3667
100003770: 9400017b    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003774: 140000c7    	b	0x100003a90 <_init_kpc+0x470>
100003778: f85f83a0    	ldur	x0, [x29, #-8]
10000377c: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x15c>
100003780: 913a1021    	add	x1, x1, #3716
100003784: 94000170    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
100003788: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x17c>
10000378c: f9001100    	str	x0, [x8, #32]
100003790: f9401108    	ldr	x8, [x8, #32]
100003794: f1000108    	subs	x8, x8, #0
100003798: 1a9f07e8    	cset	w8, ne
10000379c: 370001a8    	tbnz	w8, #0, 0x1000037d0 <_init_kpc+0x1b0>
1000037a0: 14000001    	b	0x1000037a4 <_init_kpc+0x184>
1000037a4: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x198>
1000037a8: f9401108    	ldr	x8, [x8, #32]
1000037ac: 910003e9    	mov	x9, sp
1000037b0: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x190>
1000037b4: 913a114a    	add	x10, x10, #3716
1000037b8: f900012a    	str	x10, [x9]
1000037bc: f9000528    	str	x8, [x9, #8]
1000037c0: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x1a0>
1000037c4: 91394c00    	add	x0, x0, #3667
1000037c8: 94000165    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
1000037cc: 140000b1    	b	0x100003a90 <_init_kpc+0x470>
1000037d0: f85f83a0    	ldur	x0, [x29, #-8]
1000037d4: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x1b4>
1000037d8: 913a7021    	add	x1, x1, #3740
1000037dc: 9400015a    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
1000037e0: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x1d4>
1000037e4: f9000500    	str	x0, [x8, #8]
1000037e8: f9400508    	ldr	x8, [x8, #8]
1000037ec: f1000108    	subs	x8, x8, #0
1000037f0: 1a9f07e8    	cset	w8, ne
1000037f4: 370001a8    	tbnz	w8, #0, 0x100003828 <_init_kpc+0x208>
1000037f8: 14000001    	b	0x1000037fc <_init_kpc+0x1dc>
1000037fc: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x1f0>
100003800: f9400508    	ldr	x8, [x8, #8]
100003804: 910003e9    	mov	x9, sp
100003808: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x1e8>
10000380c: 913a714a    	add	x10, x10, #3740
100003810: f900012a    	str	x10, [x9]
100003814: f9000528    	str	x8, [x9, #8]
100003818: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x1f8>
10000381c: 91394c00    	add	x0, x0, #3667
100003820: 9400014f    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003824: 1400009b    	b	0x100003a90 <_init_kpc+0x470>
100003828: f85f83a0    	ldur	x0, [x29, #-8]
10000382c: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x20c>
100003830: 913aac21    	add	x1, x1, #3755
100003834: 94000144    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
100003838: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x22c>
10000383c: f9001900    	str	x0, [x8, #48]
100003840: f9401908    	ldr	x8, [x8, #48]
100003844: f1000108    	subs	x8, x8, #0
100003848: 1a9f07e8    	cset	w8, ne
10000384c: 370001a8    	tbnz	w8, #0, 0x100003880 <_init_kpc+0x260>
100003850: 14000001    	b	0x100003854 <_init_kpc+0x234>
100003854: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x248>
100003858: f9401908    	ldr	x8, [x8, #48]
10000385c: 910003e9    	mov	x9, sp
100003860: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x240>
100003864: 913aad4a    	add	x10, x10, #3755
100003868: f900012a    	str	x10, [x9]
10000386c: f9000528    	str	x8, [x9, #8]
100003870: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x250>
100003874: 91394c00    	add	x0, x0, #3667
100003878: 94000139    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
10000387c: 14000085    	b	0x100003a90 <_init_kpc+0x470>
100003880: f85f83a0    	ldur	x0, [x29, #-8]
100003884: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x264>
100003888: 913ae821    	add	x1, x1, #3770
10000388c: 9400012e    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
100003890: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x284>
100003894: f9001d00    	str	x0, [x8, #56]
100003898: f9401d08    	ldr	x8, [x8, #56]
10000389c: f1000108    	subs	x8, x8, #0
1000038a0: 1a9f07e8    	cset	w8, ne
1000038a4: 370001a8    	tbnz	w8, #0, 0x1000038d8 <_init_kpc+0x2b8>
1000038a8: 14000001    	b	0x1000038ac <_init_kpc+0x28c>
1000038ac: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x2a0>
1000038b0: f9401d08    	ldr	x8, [x8, #56]
1000038b4: 910003e9    	mov	x9, sp
1000038b8: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x298>
1000038bc: 913ae94a    	add	x10, x10, #3770
1000038c0: f900012a    	str	x10, [x9]
1000038c4: f9000528    	str	x8, [x9, #8]
1000038c8: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x2a8>
1000038cc: 91394c00    	add	x0, x0, #3667
1000038d0: 94000123    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
1000038d4: 1400006f    	b	0x100003a90 <_init_kpc+0x470>
1000038d8: f85f83a0    	ldur	x0, [x29, #-8]
1000038dc: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x2bc>
1000038e0: 913b2421    	add	x1, x1, #3785
1000038e4: 94000118    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
1000038e8: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x2dc>
1000038ec: f9002100    	str	x0, [x8, #64]
1000038f0: f9402108    	ldr	x8, [x8, #64]
1000038f4: f1000108    	subs	x8, x8, #0
1000038f8: 1a9f07e8    	cset	w8, ne
1000038fc: 370001a8    	tbnz	w8, #0, 0x100003930 <_init_kpc+0x310>
100003900: 14000001    	b	0x100003904 <_init_kpc+0x2e4>
100003904: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x2f8>
100003908: f9402108    	ldr	x8, [x8, #64]
10000390c: 910003e9    	mov	x9, sp
100003910: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x2f0>
100003914: 913b254a    	add	x10, x10, #3785
100003918: f900012a    	str	x10, [x9]
10000391c: f9000528    	str	x8, [x9, #8]
100003920: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x300>
100003924: 91394c00    	add	x0, x0, #3667
100003928: 9400010d    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
10000392c: 14000059    	b	0x100003a90 <_init_kpc+0x470>
100003930: f85f83a0    	ldur	x0, [x29, #-8]
100003934: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x314>
100003938: 913b6021    	add	x1, x1, #3800
10000393c: 94000102    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
100003940: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x334>
100003944: f9002500    	str	x0, [x8, #72]
100003948: f9402508    	ldr	x8, [x8, #72]
10000394c: f1000108    	subs	x8, x8, #0
100003950: 1a9f07e8    	cset	w8, ne
100003954: 370001a8    	tbnz	w8, #0, 0x100003988 <_init_kpc+0x368>
100003958: 14000001    	b	0x10000395c <_init_kpc+0x33c>
10000395c: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x350>
100003960: f9402508    	ldr	x8, [x8, #72]
100003964: 910003e9    	mov	x9, sp
100003968: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x348>
10000396c: 913b614a    	add	x10, x10, #3800
100003970: f900012a    	str	x10, [x9]
100003974: f9000528    	str	x8, [x9, #8]
100003978: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x358>
10000397c: 91394c00    	add	x0, x0, #3667
100003980: 940000f7    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003984: 14000043    	b	0x100003a90 <_init_kpc+0x470>
100003988: f85f83a0    	ldur	x0, [x29, #-8]
10000398c: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x36c>
100003990: 913bb821    	add	x1, x1, #3822
100003994: 940000ec    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
100003998: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x38c>
10000399c: f9002900    	str	x0, [x8, #80]
1000039a0: f9402908    	ldr	x8, [x8, #80]
1000039a4: f1000108    	subs	x8, x8, #0
1000039a8: 1a9f07e8    	cset	w8, ne
1000039ac: 370001a8    	tbnz	w8, #0, 0x1000039e0 <_init_kpc+0x3c0>
1000039b0: 14000001    	b	0x1000039b4 <_init_kpc+0x394>
1000039b4: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x3a8>
1000039b8: f9402908    	ldr	x8, [x8, #80]
1000039bc: 910003e9    	mov	x9, sp
1000039c0: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x3a0>
1000039c4: 913bb94a    	add	x10, x10, #3822
1000039c8: f900012a    	str	x10, [x9]
1000039cc: f9000528    	str	x8, [x9, #8]
1000039d0: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x3b0>
1000039d4: 91394c00    	add	x0, x0, #3667
1000039d8: 940000e1    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
1000039dc: 1400002d    	b	0x100003a90 <_init_kpc+0x470>
1000039e0: f85f83a0    	ldur	x0, [x29, #-8]
1000039e4: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x3c4>
1000039e8: 913c0c21    	add	x1, x1, #3843
1000039ec: 940000d6    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
1000039f0: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x3e4>
1000039f4: f9002d00    	str	x0, [x8, #88]
1000039f8: f9402d08    	ldr	x8, [x8, #88]
1000039fc: f1000108    	subs	x8, x8, #0
100003a00: 1a9f07e8    	cset	w8, ne
100003a04: 370001a8    	tbnz	w8, #0, 0x100003a38 <_init_kpc+0x418>
100003a08: 14000001    	b	0x100003a0c <_init_kpc+0x3ec>
100003a0c: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x400>
100003a10: f9402d08    	ldr	x8, [x8, #88]
100003a14: 910003e9    	mov	x9, sp
100003a18: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x3f8>
100003a1c: 913c0d4a    	add	x10, x10, #3843
100003a20: f900012a    	str	x10, [x9]
100003a24: f9000528    	str	x8, [x9, #8]
100003a28: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x408>
100003a2c: 91394c00    	add	x0, x0, #3667
100003a30: 940000cb    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003a34: 14000017    	b	0x100003a90 <_init_kpc+0x470>
100003a38: f85f83a0    	ldur	x0, [x29, #-8]
100003a3c: 90000001    	adrp	x1, 0x100003000 <_init_kpc+0x41c>
100003a40: 913c5021    	add	x1, x1, #3860
100003a44: 940000c0    	bl	0x100003d44 <_pthread_set_qos_class_self_np+0x100003d44>
100003a48: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x43c>
100003a4c: f9003100    	str	x0, [x8, #96]
100003a50: f9403108    	ldr	x8, [x8, #96]
100003a54: f1000108    	subs	x8, x8, #0
100003a58: 1a9f07e8    	cset	w8, ne
100003a5c: 370001a8    	tbnz	w8, #0, 0x100003a90 <_init_kpc+0x470>
100003a60: 14000001    	b	0x100003a64 <_init_kpc+0x444>
100003a64: b0000028    	adrp	x8, 0x100008000 <_init_kpc+0x458>
100003a68: f9403108    	ldr	x8, [x8, #96]
100003a6c: 910003e9    	mov	x9, sp
100003a70: 9000000a    	adrp	x10, 0x100003000 <_init_kpc+0x450>
100003a74: 913c514a    	add	x10, x10, #3860
100003a78: f900012a    	str	x10, [x9]
100003a7c: f9000528    	str	x8, [x9, #8]
100003a80: 90000000    	adrp	x0, 0x100003000 <_init_kpc+0x460>
100003a84: 91394c00    	add	x0, x0, #3667
100003a88: 940000b5    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003a8c: 14000001    	b	0x100003a90 <_init_kpc+0x470>
100003a90: a9427bfd    	ldp	x29, x30, [sp, #32]
100003a94: 9100c3ff    	add	sp, sp, #48
100003a98: d65f03c0    	ret

0000000100003a9c <_get_kpc_time>:
100003a9c: d10083ff    	sub	sp, sp, #32
100003aa0: a9017bfd    	stp	x29, x30, [sp, #16]
100003aa4: 910043fd    	add	x29, sp, #16
100003aa8: b0000022    	adrp	x2, 0x100008000 <_get_kpc_time+0x20>
100003aac: 9102e042    	add	x2, x2, #184
100003ab0: f90003e2    	str	x2, [sp]
100003ab4: b0000028    	adrp	x8, 0x100008000 <_get_kpc_time+0x2c>
100003ab8: f9403108    	ldr	x8, [x8, #96]
100003abc: 52800000    	mov	w0, #0
100003ac0: 52800141    	mov	w1, #10
100003ac4: d63f0100    	blr	x8
100003ac8: 71000008    	subs	w8, w0, #0
100003acc: 1a9f17e8    	cset	w8, eq
100003ad0: 37000108    	tbnz	w8, #0, 0x100003af0 <_get_kpc_time+0x54>
100003ad4: 14000001    	b	0x100003ad8 <_get_kpc_time+0x3c>
100003ad8: 90000000    	adrp	x0, 0x100003000 <_get_kpc_time+0x3c>
100003adc: 913cb000    	add	x0, x0, #3884
100003ae0: 9400009f    	bl	0x100003d5c <_pthread_set_qos_class_self_np+0x100003d5c>
100003ae4: d2800028    	mov	x8, #1
100003ae8: f90007e8    	str	x8, [sp, #8]
100003aec: 14000005    	b	0x100003b00 <_get_kpc_time+0x64>
100003af0: f94003e8    	ldr	x8, [sp]
100003af4: f9400908    	ldr	x8, [x8, #16]
100003af8: f90007e8    	str	x8, [sp, #8]
100003afc: 14000001    	b	0x100003b00 <_get_kpc_time+0x64>
100003b00: f94007e0    	ldr	x0, [sp, #8]
100003b04: a9417bfd    	ldp	x29, x30, [sp, #16]
100003b08: 910083ff    	add	sp, sp, #32
100003b0c: d65f03c0    	ret

0000000100003b10 <_pin_cpu>:
100003b10: d10083ff    	sub	sp, sp, #32
100003b14: a9017bfd    	stp	x29, x30, [sp, #16]
100003b18: 910043fd    	add	x29, sp, #16
100003b1c: f90007e0    	str	x0, [sp, #8]
100003b20: f94007e8    	ldr	x8, [sp, #8]
100003b24: f1000d08    	subs	x8, x8, #3
100003b28: 1a9f97e8    	cset	w8, hi
100003b2c: 370000c8    	tbnz	w8, #0, 0x100003b44 <_pin_cpu+0x34>
100003b30: 14000001    	b	0x100003b34 <_pin_cpu+0x24>
100003b34: 52800120    	mov	w0, #9
100003b38: 52800001    	mov	w1, #0
100003b3c: 9400008b    	bl	0x100003d68 <_pthread_set_qos_class_self_np+0x100003d68>
100003b40: 14000013    	b	0x100003b8c <_pin_cpu+0x7c>
100003b44: f94007e8    	ldr	x8, [sp, #8]
100003b48: f1001d08    	subs	x8, x8, #7
100003b4c: 1a9f97e8    	cset	w8, hi
100003b50: 370000c8    	tbnz	w8, #0, 0x100003b68 <_pin_cpu+0x58>
100003b54: 14000001    	b	0x100003b58 <_pin_cpu+0x48>
100003b58: 52800420    	mov	w0, #33
100003b5c: 52800001    	mov	w1, #0
100003b60: 94000082    	bl	0x100003d68 <_pthread_set_qos_class_self_np+0x100003d68>
100003b64: 14000009    	b	0x100003b88 <_pin_cpu+0x78>
100003b68: 90000000    	adrp	x0, 0x100003000 <_pin_cpu+0x58>
100003b6c: 913d3000    	add	x0, x0, #3916
100003b70: 90000001    	adrp	x1, 0x100003000 <_pin_cpu+0x60>
100003b74: 913d5021    	add	x1, x1, #3924
100003b78: 528017e2    	mov	w2, #191
100003b7c: 90000003    	adrp	x3, 0x100003000 <_pin_cpu+0x6c>
100003b80: 913d8063    	add	x3, x3, #3936
100003b84: 94000067    	bl	0x100003d20 <_pthread_set_qos_class_self_np+0x100003d20>
100003b88: 14000001    	b	0x100003b8c <_pin_cpu+0x7c>
100003b8c: a9417bfd    	ldp	x29, x30, [sp, #16]
100003b90: 910083ff    	add	sp, sp, #32
100003b94: d65f03c0    	ret

0000000100003b98 <_get_time_mach>:
100003b98: d10083ff    	sub	sp, sp, #32
100003b9c: a9017bfd    	stp	x29, x30, [sp, #16]
100003ba0: 910043fd    	add	x29, sp, #16
100003ba4: f90007e0    	str	x0, [sp, #8]
100003ba8: f94007e8    	ldr	x8, [sp, #8]
100003bac: f90003e8    	str	x8, [sp]
100003bb0: b0000028    	adrp	x8, 0x100008000 <_get_time_mach+0x2c>
100003bb4: f9400108    	ldr	x8, [x8]
100003bb8: f94007e9    	ldr	x9, [sp, #8]
100003bbc: 8b090108    	add	x8, x8, x9
100003bc0: 52800100    	mov	w0, #8
100003bc4: d63f0100    	blr	x8
100003bc8: f94003e8    	ldr	x8, [sp]
100003bcc: 8b000108    	add	x8, x8, x0
100003bd0: f90003e8    	str	x8, [sp]
100003bd4: f94003e0    	ldr	x0, [sp]
100003bd8: a9417bfd    	ldp	x29, x30, [sp, #16]
100003bdc: 910083ff    	add	sp, sp, #32
100003be0: d65f03c0    	ret

0000000100003be4 <_busy_wait>:
100003be4: d10083ff    	sub	sp, sp, #32
100003be8: f9000fe0    	str	x0, [sp, #24]
100003bec: f9000be1    	str	x1, [sp, #16]
100003bf0: f90007ff    	str	xzr, [sp, #8]
100003bf4: 14000001    	b	0x100003bf8 <_busy_wait+0x14>
100003bf8: f94007e8    	ldr	x8, [sp, #8]
100003bfc: f9400fe9    	ldr	x9, [sp, #24]
100003c00: eb090108    	subs	x8, x8, x9
100003c04: 1a9f37e8    	cset	w8, hs
100003c08: 370001c8    	tbnz	w8, #0, 0x100003c40 <_busy_wait+0x5c>
100003c0c: 14000001    	b	0x100003c10 <_busy_wait+0x2c>
100003c10: f9400be8    	ldr	x8, [sp, #16]
100003c14: 91000508    	add	x8, x8, #1
100003c18: 92403d08    	and	x8, x8, #0xffff
100003c1c: f9000be8    	str	x8, [sp, #16]
100003c20: f9400be8    	ldr	x8, [sp, #16]
100003c24: 9b087d08    	mul	x8, x8, x8
100003c28: f9000be8    	str	x8, [sp, #16]
100003c2c: 14000001    	b	0x100003c30 <_busy_wait+0x4c>
100003c30: f94007e8    	ldr	x8, [sp, #8]
100003c34: 91000508    	add	x8, x8, #1
100003c38: f90007e8    	str	x8, [sp, #8]
100003c3c: 17ffffef    	b	0x100003bf8 <_busy_wait+0x14>
100003c40: f9400be0    	ldr	x0, [sp, #16]
100003c44: 910083ff    	add	sp, sp, #32
100003c48: d65f03c0    	ret

0000000100003c4c <_return_size>:
100003c4c: d100c3ff    	sub	sp, sp, #48
100003c50: a9027bfd    	stp	x29, x30, [sp, #32]
100003c54: 910083fd    	add	x29, sp, #32
100003c58: f81f83a0    	stur	x0, [x29, #-8]
100003c5c: f9000be1    	str	x1, [sp, #16]
100003c60: f9400be8    	ldr	x8, [sp, #16]
100003c64: f1100108    	subs	x8, x8, #1024
100003c68: 1a9f97e8    	cset	w8, hi
100003c6c: 37000188    	tbnz	w8, #0, 0x100003c9c <_return_size+0x50>
100003c70: 14000001    	b	0x100003c74 <_return_size+0x28>
100003c74: f85f83a0    	ldur	x0, [x29, #-8]
100003c78: f9400be8    	ldr	x8, [sp, #16]
100003c7c: 910003e9    	mov	x9, sp
100003c80: f9000128    	str	x8, [x9]
100003c84: 52800001    	mov	w1, #0
100003c88: 92800002    	mov	x2, #-1
100003c8c: 90000003    	adrp	x3, 0x100003000 <_return_size+0x40>
100003c90: 913e2863    	add	x3, x3, #3978
100003c94: 94000026    	bl	0x100003d2c <_pthread_set_qos_class_self_np+0x100003d2c>
100003c98: 1400001f    	b	0x100003d14 <_return_size+0xc8>
100003c9c: f9400be8    	ldr	x8, [sp, #16]
100003ca0: f1440108    	subs	x8, x8, #256, lsl #12   ; =1048576
100003ca4: 1a9f97e8    	cset	w8, hi
100003ca8: 370001c8    	tbnz	w8, #0, 0x100003ce0 <_return_size+0x94>
100003cac: 14000001    	b	0x100003cb0 <_return_size+0x64>
100003cb0: f85f83a0    	ldur	x0, [x29, #-8]
100003cb4: f9400be8    	ldr	x8, [sp, #16]
100003cb8: d2808009    	mov	x9, #1024
100003cbc: 9ac90908    	udiv	x8, x8, x9
100003cc0: 910003e9    	mov	x9, sp
100003cc4: f9000128    	str	x8, [x9]
100003cc8: 52800001    	mov	w1, #0
100003ccc: 92800002    	mov	x2, #-1
100003cd0: 90000003    	adrp	x3, 0x100003000 <_return_size+0x84>
100003cd4: 913e4063    	add	x3, x3, #3984
100003cd8: 94000015    	bl	0x100003d2c <_pthread_set_qos_class_self_np+0x100003d2c>
100003cdc: 1400000d    	b	0x100003d10 <_return_size+0xc4>
100003ce0: f85f83a0    	ldur	x0, [x29, #-8]
100003ce4: f9400be8    	ldr	x8, [sp, #16]
100003ce8: d2a00209    	mov	x9, #1048576
100003cec: 9ac90908    	udiv	x8, x8, x9
100003cf0: 910003e9    	mov	x9, sp
100003cf4: f9000128    	str	x8, [x9]
100003cf8: 52800001    	mov	w1, #0
100003cfc: 92800002    	mov	x2, #-1
100003d00: 90000003    	adrp	x3, 0x100003000 <_return_size+0xb4>
100003d04: 913e5c63    	add	x3, x3, #3991
100003d08: 94000009    	bl	0x100003d2c <_pthread_set_qos_class_self_np+0x100003d2c>
100003d0c: 14000001    	b	0x100003d10 <_return_size+0xc4>
100003d10: 14000001    	b	0x100003d14 <_return_size+0xc8>
100003d14: a9427bfd    	ldp	x29, x30, [sp, #32]
100003d18: 9100c3ff    	add	sp, sp, #48
100003d1c: d65f03c0    	ret

Disassembly of section __TEXT,__stubs:

0000000100003d20 <__stubs>:
100003d20: b0000010    	adrp	x16, 0x100004000 <__stubs+0x4>
100003d24: f9400210    	ldr	x16, [x16]
100003d28: d61f0200    	br	x16
100003d2c: b0000010    	adrp	x16, 0x100004000 <__stubs+0x10>
100003d30: f9400610    	ldr	x16, [x16, #8]
100003d34: d61f0200    	br	x16
100003d38: b0000010    	adrp	x16, 0x100004000 <__stubs+0x1c>
100003d3c: f9400a10    	ldr	x16, [x16, #16]
100003d40: d61f0200    	br	x16
100003d44: b0000010    	adrp	x16, 0x100004000 <__stubs+0x28>
100003d48: f9400e10    	ldr	x16, [x16, #24]
100003d4c: d61f0200    	br	x16
100003d50: b0000010    	adrp	x16, 0x100004000 <__stubs+0x34>
100003d54: f9401210    	ldr	x16, [x16, #32]
100003d58: d61f0200    	br	x16
100003d5c: b0000010    	adrp	x16, 0x100004000 <__stubs+0x40>
100003d60: f9401610    	ldr	x16, [x16, #40]
100003d64: d61f0200    	br	x16
100003d68: b0000010    	adrp	x16, 0x100004000 <__stubs+0x4c>
100003d6c: f9401a10    	ldr	x16, [x16, #48]
100003d70: d61f0200    	br	x16

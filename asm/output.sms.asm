; Source code created by SMS Examine V1.2a
; Size: 32768 bytes

.MEMORYMAP
SLOTSIZE $4000
SLOT 0 $0000
SLOT 1 $4000
SLOT 2 $8000
DEFAULTSLOT 2
.ENDME

.ROMBANKMAP
BANKSTOTAL 2
BANKSIZE $4000
BANKS 2
.ENDRO

; SDSC Tag:
; Name:        Steve Force
; Author:      StevePro Studios
; Date:        15.12.2018
; Version:     1.00
; Description: Convert example as scalable SMS projec

.BANK 0 SLOT 0
.ORG $0000

_START:
	di
	im   1
	jp   _LABEL_70_2


; Data from 6 to 7 (2 bytes)
; (only NULL-bytes)
.db $00, $00

_LABEL_8_8:
	ld   c, $BF
	di
	out  (c), l
	out  (c), h
	ei
	ret


; Data from 11 to 37 (39 bytes)
.db $00, $00, $00, $00, $00, $00, $00, "}", $D3, $BE, "|", $D6, $00, $00, $D3, $BE, $C9
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00

_IRQ_HANDLER:
	jp   _LABEL_A60_10


; Data from 3B to 65 (43 bytes)
; (only NULL-bytes)
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00

_NMI_HANDLER:
	jp   _LABEL_A96_32


; Data from 69 to 6F (7 bytes)
; (only NULL-bytes)
.db $00, $00, $00, $00, $00, $00, $00

_LABEL_70_2:
	ld   sp, $DFF0
	ld   de, $FFFC
	xor  a
	ld   (de), a
	ld   b, $03
_LABEL_7A_3:
	inc  de
	ld   (de), a
	inc  a
	djnz _LABEL_7A_3
	xor  a
	ld   hl, $C000
	ld   (hl), a
	ld   de, $C001
	ld   bc, $1FF0
	ldir
	call _LABEL_AAE_4
	call _LABEL_866_6
	ei
	call _LABEL_26B_25

; Data from 96 to 20E (377 bytes)
.db $C3, $04, $02, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED, $A3, $ED
.db $A3, $ED, $A3, $C9, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
.db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $3E, $02, $CF, $C9, $3E, $00
.db $CF, $76, $18, $FD, $21, $04, $C0, $34, $C9

_LABEL_20F_26:
	call _LABEL_866_6
	call _LABEL_9D5_27
	ld   hl, $020A
	push hl
	call _LABEL_A38_28
	ld   h, $C0
	ex   (sp), hl
	inc  sp
	call _LABEL_A49_29
	inc  sp
	ld   hl, $0010
	call _LABEL_8CD_30
	ld   hl, $0020
	jp   _LABEL_8CD_30


; Data from 230 to 26A (59 bytes)
.db $21, $00, $78, $CF, $01, $00, $00, $21, $00, $00, $DF, $03, $79, $D6, $80, $78
.db $DE, $03, $38, $F3, $C9, $CD, $F2, $07, $CD, $2B, $08, $CD, $3D, $08, $CD, $30
.db $02, $2E, $02, $C3, $11, $09, $CD, $C1, $02, $CD, $25, $05, $CD, $32, $0A, $21
.db $00, $00, $22, $02, $C0, $C3, $45, $02, $C3, $56, $02

_LABEL_26B_25:
	call _LABEL_20F_26

; Data from 26E to 7F1 (1412 bytes)
.incbin "output.sms.dat.0"

_LABEL_7F2_15:
	ld   hl, $C0EC
	ld   (hl), $00
	ret


; Data from 7F8 to 82A (51 bytes)
.db $3A, $EC, $C0, $FE, $40, $30, $26, $4F, $06, $00, $21, $02, $00, $39, $5E, $23
.db $7E, $FE, $D1, $28, $1B, $23, $56, $21, $2C, $C0, $09, $3D, $77, $21, $6C, $C0
.db $79, $CB, $21, $09, $73, $23, $72, $6F, $3C, $32, $EC, $C0, $C9, $2E, $FF, $C9
.db $2E, $FE, $C9

_LABEL_82B_16:
	ld   a, ($C0EC)
	sub  $40
	ret  nc

	ld   bc, $C02C
	ld   hl, ($C0EC)
	ld   h, $00
	add  hl, bc
	ld   (hl), $D0
	ret

_LABEL_83D_17:
	ld   hl, $7F00
	rst  $8
	ld   bc, $C02C
	ld   e, $40
_LABEL_846_18:
	ld   a, (bc)
	out  ($BE), a
	inc  bc
	ld   d, e
	dec  d
	ld   a, d
	ld   e, a
	or   a
	jr   nz, _LABEL_846_18
	ld   hl, $7F80
	rst  $8
	ld   bc, $C06C
	ld   e, $80
_LABEL_85A_19:
	ld   a, (bc)
	out  ($BE), a
	inc  bc
	ld   d, e
	dec  d
	ld   a, d
	ld   e, a
	or   a
	jr   nz, _LABEL_85A_19
	ret

_LABEL_866_6:
	ld   hl, $0000
	push hl
	call _LABEL_988_7
	pop  af
	ld   c, $00
_LABEL_870_14:
	ld   hl, $08BA
	ld   b, $00
	add  hl, bc
	ld   b, (hl)
	di
	ld   a, b
	out  ($BF), a
	ld   a, c
	set  7, a
	out  ($BF), a
	ei
	inc  c
	ld   a, c
	sub  $0B
	jr   c, _LABEL_870_14
	call _LABEL_7F2_15
	call _LABEL_82B_16
	call _LABEL_83D_17
	call _LABEL_A32_20
_LABEL_893_21:
	in   a, ($7E)
	ld   b, a
	ld   a, $80
	sub  b
	jr   c, _LABEL_893_21
_LABEL_89B_22:
	in   a, ($7E)
	sub  $80
	jr   c, _LABEL_89B_22
_LABEL_8A1_23:
	in   a, ($7E)
	ld   c, a
	in   a, ($7E)
	sub  c
	jr   nc, _LABEL_8A1_23
	ld   a, c
	sub  $E7
	jr   c, _LABEL_8B4_24
	ld   hl, $C0F0
	ld   (hl), $80
	ret

_LABEL_8B4_24:
	ld   hl, $C0F0
	ld   (hl), $40
	ret


; Data from 8BA to 8CC (19 bytes)
.db $04, $20, $FF, $FF, $FF, $FF, $FF, $00, $00, $00, $FF, $FD, $21, $F0, $C0, $FD
.db $6E, $00, $C9

_LABEL_8CD_30:
	ld   c, l
	ld   e, h
	ld   d, $00
	ld   hl, $C0F7
	add  hl, de
	ld   a, (hl)
	or   c
	ld   c, a
	ld   (hl), c
	di
	ld   a, c
	out  ($BF), a
	ld   a, e
	set  7, a
	out  ($BF), a
	ei
	ret


; Data from 8E4 to 987 (164 bytes)
.db $7D, $5C, $2F, $47, $16, $00, $21, $F7, $C0, $19, $7E, $A0, $4F, $71, $F3, $79
.db $D3, $BF, $7B, $CB, $FF, $D3, $BF, $FB, $C9, $F3, $7D, $D3, $BF, $3E, $88, $D3
.db $BF, $FB, $C9, $F3, $7D, $D3, $BF, $3E, $89, $D3, $BF, $FB, $C9, $F3, $7D, $D3
.db $BF, $3E, $87, $D3, $BF, $FB, $C9, $CB, $45, $28, $04, $0E, $FB, $18, $02, $0E
.db $FF, $F3, $79, $D3, $BF, $3E, $86, $D3, $BF, $FB, $C9, $4D, $CB, $41, $28, $0F
.db $C5, $21, $02, $01, $CD, $CD, $08, $C1, $21, $F9, $C0, $36, $10, $18, $0D, $C5
.db $21, $02, $01, $CD, $E4, $08, $C1, $21, $F9, $C0, $36, $08, $CB, $49, $28, $14
.db $21, $01, $01, $CD, $CD, $08, $21, $FA, $C0, $36, $10, $FD, $21, $F9, $C0, $FD
.db $CB, $00, $26, $C9, $21, $01, $01, $CD, $E4, $08, $21, $FA, $C0, $36, $08, $C9
.db $21, $02, $00, $39, $4E, $06, $00, $21, $00, $C0, $09, $CF, $21, $03, $00, $39
.db $7E, $D3, $BE, $C9

_LABEL_988_7:
	ld   hl, $0002
	add  hl, sp
	ld   c, (hl)
	ld   b, $00
	ld   hl, $C010
	add  hl, bc
	rst  $8
	ld   hl, $0003
	add  hl, sp
	ld   a, (hl)
	out  ($BE), a
	ret


; Data from 99C to 9D4 (57 bytes)
.db $11, $00, $C0, $0E, $BF, $F3, $ED, $59, $ED, $51, $FB, $06, $10, $0E, $BE, $ED
.db $A3, $20, $FC, $C9, $11, $10, $C0, $0E, $BF, $F3, $ED, $59, $ED, $51, $FB, $06
.db $10, $0E, $BE, $ED, $A3, $20, $FC, $C9, $7D, $D3, $BE, $C9, $21, $ED, $C0, $36
.db $00, $21, $ED, $C0, $CB, $46, $28, $F9, $C9

_LABEL_9D5_27:
	ld   hl, ($C0F1)
	ret


; Data from 9D9 to A31 (89 bytes)
.db $FD, $21, $F3, $C0, $FD, $7E, $00, $2F, $4F, $FD, $7E, $01, $2F, $47, $FD, $21
.db $F1, $C0, $FD, $7E, $00, $A1, $6F, $FD, $7E, $01, $A0, $67, $C9, $3A, $F1, $C0
.db $FD, $21, $F3, $C0, $FD, $A6, $00, $6F, $3A, $F2, $C0, $FD, $21, $F3, $C0, $FD
.db $A6, $01, $67, $C9, $FD, $21, $F1, $C0, $FD, $7E, $00, $2F, $4F, $FD, $7E, $01
.db $2F, $47, $79, $FD, $21, $F3, $C0, $FD, $A6, $00, $6F, $78, $FD, $A6, $01, $67
.db $C9, $FD, $21, $EF, $C0, $FD, $6E, $00, $C9

_LABEL_A32_20:
	ld   hl, $C0EF
	ld   (hl), $00
	ret

_LABEL_A38_28:
	ld   hl, $0002
	add  hl, sp
	ld   a, (hl)
	ld   ($C0F5), a
	ld   hl, $0003
	add  hl, sp
	ld   a, (hl)
	ld   ($C0F6), a
	ret

_LABEL_A49_29:
	ld   hl, $0002
	add  hl, sp
	ld   c, (hl)
	di
	ld   a, c
	out  ($BF), a
	ld   a, $8A
	out  ($BF), a
	ei
	ret


; Data from A58 to A5F (8 bytes)
.db $DB, "~o", $C9, $DB, "o", $C9

_LABEL_A60_10:
	push af
	push hl
	in   a, ($BF)
	ld   ($C0EE), a
	rlca
	jr   nc, _LABEL_A83_11
	ld   hl, $C0ED
	ld   (hl), $01
	ld   hl, ($C0F1)
	ld   ($C0F3), hl
	in   a, ($DC)
	cpl
	ld   hl, $C0F1
	ld   (hl), a
	in   a, ($DD)
	cpl
	inc  hl
	ld   (hl), a
	jr   _LABEL_A91_12

_LABEL_A83_11:
	push bc
	push de
	push iy
	ld   hl, ($C0F5)
	call _LABEL_AA9_13
	pop  iy
	pop  de
	pop  bc
_LABEL_A91_12:
	pop  hl
	pop  af
	ei
	reti

_LABEL_A96_32:
	push af
	push bc
	push de
	push hl
	push iy
	ld   hl, $C0EF
	ld   (hl), $01
	pop  iy
	pop  hl
	pop  de
	pop  bc
	pop  af
	retn

_LABEL_AA9_13:
	jp   (hl)


; Data from AAA to AAD (4 bytes)
.db $04, $20, $08, $08

_LABEL_AAE_4:
	ld   bc, $0004
	ld   a, b
	or   c
	jr   z, _LABEL_ABD_5
	ld   de, $C0F7
	ld   hl, $0AAA
	ldir
_LABEL_ABD_5:
	ret


.BANK 1 SLOT 1
.ORG $0000


; Data from 4000 to 7FFF (16384 bytes)
.incbin "output.sms.dat.10"


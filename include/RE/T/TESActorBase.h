// ============================================================================
//                             TESActorBase.h
// ----------------------------------------------------------------------------
// Part of the open-source Dynamic Animation Replacer (DARGH).
// 
// Copyright (c) 2023 Nox Sidereum
// Copyright (c) 2018 Ryan - rsm - McKenzie
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the �Software�), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is furnished
// to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED �AS IS�, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
// 
// (The MIT License)
// ============================================================================
// Note from Nox Sidereum:
// 
//     In writing DARGH and reverse engineering DAR, I have attempted to be
//     consistent with CommonLibSSE structures and variable names. This
//     should facilitate any future porting of this code to 100% CommonLibSSE
//     (which I'd encourage).
// 
//     Many thanks to Ryan and the authors of CommonLibSSE.
// 
// This particular file is based on
//    https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/blob/master/include/RE/T/TESActorBase.h
#pragma once
#include "RE/A/ActorValueOwner.h"
#include "RE/T/TESActorBaseData.h"
#include "RE/T/TESFullName.h"

struct TESActorBase
{
	// override:
	uint64_t           unk0[6];                  // 000 (public TESBoundAnimObject)
	TESActorBaseData   actorData;                // 030 (public TESActorBaseData)         
	uint64_t           container[3];             // 088 (public TESContainer)
	uint64_t           spellList[2];             // 0A0 (public TESSpellList)
	uint64_t           aiForm[5];                // 0B0 (public TESAIForm)
	TESFullName        fullName;                 // 0D8 (public TESFullName)
	ActorValueOwner    actorValueOwner;          // 0E8 (public ActorValueOwner)
	uint64_t           destructible[2];          // 0F0 (public BGSDestructibleObjectForm)
	uint64_t           skinForm[2];              // 100 (public BGSSkinForm)
	BGSKeywordForm     keywordForm;              // 110 (public BGSKeywordForm)
	uint64_t           attackData[2];            // 128 (public BGSAttackDataForm)
	uint64_t           perkRanks[3];             // 138 (public BGSPerkRankArray)
};
static_assert(sizeof(TESActorBase) == 0x150);
/*******************************************************************************
 *   Ethereum 2 Deposit Application
 *   (c) 2020 Ledger
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/

#include <stdint.h>
#include "art_blocks_plugin.h"

// Function: purchase
// Selector: 0xefef39a1
static const uint8_t PURCHASE_SELECTOR[SELECTOR_SIZE] = {0xef, 0xef, 0x39, 0xa1};
// Function: purchaseTo
// Selector: 0x891407c0
static const uint8_t PURCHASE_TO_SELECTOR[SELECTOR_SIZE] = {0x89, 0x14, 0x07, 0xc0};

// Plugin uses 0x00000 as a dummy address to reprecent ETH.
const uint8_t NULL_ETH_ADDRESS[ADDRESS_LENGTH] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

// Array of all the different nft selectors.
const uint8_t *const ART_BLOCKS_SELECTORS[NUM_SELECTORS] = {
    PURCHASE_SELECTOR,
    PURCHASE_TO_SELECTOR,
};

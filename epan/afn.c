/* afn.c
 * RFC 1700 address family numbers
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "config.h"

#include <epan/value_string.h>
#include <epan/afn.h>

const value_string afn_vals[] = {
    { AFNUM_RESERVED,       "Reserved" },
    { AFNUM_INET,           "IPv4" },
    { AFNUM_INET6,          "IPv6" },
    { AFNUM_NSAP,           "NSAP" },
    { AFNUM_HDLC,           "HDLC (8-bit multidrop)" },
    { AFNUM_BBN1822,        "BBN 1822" },
    { AFNUM_802,            "802 (includes all 802 media plus Ethernet)" },
    { AFNUM_E163,           "E.163" },
    { AFNUM_E164,           "E.164 (SMDS, Frame Relay, ATM)" },
    { AFNUM_F69,            "F.69 (Telex)" },
    { AFNUM_X121,           "X.121 (X.25, Frame Relay)" },
    { AFNUM_IPX,            "IPX" },
    { AFNUM_ATALK,          "Appletalk" },
    { AFNUM_DECNET,         "Decnet IV" },
    { AFNUM_BANYAN,         "Banyan Vines" },
    { AFNUM_E164NSAP,       "E.164 with NSAP subaddress" },
    { AFNUM_DNS,            "DNS (Domain Name System)" },
    { AFNUM_DISTNAME,       "Distinguished Name" },
    { AFNUM_AS_NUMBER,      "AS Number" },
    { AFNUM_XTP_IP4,        "XTP over IP version 4" },
    { AFNUM_XTP_IP6,        "XTP over IP version 6" },
    { AFNUM_XTP,            "XTP native mode XTP" },
    { AFNUM_FC_WWPN,        "Fibre Channel World-Wide Port Name" },
    { AFNUM_FC_WWNN,        "Fibre Channel World-Wide Node Name" },
    { AFNUM_GWID,           "GWID" },
    { AFNUM_L2VPN,          "Layer-2 VPN" },
    { AFNUM_L2VPN_OLD,      "Layer-2 VPN (old)" },
    { AFNUM_MPLS_TP_SEI,    "MPLS-TP Section Endpoint Identifier"},
    { AFNUM_MPLS_TP_LSPEI,  "MPLS-TP LSP Endpoint Identifier"},
    { AFNUM_MPLS_TP_PEI,    "MPLS-TP Pseudowire Endpoint Identifier"},
    { AFNUM_MT_IP,          "MT IP: Multi-Topology IP version 4"},
    { AFNUM_MT_IPV6,        "MT IPv6: Multi-Topology IP version 6"},
    { AFNUM_EIGRP_COMMON,   "EIGRP Common Service Family" },
    { AFNUM_EIGRP_IPV4,     "EIGRP IPv4 Service Family" },
    { AFNUM_EIGRP_IPV6,     "EIGRP IPv6 Service Family" },
    { AFNUM_LCAF,           "LISP Canonical Address Format (LCAF)" },
    { AFNUM_BGP_LS,         "BGP-LS" },
    { AFNUM_EUI48,          "48-bit MAC Address" },
    { AFNUM_EUI64,          "64-bit MAC Address" },
    { AFNUM_OUI,            "OUI"},
    { AFNUM_MAC_24,         "MAC/24"},
    { AFNUM_MAC_40,         "MAC/40"},
    { AFNUM_IPv6_64,        "IPv6/64"},
    { AFNUM_RB_PID,         "RBridge Port ID"},
    { AFNUM_TRILL_NICKNAME, "TRILL Nickname"},
    { 65535,                "Reserved" },
    { 0, NULL },
};

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 4
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=4 tabstop=8 expandtab:
 * :indentSize=4:tabSize=8:noTabs=true:
 */

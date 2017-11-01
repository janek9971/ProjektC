/*
 * ipv4.h
 *
 *  Created on: Oct 25, 2017
 *      Author: root
 */

#ifndef IPV4_H_
#define IPV4_H_
#define PCKT_LEN 8192

unsigned short csum(unsigned short *buf, int nwords);

struct ipheader {

	unsigned char iph_ihl :5, iph_ver :4;

	unsigned char iph_tos;

	unsigned short int iph_len;

	unsigned short int iph_ident;

	unsigned char iph_flag;

	unsigned short int iph_offset;

	unsigned char iph_ttl;

	unsigned char iph_protocol;

	unsigned short int iph_chksum;

	unsigned int iph_sourceip;

	unsigned int iph_destip;

};

#endif /* IPV4_H_ */

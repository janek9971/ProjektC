/*
 * udp.h
 *
 *  Created on: Oct 25, 2017
 *      Author: root
 */

#ifndef UDP_H_
#define UDP_H_
// UDP header's structure

struct udpheader {

	unsigned short int udph_srcport;

	unsigned short int udph_destport;

	unsigned short int udph_len;

	unsigned short int udph_chksum;

};

#endif /* UDP_H_ */

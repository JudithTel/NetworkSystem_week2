/*
* NSProtocol.h
*
*  Created on : 14 jan. 2015
* Author : Jaco
* Updated on : 11 feb. 2016
* Author : Frans
*/

#ifndef NSPROTOCOL_H_
#define NSPROTOCOL_H_

#include "IRDTProtocol.h"
#include "../client/NetworkLayer.h"
#include "../client/Utils.h"
#include <cstdio>
#include <iostream>
#include <iterator>
#include <vector>

namespace protocol {

	class NSProtocol : public IRDTProtocol {


	public:
		NSProtocol();
		~NSProtocol();
		void sender();
		void receiver();
		void setNetworkLayer(client::NetworkLayer);
		void setFileID(std::string);
		void TimeoutElapsed(int32_t);

	private:
		std::string fileID;
		client::NetworkLayer* networkLayer;
		const uint32_t HEADERSIZE = 1;   // number of header bytes in each packet
		const uint32_t DATASIZE = 128;   // max. number of user data bytes in each packet
	};

} /* namespace protocol */

#endif /* NSPROTOCOL_H_ */

#include "core/Core.hpp"

namespace bakcyl::core {

Core::Core()
{

	struct Dataforemail email_data;

	unsigned short DemandIndicator(int quality, std::time_t date) {
		return 0;
	}

	void GetDataforemailtoserver(struct Dataforemail* data) {
		// data.email_address_recipient = ;
		// data.product_name = ;
		// data.message = "An order for the product <<product_name>> with the id <<product_id>> is needed.
		//	 The product demand indicator is << demand_indicator >>" ;
	}

	void SendDataforemailtoserver(struct Dataforemail* data) {
		// data.email_address_recipient;
                // data.product_name;
                // data.message;
	}

}

}

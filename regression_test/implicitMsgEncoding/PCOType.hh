/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Bartha, Norbert
 *   Delic, Adam
 *   Lovassy, Arpad
 *   Raduly, Csaba
 *   Szabados, Kristof
 *
 ******************************************************************************/
// This Test Port skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.7.pre0 build 8
// for edmdeli (edmdeli@EGNA8004JPBUT7R) on Thu Mar  1 14:45:21 2007


// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef PCOType_HH
#define PCOType_HH

#include <TTCN3.hh>

// Note: Header file MyExample.hh must not be included into this file!
//Please add the declarations of message types manually.

#ifndef OLD_NAMES
namespace TimplicitEnc {
#endif

class PCOType_PROVIDER : public PORT {
public:
	PCOType_PROVIDER(const char *par_port_name = NULL);
	~PCOType_PROVIDER();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);

	void Event_Handler(const fd_set *read_fds,
		const fd_set *write_fds, const fd_set *error_fds,
		double time_since_last_call);

protected:
	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const CHARSTRING& send_par);
	virtual void incoming_message(const CHARSTRING& incoming_par) = 0;
	void outgoing_send(const OCTETSTRING& send_par);
	virtual void incoming_message(const OCTETSTRING& incoming_par) = 0;
};

#ifndef OLD_NAMES
} /* end of namespace */
#endif

#endif
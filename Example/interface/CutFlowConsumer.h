/* Copyright (c) 2013 - All Rights Reserved
 *   Thomas Hauth  <Thomas.Hauth@cern.ch>
 *   Joram Berger  <Joram.Berger@cern.ch>
 *   Dominik Haitz <Dominik.Haitz@kit.edu>
 */

#pragma once

#include "Artus/Core/interface/Cpp11Support.h"
#include "Artus/Core/interface/CutFlow.h"

#include "Artus/Consumer/interface/CutFlowConsumerBase.h"

#include "TraxTypes.h"


class CutFlowConsumer: public CutFlowConsumerBase< TraxTypes > {

public:

	virtual void Finish() ARTUS_CPP11_OVERRIDE {
		std::cout << "Cut Flow for pipeline: " << m_pipelineName << std::endl;
		std::cout << m_flow.ToString() << std::endl;
	}

};

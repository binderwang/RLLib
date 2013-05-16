/*
 * MountainCarTest.h
 *
 *  Created on: May 15, 2013
 *      Author: sam
 */

#ifndef MOUNTAINCARTEST_H_
#define MOUNTAINCARTEST_H_

#include "HeaderTest.h"
#include "MountainCarTest.h"

// From the RLLib
#include "Vector.h"
#include "Trace.h"
#include "Projector.h"
#include "ControlAlgorithm.h"
#include "Representation.h"

// From the simulation
#include "MCar2D.h"
#include "Simulator.h"

RLLIB_TEST(MountainCarTest)

class MountainCarTest: public MountainCarTestBase
{
  public:
    MountainCarTest()
    {
      RLLibTestRegistory::registerInstance(this);
    }

    virtual ~MountainCarTest()
    {
    }
    void run();

  private:
    void testSarsaTabularActionMountainCar();
    void testOnPolicyBoltzmannRTraceTabularActionCar();
    void testSarsaMountainCar();
    void testExpectedSarsaMountainCar();
    void testGreedyGQOnPolicyMountainCar();
    void testGreedyGQMountainCar();
    void testOffPACMountainCar();
};

#endif /* MOUNTAINCARTEST_H_ */